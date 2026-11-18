#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_SCENEMECHANISMEFFECT_SCENEMECHANISMEFFECTLODITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14BC1710)

namespace MoleMole::SceneMechanismEffect
{
	inline static constexpr unsigned int SceneMechanismEffectLODItem_TypeDefinitionIndex = 88145;

	class SceneMechanismEffectLODItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean enableDistanceCulling; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single cullDistance; // 0x1C
		::UnityEngine::ParticleSystem* effect; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMECHANISMEFFECT_SCENEMECHANISMEFFECTLODITEM__CTOR_OFFSET))(this);
		}
	};
}
