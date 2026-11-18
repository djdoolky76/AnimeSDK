#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESUIBehavior.h"

namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESUISIZE_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x1BA77B40)
#define MOLEMOLE_EFFECTSIMULATE_ESUISIZE_LLLIDJKOBEC_OFFSET UNITYSDK_OFFSET(0x1BA77E50)
#define MOLEMOLE_EFFECTSIMULATE_ESUISIZE_MLOKIDFFEPH_OFFSET UNITYSDK_OFFSET(0x1BA77EF0)
#define MOLEMOLE_EFFECTSIMULATE_ESUISIZE_PKOOKCIHDHF_OFFSET UNITYSDK_OFFSET(0x1BA77850)
#define MOLEMOLE_EFFECTSIMULATE_ESUISIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA77D00)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESUISize_TypeDefinitionIndex = 76614;

	class ESUISize : public ::MoleMole::EffectSimulate::ESUIBehavior
	{
	public:
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* size; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUISIZE__CTOR_OFFSET))(this);
		}

		::System::Void PKOOKCIHDHF(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUISIZE_PKOOKCIHDHF_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUISIZE_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void LLLIDJKOBEC(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUISIZE_LLLIDJKOBEC_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void MLOKIDFFEPH(::UnityEngine::GameObject* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUISIZE_MLOKIDFFEPH_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
