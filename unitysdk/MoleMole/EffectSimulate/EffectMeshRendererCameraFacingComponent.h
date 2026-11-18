#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/EffectMeshRendererCameraFacingComponent_PJACCLNKIEC.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Camera; }

#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERCAMERAFACINGCOMPONENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12B2BFC0)
#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERCAMERAFACINGCOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12B2BE60)
#define MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERCAMERAFACINGCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B2C840)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int EffectMeshRendererCameraFacingComponent_TypeDefinitionIndex = 47590;

	class EffectMeshRendererCameraFacingComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Camera* targetCamera; // 0x18
		::MoleMole::EffectSimulate::EffectMeshRendererCameraFacingComponent_PJACCLNKIEC axisToFaceCamera; // 0x20
		::System::Single additionalRollDegrees; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERCAMERAFACINGCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERCAMERAFACINGCOMPONENT_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_EFFECTMESHRENDERERCAMERAFACINGCOMPONENT_LATEUPDATE_OFFSET))(this);
		}
	};
}
