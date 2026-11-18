#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESUIBehavior.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESUIINVERTMASK_MLOKIDFFEPH_OFFSET UNITYSDK_OFFSET(0x19B655E0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIINVERTMASK_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x19B655F0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIINVERTMASK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19B652B0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIINVERTMASK_PKOOKCIHDHF_OFFSET UNITYSDK_OFFSET(0x19B64C10)
#define MOLEMOLE_EFFECTSIMULATE_ESUIINVERTMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x19B65570)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESUIInvertMask_TypeDefinitionIndex = 49717;

	class ESUIInvertMask : public ::MoleMole::EffectSimulate::ESUIBehavior
	{
	public:
		::System::Boolean invertMask; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIINVERTMASK__CTOR_OFFSET))(this);
		}

		::System::Void PKOOKCIHDHF(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIINVERTMASK_PKOOKCIHDHF_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void PHOADBJGFBE(::System::Boolean PBKICEDNILK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIINVERTMASK_PHOADBJGFBE_OFFSET))(this, PBKICEDNILK);
		}

		::System::Void MLOKIDFFEPH(::UnityEngine::GameObject* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIINVERTMASK_MLOKIDFFEPH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OHFHFOHMBJH(::System::Boolean MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIINVERTMASK_OHFHFOHMBJH_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
