#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class NDGBCCIFAKE;

#define NDGBCCIFAKE_GIMKAFNHLIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7937A0)
#define NDGBCCIFAKE_GIMKAFNHLIE__CTOR_OFFSET UNITYSDK_OFFSET(0x793790)

inline static constexpr unsigned int NDGBCCIFAKE_GIMKAFNHLIE_TypeDefinitionIndex = 81094;

struct alignas(8) NDGBCCIFAKE_GIMKAFNHLIE
{
	::NDGBCCIFAKE* AMNIHACKELI; // 0x10

	::System::Void _ctor(::NDGBCCIFAKE* HLJAGJNPPEG)
	{
		return ((::System::Void(*)(::PVOID, ::NDGBCCIFAKE*))((::PBYTE)hIl2Cpp + NDGBCCIFAKE_GIMKAFNHLIE__CTOR_OFFSET))(this, HLJAGJNPPEG);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDGBCCIFAKE_GIMKAFNHLIE_DISPOSE_OFFSET))(this);
	}
};
