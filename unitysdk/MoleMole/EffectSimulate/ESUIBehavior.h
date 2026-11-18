#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"

namespace MoleMole::EffectSimulate { class NESUIDataCache; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESUIBEHAVIOR_MLOKIDFFEPH_OFFSET UNITYSDK_OFFSET(0x118FFB90)
#define MOLEMOLE_EFFECTSIMULATE_ESUIBEHAVIOR_PKOOKCIHDHF_OFFSET UNITYSDK_OFFSET(0x118FF990)
#define MOLEMOLE_EFFECTSIMULATE_ESUIBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x118FFB20)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESUIBehavior_TypeDefinitionIndex = 85372;

	class ESUIBehavior : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		::MoleMole::EffectSimulate::NESUIDataCache* m_stUIDataCache; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void PKOOKCIHDHF(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIBEHAVIOR_PKOOKCIHDHF_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void MLOKIDFFEPH(::UnityEngine::GameObject* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIBEHAVIOR_MLOKIDFFEPH_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
