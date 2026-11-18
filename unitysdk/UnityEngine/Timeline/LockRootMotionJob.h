#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"

#define UNITYENGINE_TIMELINE_LOCKROOTMOTIONJOB_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define UNITYENGINE_TIMELINE_LOCKROOTMOTIONJOB_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x9AEE50)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int LockRootMotionJob_TypeDefinitionIndex = 32346;

	struct alignas(4) LockRootMotionJob
	{
		::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_LOCKROOTMOTIONJOB_PROCESSROOTMOTION_OFFSET))(this, stream);
		}

		::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_LOCKROOTMOTIONJOB_PROCESSANIMATION_OFFSET))(this, stream);
		}
	};
}
