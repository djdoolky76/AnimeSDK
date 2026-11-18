#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NDGBCCIFAKE_GIMKAFNHLIE.h"

#define NDGBCCIFAKE_DPNLLKMJMMB_OFFSET UNITYSDK_OFFSET(0xE574340)
#define NDGBCCIFAKE_FEBGDGJCEOF_OFFSET UNITYSDK_OFFSET(0xE574330)
#define NDGBCCIFAKE_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0xE574390)
#define NDGBCCIFAKE__CTOR_OFFSET UNITYSDK_OFFSET(0xE574320)

inline static constexpr unsigned int NDGBCCIFAKE_TypeDefinitionIndex = 81093;

class NDGBCCIFAKE : public ::System::Object
{
public:
	::System::Int32 INNDJHOCDPF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDGBCCIFAKE__CTOR_OFFSET))(this);
	}

	::System::Boolean FEBGDGJCEOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDGBCCIFAKE_FEBGDGJCEOF_OFFSET))(this);
	}

	::NDGBCCIFAKE_GIMKAFNHLIE DPNLLKMJMMB()
	{
		return ((::NDGBCCIFAKE_GIMKAFNHLIE(*)(::PVOID))((::PBYTE)hIl2Cpp + NDGBCCIFAKE_DPNLLKMJMMB_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDGBCCIFAKE_NPOLNFDBOOD_OFFSET))(this);
	}
};
