#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NMILKOJNFFF.h"

#define EDMMIENABLC_KNHEOBKDFNG_COMPARE_OFFSET UNITYSDK_OFFSET(0x10F21260)
#define EDMMIENABLC_KNHEOBKDFNG__CTOR_OFFSET UNITYSDK_OFFSET(0x10F212D0)

inline static constexpr unsigned int EDMMIENABLC_KNHEOBKDFNG_TypeDefinitionIndex = 53784;

class EDMMIENABLC_KNHEOBKDFNG : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMMIENABLC_KNHEOBKDFNG__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::NMILKOJNFFF HAAEBCOBKFF, ::NMILKOJNFFF BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::NMILKOJNFFF, ::NMILKOJNFFF))((::PBYTE)hIl2Cpp + EDMMIENABLC_KNHEOBKDFNG_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
