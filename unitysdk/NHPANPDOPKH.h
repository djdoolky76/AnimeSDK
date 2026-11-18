#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BHCAIFIEJPJ;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class HitWallCameraShakeConfig; }

#define NHPANPDOPKH_CCLCMGFFNLM_OFFSET UNITYSDK_OFFSET(0x12C60500)
#define NHPANPDOPKH_HEGPPHAGDCO_OFFSET UNITYSDK_OFFSET(0x12C60490)
#define NHPANPDOPKH_OLGLPNOCJMP_OFFSET UNITYSDK_OFFSET(0x12C60510)
#define NHPANPDOPKH__CTOR_OFFSET UNITYSDK_OFFSET(0x12C604F0)

inline static constexpr unsigned int NHPANPDOPKH_TypeDefinitionIndex = 73261;

class NHPANPDOPKH : public ::System::Object
{
public:
	::MoleMole::Config::HitWallCameraShakeConfig* HOOCHMFHPPO; // 0x10
	::MoleMole::Battle::Entity* _KOLPBICLIPC_k__BackingField; // 0x18
	::BHCAIFIEJPJ* HECLPJIMAEF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPANPDOPKH__CTOR_OFFSET))(this);
	}

	::System::Void HEGPPHAGDCO(::BHCAIFIEJPJ* HBDIPMONDPM, ::MoleMole::Config::HitWallCameraShakeConfig* LEBHGKLBPMP)
	{
		return ((::System::Void(*)(::PVOID, ::BHCAIFIEJPJ*, ::MoleMole::Config::HitWallCameraShakeConfig*))((::PBYTE)hIl2Cpp + NHPANPDOPKH_HEGPPHAGDCO_OFFSET))(this, HBDIPMONDPM, LEBHGKLBPMP);
	}

	::System::Void CCLCMGFFNLM(::MoleMole::Battle::Entity* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NHPANPDOPKH_CCLCMGFFNLM_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Battle::Entity* OLGLPNOCJMP()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPANPDOPKH_OLGLPNOCJMP_OFFSET))(this);
	}
};
