#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1EC45370)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x1EC45410)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER_GET_COMPLETIONTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1EC44EF0)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER_GET_HASPLAYBACK_OFFSET UNITYSDK_OFFSET(0x1EC44E70)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1EC44EE0)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1EC44E80)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER_GET_STEPCOUNT_OFFSET UNITYSDK_OFFSET(0x1EC44E60)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x1EC44F50)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER_RESOLVESTAGGERNORMALIZED_OFFSET UNITYSDK_OFFSET(0x1EC45060)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER_SETCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1EC45110)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER_TICK_OFFSET UNITYSDK_OFFSET(0x1EC451C0)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC454A0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextTypewriterPlayer_TypeDefinitionIndex = 75623;

	class UITextTypewriterPlayer : public ::System::Object
	{
	public:
		// static const ::System::Single DefaultStaggerNormalized; // 0x0
		::System::Boolean _isComplete; // 0x10
		::System::Boolean _hasPlayback; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single _normalizedTime; // 0x14
		::System::Single _staggerNormalized; // 0x18
		::System::Int32 _stepCount; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_StepCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER_GET_STEPCOUNT_OFFSET))(this);
		}

		::System::Boolean get_HasPlayback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER_GET_HASPLAYBACK_OFFSET))(this);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::Single get_CompletionThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER_GET_COMPLETIONTHRESHOLD_OFFSET))(this);
		}

		::System::Void Play(::System::Int32 stepCount, ::System::Single speed, ::System::Single maxDurationSeconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER_PLAY_OFFSET))(this, stepCount, speed, maxDurationSeconds);
		}

		::System::Void SetCompleted(::System::Int32 stepCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER_SETCOMPLETED_OFFSET))(this, stepCount);
		}

		::System::Boolean Tick(::System::Single deltaTime, ::System::Single speed)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER_TICK_OFFSET))(this, deltaTime, speed);
		}

		::System::Void Complete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER_COMPLETE_OFFSET))(this);
		}

		::System::Single GetProgress(::System::Int32 stepIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER_GETPROGRESS_OFFSET))(this, stepIndex);
		}

		static ::System::Single ResolveStaggerNormalized(::System::Int32 stepCount, ::System::Single speed, ::System::Single maxDurationSeconds)
		{
			return ((::System::Single(*)(::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERPLAYER_RESOLVESTAGGERNORMALIZED_OFFSET))(stepCount, speed, maxDurationSeconds);
		}
	};
}
