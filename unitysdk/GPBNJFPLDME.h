#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NLLAEGMBGNN.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define GPBNJFPLDME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x65FF10)
#define GPBNJFPLDME__CTOR_OFFSET UNITYSDK_OFFSET(0x65FE70)

inline static constexpr unsigned int GPBNJFPLDME_TypeDefinitionIndex = 92524;

struct alignas(8) GPBNJFPLDME
{
	::System::String* ONOAGAPJNCG; // 0x10
	::NLLAEGMBGNN OBNIAHNMHPF; // 0x18
	::System::Int32 MLBNKKKCJGF; // 0x1C
	::System::Boolean HFFOAIHGNIH; // 0x20

	::System::Void _ctor(::System::String* NCMBJPNBOBD, ::NLLAEGMBGNN PBMKJNLFHME)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::NLLAEGMBGNN))((::PBYTE)hIl2Cpp + GPBNJFPLDME__CTOR_OFFSET))(this, NCMBJPNBOBD, PBMKJNLFHME);
	}

	::System::Void _ctor_1(::System::String* NCMBJPNBOBD, ::NLLAEGMBGNN PBMKJNLFHME, ::System::Int32 BJHNHNNNHCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::NLLAEGMBGNN, ::System::Int32))((::PBYTE)hIl2Cpp + GPBNJFPLDME__CTOR_1_OFFSET))(this, NCMBJPNBOBD, PBMKJNLFHME, BJHNHNNNHCP);
	}
};
