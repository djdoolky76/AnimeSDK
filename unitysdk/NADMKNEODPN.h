#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class IANAIPMNOBC;

#define NADMKNEODPN_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x6EEF20)
#define NADMKNEODPN_JLEGHNGEBOG_OFFSET UNITYSDK_OFFSET(0x6EEF00)
#define NADMKNEODPN_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x6EEF30)

inline static constexpr unsigned int NADMKNEODPN_TypeDefinitionIndex = 84851;

struct alignas(8) NADMKNEODPN
{
	::IANAIPMNOBC* KEHECMCDLFC; // 0x10
	::UnityEngine::Vector3 AHBALEAOBIJ; // 0x18

	::UnityEngine::Vector3 JLEGHNGEBOG()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NADMKNEODPN_JLEGHNGEBOG_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NADMKNEODPN_FFCPIEDHBDP_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NADMKNEODPN_NPOLNFDBOOD_OFFSET))(this);
	}
};
