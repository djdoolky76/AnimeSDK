#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"

namespace MoleMole::Battle { class XWeaponTrailCustom; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_GET_WRAPPERCOMSHOWER_OFFSET UNITYSDK_OFFSET(0x19B65BB0)
#define MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_MLOKIDFFEPH_OFFSET UNITYSDK_OFFSET(0x19B65D60)
#define MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x19B65CD0)
#define MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19B659F0)
#define MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_PKOOKCIHDHF_OFFSET UNITYSDK_OFFSET(0x19B65680)
#define MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_SET_WRAPPERCOMSHOWER_OFFSET UNITYSDK_OFFSET(0x19B65C50)
#define MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM__CTOR_OFFSET UNITYSDK_OFFSET(0x19B65C60)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESXWeaponTrailCustom_TypeDefinitionIndex = 45168;

	class ESXWeaponTrailCustom : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM__CTOR_OFFSET))(this);
		}

		::System::Void PKOOKCIHDHF(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_PKOOKCIHDHF_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void PHOADBJGFBE(::System::Boolean PBKICEDNILK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_PHOADBJGFBE_OFFSET))(this, PBKICEDNILK);
		}

		::MoleMole::Battle::XWeaponTrailCustom* get_wrapperComShower()
		{
			return ((::MoleMole::Battle::XWeaponTrailCustom*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_GET_WRAPPERCOMSHOWER_OFFSET))(this);
		}

		::System::Void set_wrapperComShower(::MoleMole::Battle::XWeaponTrailCustom* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::XWeaponTrailCustom*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_SET_WRAPPERCOMSHOWER_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void OHFHFOHMBJH(::System::Boolean MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_OHFHFOHMBJH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void MLOKIDFFEPH(::UnityEngine::GameObject* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESXWEAPONTRAILCUSTOM_MLOKIDFFEPH_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
