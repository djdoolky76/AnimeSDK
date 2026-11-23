#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define B5C2F18B73337FC8_AE8CCF6DE3B3DA96__CTOR_OFFSET UNITYSDK_OFFSET(0x254E7D0)

inline static constexpr unsigned int B5C2F18B73337FC8_AE8CCF6DE3B3DA96_TypeDefinitionIndex = 19110;

struct alignas(4) B5C2F18B73337FC8_AE8CCF6DE3B3DA96
{
	::System::Single BB8C609F76620E45; // 0x10
	::System::Single A0A0D02932F12CFD; // 0x14
	::System::Single EFD6B3862CDDD176; // 0x18

	::System::Void _ctor(::UnityEngine::Vector3 EAB6A87D088A15E7)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + B5C2F18B73337FC8_AE8CCF6DE3B3DA96__CTOR_OFFSET))(this, EAB6A87D088A15E7);
	}
};
