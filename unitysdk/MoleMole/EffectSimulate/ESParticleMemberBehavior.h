#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_EFFECTSIMULATE_ESPARTICLEMEMBERBEHAVIOR_MLOKIDFFEPH_OFFSET UNITYSDK_OFFSET(0x142D0930)
#define MOLEMOLE_EFFECTSIMULATE_ESPARTICLEMEMBERBEHAVIOR_PKOOKCIHDHF_OFFSET UNITYSDK_OFFSET(0x142D0740)
#define MOLEMOLE_EFFECTSIMULATE_ESPARTICLEMEMBERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x142D08C0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESParticleMemberBehavior_TypeDefinitionIndex = 79120;

	class ESParticleMemberBehavior : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		::UnityEngine::ParticleSystem* m_stPSCom; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPARTICLEMEMBERBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void PKOOKCIHDHF(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPARTICLEMEMBERBEHAVIOR_PKOOKCIHDHF_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void MLOKIDFFEPH(::UnityEngine::GameObject* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPARTICLEMEMBERBEHAVIOR_MLOKIDFFEPH_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
