#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Timeline/RuntimeClipBase.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_RUNTIMECLIP_CREATE_OFFSET UNITYSDK_OFFSET(0x1D6EB680)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DA1A0)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_EVALUATEAT_OFFSET UNITYSDK_OFFSET(0x1D6EB9D0)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1D6EB6D0)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1D6EB5D0)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_MIXER_OFFSET UNITYSDK_OFFSET(0x1D6EB6E0)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_PLAYABLE_OFFSET UNITYSDK_OFFSET(0x1D6EB6F0)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_START_OFFSET UNITYSDK_OFFSET(0x1D6EB580)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_RESET_OFFSET UNITYSDK_OFFSET(0x1D6EC650)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_SETDURATION_OFFSET UNITYSDK_OFFSET(0x1D6EB980)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_SETTIME_OFFSET UNITYSDK_OFFSET(0x1D6EB930)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1D6EB700)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int RuntimeClip_TypeDefinitionIndex = 39751;

	class RuntimeClip : public ::UnityEngine::Timeline::RuntimeClipBase
	{
	public:
		::UnityEngine::Timeline::TimelineClip* m_Clip; // 0x18
		::UnityEngine::Playables::Playable m_ParentMixer; // 0x20
		::UnityEngine::Playables::Playable m_Playable; // 0x30
		::System::Void _ctor(::UnityEngine::Timeline::TimelineClip* a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Playables::Playable a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Double get_start()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_START_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_DURATION_OFFSET))(this);
		}

		::System::Void Create(::UnityEngine::Timeline::TimelineClip* a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Playables::Playable a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_CREATE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Timeline::TimelineClip* get_clip()
		{
			return ((::UnityEngine::Timeline::TimelineClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_CLIP_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable get_mixer()
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_MIXER_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable get_playable()
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_PLAYABLE_OFFSET))(this);
		}

		::System::Void set_enable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_SET_ENABLE_OFFSET))(this, a1);
		}

		::System::Void SetTime(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_SETTIME_OFFSET))(this, a1);
		}

		::System::Void SetDuration(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_SETDURATION_OFFSET))(this, a1);
		}

		::System::Void EvaluateAt(::System::Double a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_EVALUATEAT_OFFSET))(this, a1, a2);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_RESET_OFFSET))(this);
		}

	};
}
