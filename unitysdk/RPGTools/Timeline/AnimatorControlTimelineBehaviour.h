#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8ADA40)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR_JEPIIMNNFGM_OFFSET UNITYSDK_OFFSET(0xE8AD7B0)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE8AD9C0)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xE8AD970)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE8AD660)

namespace RPGTools::Timeline
{
	class AnimatorControlTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Boolean UseFloatParam; // 0x10
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::Object*>* FloatParams; // 0x18
		::System::Boolean UseBoolParam; // 0x20
		::System::Byte _padding1[0x7];
		::Il2CppArray<::System::Object*>* BoolParams; // 0x28
		::System::Boolean UseTriggerParam; // 0x30
		::System::Byte _padding2[0x7];
		::System::String* TriggerParam; // 0x38
		::System::String* ToState; // 0x40
		::UnityEngine::Animator* _animator; // 0x48
		::System::Boolean _firstFrameHappened; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void JEPIIMNNFGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINEBEHAVIOUR_JEPIIMNNFGM_OFFSET))(this);
		}

	};
}
