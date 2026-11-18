#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NPCPODOBENO_LHNLCHMABCC_OFFSET UNITYSDK_OFFSET(0x106C8F20)

inline static constexpr unsigned int NPCPODOBENO_TypeDefinitionIndex = 46474;

struct alignas(8) NPCPODOBENO
{
	::System::String* FCCLIEJAKLI; // 0x10
	::System::Int32 IHOIJBAMBCC; // 0x18
	::System::Int32 ONKHHHOGCMA; // 0x1C
	::System::Boolean GFOPGINBGEK; // 0x20
	::System::Boolean ILMCELBODOJ; // 0x21
	::System::Boolean OFFKMJJLELG; // 0x22

	/*
	static ::NPCPODOBENO LHNLCHMABCC(::System::String* LCEGOBBEECM)
	{
		return ((::NPCPODOBENO(*)(::System::String*))((::PBYTE)hIl2Cpp + NPCPODOBENO_LHNLCHMABCC_OFFSET))(LCEGOBBEECM);
	}
	*/
};
