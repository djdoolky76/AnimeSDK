#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define APLKAJHNFIP_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0xF7832C0)
#define APLKAJHNFIP_LBCBPEJEHNB_OFFSET UNITYSDK_OFFSET(0xF783300)
#define APLKAJHNFIP_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0xF783430)
#define APLKAJHNFIP_PGALFPNDMLD_OFFSET UNITYSDK_OFFSET(0xF783360)
#define APLKAJHNFIP__CTOR_OFFSET UNITYSDK_OFFSET(0xF783480)

inline static constexpr unsigned int APLKAJHNFIP_TypeDefinitionIndex = 43817;

class APLKAJHNFIP : public ::System::Object
{
public:
	::UnityEngine::Vector3 ILOJFPNKJII; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLKAJHNFIP__CTOR_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APLKAJHNFIP_FFCPIEDHBDP_OFFSET))(this);
	}

	::UnityEngine::Vector3 LBCBPEJEHNB()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + APLKAJHNFIP_LBCBPEJEHNB_OFFSET))(this);
	}

	::System::Void PGALFPNDMLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLKAJHNFIP_PGALFPNDMLD_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLKAJHNFIP_NPOLNFDBOOD_OFFSET))(this);
	}
};
