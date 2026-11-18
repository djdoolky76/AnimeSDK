#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CIEODNAJCEO_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x19A0F2B0)
#define CIEODNAJCEO_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x19A0F450)
#define CIEODNAJCEO__CTOR_OFFSET UNITYSDK_OFFSET(0x19A0F2A0)

inline static constexpr unsigned int CIEODNAJCEO_TypeDefinitionIndex = 48758;

class CIEODNAJCEO : public ::System::Object
{
public:
	::System::UInt32 JGBCLBPEFKK; // 0x10
	::System::Single MHNCLJLDBIG; // 0x14
	::UnityEngine::Vector3 MOFLIELLNIL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEODNAJCEO__CTOR_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEODNAJCEO_FFCPIEDHBDP_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEODNAJCEO_NPOLNFDBOOD_OFFSET))(this);
	}
};
