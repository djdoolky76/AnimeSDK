#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define DPCEONDGPMB_NMEAOMIGOIC_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x7FE03A0)

inline static constexpr unsigned int DPCEONDGPMB_NMEAOMIGOIC_TypeDefinitionIndex = 91696;

struct alignas(4) DPCEONDGPMB_NMEAOMIGOIC
{
	::System::Single OGMHMCOMLLM; // 0x10
	::System::Int32 NHJBMKHNAGN; // 0x14

	/*
	static ::DPCEONDGPMB_NMEAOMIGOIC COKNIICCODC(::System::Single OGMHMCOMLLM, ::System::Int32 NHJBMKHNAGN)
	{
		return ((::DPCEONDGPMB_NMEAOMIGOIC(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + DPCEONDGPMB_NMEAOMIGOIC_COKNIICCODC_OFFSET))(OGMHMCOMLLM, NHJBMKHNAGN);
	}
	*/
};
