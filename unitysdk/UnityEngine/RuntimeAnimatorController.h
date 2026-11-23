#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace UnityEngine { class AnimationClip; }

#define UNITYENGINE_RUNTIMEANIMATORCONTROLLER_E24131DA5E33D095_OFFSET UNITYSDK_OFFSET(0x41051D0)
#define UNITYENGINE_RUNTIMEANIMATORCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x4105180)

namespace UnityEngine
{
	inline static constexpr unsigned int RuntimeAnimatorController_TypeDefinitionIndex = 21095;

	class RuntimeAnimatorController : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMEANIMATORCONTROLLER__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::AnimationClip*>* E24131DA5E33D095()
		{
			return ((::Il2CppArray<::UnityEngine::AnimationClip*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMEANIMATORCONTROLLER_E24131DA5E33D095_OFFSET))(this);
		}
	};
}
