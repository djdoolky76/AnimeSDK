#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x206688D0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x206688C0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x206687B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0x206685B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x20668490)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x3EB8B90)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3EB8910)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xEABF0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x20668800)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_SETABSOLUTEMOTIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x206688B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_SETABSOLUTEMOTION_OFFSET UNITYSDK_OFFSET(0x3EB8C70)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationMotionXToDeltaPlayable_TypeDefinitionIndex = 5757;

	struct alignas(4) AnimationMotionXToDeltaPlayable
	{
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10
		static ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable* StaticGet_m_NullPlayable()
		{
			return (::UnityEngine::Animations::AnimationMotionXToDeltaPlayable*)UnitySDK::FromName("UnityEngine.Animations", "AnimationMotionXToDeltaPlayable")->GetStaticField(0x7A40);
		}

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CCTOR_OFFSET))();
		}

		/*
		static ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable Create(::UnityEngine::Playables::PlayableGraph a1)
		{
			return ((::UnityEngine::Animations::AnimationMotionXToDeltaPlayable(*)(::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATE_OFFSET))(a1);
		}
		*/

		static ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph a1)
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATEHANDLE_OFFSET))(a1);
		}

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Playables::Playable op_Implicit(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable a1)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		::System::Boolean Equals(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Void SetAbsoluteMotion(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_SETABSOLUTEMOTION_OFFSET))(this, a1);
		}

		static ::System::Boolean CreateHandleInternal(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Playables::PlayableHandle a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATEHANDLEINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Void SetAbsoluteMotionInternal(::UnityEngine::Playables::PlayableHandle a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_SETABSOLUTEMOTIONINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean CreateHandleInternal_Injected(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Playables::PlayableHandle a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET))(a1, a2);
		}

	};
}
