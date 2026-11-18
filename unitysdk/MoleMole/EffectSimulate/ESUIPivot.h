#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESUIBehavior.h"

namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESUIPIVOT_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x146540A0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIPIVOT_LLLIDJKOBEC_OFFSET UNITYSDK_OFFSET(0x146543B0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIPIVOT_MLOKIDFFEPH_OFFSET UNITYSDK_OFFSET(0x14654450)
#define MOLEMOLE_EFFECTSIMULATE_ESUIPIVOT_PKOOKCIHDHF_OFFSET UNITYSDK_OFFSET(0x14653DB0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIPIVOT__CTOR_OFFSET UNITYSDK_OFFSET(0x14654260)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESUIPivot_TypeDefinitionIndex = 38841;

	class ESUIPivot : public ::MoleMole::EffectSimulate::ESUIBehavior
	{
	public:
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* pivot; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIPIVOT__CTOR_OFFSET))(this);
		}

		::System::Void PKOOKCIHDHF(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIPIVOT_PKOOKCIHDHF_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIPIVOT_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void LLLIDJKOBEC(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIPIVOT_LLLIDJKOBEC_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void MLOKIDFFEPH(::UnityEngine::GameObject* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIPIVOT_MLOKIDFFEPH_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
