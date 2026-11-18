#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/EffectMeshRendererBillboardComponent_CBHPLKFHKLC.h"
#include "unitysdk/MoleMole/EffectSimulate/EffectMeshRendererBillboardComponent_DEJICOKEIOM.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Camera; }

#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_DOBILLBOARD_OFFSET UNITYSDK_OFFSET(0x142E9800)
#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x142E9440)
#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x142E92B0)
#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_ONPOSTSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x142E95D0)
#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x142E9E30)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int EffectMeshRendererBillboardComponent_TypeDefinitionIndex = 73869;

	class EffectMeshRendererBillboardComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent_DEJICOKEIOM billboardMode; // 0x18
		::System::Single rotZ; // 0x1C
		::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent_CBHPLKFHKLC Stretched_lockAxis; // 0x20
		::System::Single Stretched_angleOffset; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnPostSimulationUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_ONPOSTSIMULATIONUPDATE_OFFSET))(this);
		}

		::System::Void DoBillboard(::UnityEngine::Camera* KONLMDBCDCK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERBILLBOARDCOMPONENT_DOBILLBOARD_OFFSET))(this, KONLMDBCDCK);
		}
	};
}
