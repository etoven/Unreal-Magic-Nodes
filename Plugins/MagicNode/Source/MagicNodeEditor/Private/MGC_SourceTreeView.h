//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///			Copyright 2020 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "MagicNodeEditor_Shared.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct FSourceTreeNode {
	FString FullPath;
	FString Path;
	//
	TSharedPtr<FSourceTreeNode>ParentNode;
	TArray<TSharedPtr<FSourceTreeNode>>ChildNodes;
	//
	//
	bool operator == (const FSourceTreeNode &Other) const {
		return (
			(Path==Other.Path) &&
			(FullPath==Other.FullPath) &&
			(ChildNodes==Other.ChildNodes) &&
			(ParentNode.Get()==Other.ParentNode.Get())
		);//
	}///
	//
	bool operator != (const FSourceTreeNode &Other) const {
		return !(*this==Other);
	}///
	//
	//
	TSharedPtr<FSourceTreeNode>FindNode(const FString &Node) {
		for (const TSharedPtr<FSourceTreeNode>&Ptr : ChildNodes) {
			if (!Ptr.IsValid()) {continue;}
			if (Ptr->Path==Node){return Ptr;}
		}///
		//
		return TSharedPtr<FSourceTreeNode>();
	}///
};

static TArray<TSharedPtr<FSourceTreeNode>>GlobalSourceTreeView = TArray<TSharedPtr<FSourceTreeNode>>();

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////