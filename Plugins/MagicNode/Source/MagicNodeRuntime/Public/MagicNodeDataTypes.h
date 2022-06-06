//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///			Copyright 2021 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "MagicNodeRuntime_Shared.h"
#include "MagicNodeDataTypes.generated.h"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// MGC Unsigned base types:

/// An 8-bit unsigned integer.
typedef FPlatformTypes::uint8		FUByte;
/// A 16-bit unsigned integer.
typedef FPlatformTypes::uint16		FUShort;
/// A 32-bit unsigned integer.
typedef FPlatformTypes::uint32		FUInt;
/// A 64-bit unsigned integer.
typedef FPlatformTypes::uint64		FULong;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// MGC Signed base types:

/// An 8-bit signed integer.
typedef	FPlatformTypes::int8		FByte;
/// A 16-bit signed integer.
typedef FPlatformTypes::int16		FShort;
/// A 32-bit signed integer.
typedef FPlatformTypes::int32		FInt;
/// A 64-bit signed integer.
typedef FPlatformTypes::int64		FLong;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// MGC Miscellaneous base types:

/// A boolean flag.
typedef	bool						FBool;
/// Single-precision floating point.
typedef	float						FFloat;
/// Double-precision floating point.
typedef	double						FDouble;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// MGC Script Data Types (Editor-Only):

USTRUCT()
struct FMGC_SourceCode {
	GENERATED_USTRUCT_BODY()
	//
	UPROPERTY() FString Header;
	UPROPERTY() FString Script;
	UPROPERTY() FString Types;
	//
	UPROPERTY(Category="MagicNode", EditDefaultsOnly) TArray<FString>Includes;
	UPROPERTY(Category="MagicNode", EditDefaultsOnly) TArray<FString>Macros;
public:
	FMGC_SourceCode()
		: Header(TEXT(""))
		, Script(TEXT(""))
		, Types(TEXT(""))
		, Includes()
		, Macros()
	{}
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////