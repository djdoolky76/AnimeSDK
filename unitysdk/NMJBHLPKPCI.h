#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJFGDPFPPOD.h"
#include "unitysdk/FLMJPFJKBGG.h"

class MFFAGJDENLJ;
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define NMJBHLPKPCI_AFCMCJLGJDL_OFFSET UNITYSDK_OFFSET(0x16B91A40)
#define NMJBHLPKPCI_BMGMBKGNMDI_OFFSET UNITYSDK_OFFSET(0x16B91A20)
#define NMJBHLPKPCI_EPEGKMMLHLJ_OFFSET UNITYSDK_OFFSET(0x16B920D0)
#define NMJBHLPKPCI__CTOR_OFFSET UNITYSDK_OFFSET(0x16B91A30)

inline static constexpr unsigned int NMJBHLPKPCI_TypeDefinitionIndex = 87613;

class NMJBHLPKPCI : public ::FLMJPFJKBGG
{
public:
	::UnityEngine::Transform* IBBNCKJGCMM; // 0x28
	::UnityEngine::RectTransform* APCPCMMEOJB; // 0x30
	::MFFAGJDENLJ* EFFAONJBCOG; // 0x38

	::System::Void _ctor(::MFFAGJDENLJ* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MFFAGJDENLJ*))((::PBYTE)hIl2Cpp + NMJBHLPKPCI__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::DJFGDPFPPOD BMGMBKGNMDI()
	{
		return ((::DJFGDPFPPOD(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJBHLPKPCI_BMGMBKGNMDI_OFFSET))(this);
	}

	::System::Boolean AFCMCJLGJDL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJBHLPKPCI_AFCMCJLGJDL_OFFSET))(this);
	}

	::System::Boolean EPEGKMMLHLJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJBHLPKPCI_EPEGKMMLHLJ_OFFSET))(this);
	}
};
