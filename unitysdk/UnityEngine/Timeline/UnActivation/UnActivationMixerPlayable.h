#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/UnityEngine/Timeline/UnActivation/UnActivationTrack_PostPlaybackState.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1F603250)
#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_GET_POSTPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0x1F6032E0)
#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F603460)
#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1F603300)
#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_ONPROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1F6037A0)
#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1F603770)
#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_RECOVERSTATE_OFFSET UNITYSDK_OFFSET(0x1F6035C0)
#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1F6035F0)
#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_SET_POSTPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0x1F6032F0)
#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F603C60)

namespace UnityEngine::Timeline::UnActivation
{
	inline static constexpr unsigned int UnActivationMixerPlayable_TypeDefinitionIndex = 32539;

	class UnActivationMixerPlayable : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::UnityEngine::GameObject* m_BoundGameObject; // 0x18
		::System::Boolean m_BoundGameObjectInitialStateIsActive; // 0x20
		::System::Boolean isInClip; // 0x21
		::System::Byte _padding0[0x2];
		::UnityEngine::Timeline::UnActivation::UnActivationTrack_PostPlaybackState m_PostPlaybackState; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::UnActivation::UnActivationMixerPlayable*> Create(::UnityEngine::Playables::PlayableGraph graph, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::UnActivation::UnActivationMixerPlayable*>(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_CREATE_OFFSET))(graph, inputCount);
		}

		::UnityEngine::Timeline::UnActivation::UnActivationTrack_PostPlaybackState get_postPlaybackState()
		{
			return ((::UnityEngine::Timeline::UnActivation::UnActivationTrack_PostPlaybackState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_GET_POSTPLAYBACKSTATE_OFFSET))(this);
		}

		::System::Void set_postPlaybackState(::UnityEngine::Timeline::UnActivation::UnActivationTrack_PostPlaybackState value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::UnActivation::UnActivationTrack_PostPlaybackState))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_SET_POSTPLAYBACKSTATE_OFFSET))(this, value);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_ONPLAYABLEDESTROY_OFFSET))(this, playable);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_ONDESTROY_OFFSET))(this);
		}

		::System::Void RecoverState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_RECOVERSTATE_OFFSET))(this);
		}

		::System::Void SetActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_SETACTIVE_OFFSET))(this, active);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}

		::System::Void OnProcessFrame(::UnityEngine::Playables::Playable rootPlayable, ::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData, ::System::Single weight, ::System::Int32 mixerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_ONPROCESSFRAME_OFFSET))(this, rootPlayable, playable, info, playerData, weight, mixerIndex);
		}
	};
}
