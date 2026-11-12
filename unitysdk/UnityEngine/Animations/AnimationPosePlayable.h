#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

#define UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x206697A0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x3EB8EB0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3EB8FC0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xEABF0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationPosePlayable_TypeDefinitionIndex = 5762;

	struct alignas(4) AnimationPosePlayable
	{
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10
		static ::UnityEngine::Animations::AnimationPosePlayable* StaticGet_m_NullPlayable()
		{
			return (::UnityEngine::Animations::AnimationPosePlayable*)UnitySDK::FromName("UnityEngine.Animations", "AnimationPosePlayable")->GetStaticField(0x7AD0);
		}

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_CCTOR_OFFSET))();
		}

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::UnityEngine::Animations::AnimationPosePlayable a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationPosePlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_EQUALS_OFFSET))(this, a1);
		}
		*/

	};
}
