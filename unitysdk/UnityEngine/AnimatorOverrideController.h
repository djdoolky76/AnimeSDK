#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/RuntimeAnimatorController.h"

namespace UnityEngine { class AnimatorOverrideController_B01040F6A2305DBF; }

#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_EB411732C99E3152_OFFSET UNITYSDK_OFFSET(0x4103A10)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_FB367A0433889880_OFFSET UNITYSDK_OFFSET(0x4103A60)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorOverrideController_TypeDefinitionIndex = 21062;

	class AnimatorOverrideController : public ::UnityEngine::RuntimeAnimatorController
	{
	public:
		::UnityEngine::AnimatorOverrideController_B01040F6A2305DBF* A8C0109948076691; // 0x18

		static ::System::Void EB411732C99E3152(::UnityEngine::AnimatorOverrideController* BD8273AB04C4B760, ::UnityEngine::RuntimeAnimatorController* E0733F652BA9B09A)
		{
			return ((::System::Void(*)(::UnityEngine::AnimatorOverrideController*, ::UnityEngine::RuntimeAnimatorController*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_EB411732C99E3152_OFFSET))(BD8273AB04C4B760, E0733F652BA9B09A);
		}

		static ::System::Void FB367A0433889880(::UnityEngine::AnimatorOverrideController* E0733F652BA9B09A)
		{
			return ((::System::Void(*)(::UnityEngine::AnimatorOverrideController*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_FB367A0433889880_OFFSET))(E0733F652BA9B09A);
		}
	};
}
