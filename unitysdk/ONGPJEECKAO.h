#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFDIBDGCLKA.h"
#include "unitysdk/System/ValueType.h"

#define ONGPJEECKAO_AOMIFNILNNA_OFFSET UNITYSDK_OFFSET(0x15FF1C90)
#define ONGPJEECKAO_HJNEFOKBAGG_OFFSET UNITYSDK_OFFSET(0x15FF1D10)
#define ONGPJEECKAO__CTOR_OFFSET UNITYSDK_OFFSET(0x778D70)

inline static constexpr unsigned int ONGPJEECKAO_TypeDefinitionIndex = 87831;

struct alignas(4) ONGPJEECKAO
{
	::System::Boolean GCCLAFMBAPL; // 0x10
	::System::Byte _padding0[0x3];
	::MFDIBDGCLKA CJHKKDKFGJE; // 0x14

	::System::Void _ctor(::System::Boolean BIGHJGGBHPO, ::MFDIBDGCLKA& AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MFDIBDGCLKA&))((::PBYTE)hIl2Cpp + ONGPJEECKAO__CTOR_OFFSET))(this, BIGHJGGBHPO, AMNIHACKELI);
	}

	/*
	static ::ONGPJEECKAO AOMIFNILNNA(::MFDIBDGCLKA& AMNIHACKELI)
	{
		return ((::ONGPJEECKAO(*)(::MFDIBDGCLKA&))((::PBYTE)hIl2Cpp + ONGPJEECKAO_AOMIFNILNNA_OFFSET))(AMNIHACKELI);
	}
	*/

	/*
	static ::ONGPJEECKAO HJNEFOKBAGG()
	{
		return ((::ONGPJEECKAO(*)())((::PBYTE)hIl2Cpp + ONGPJEECKAO_HJNEFOKBAGG_OFFSET))();
	}
	*/
};
