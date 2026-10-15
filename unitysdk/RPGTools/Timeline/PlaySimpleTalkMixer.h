#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_BDEOJBICNNM_OFFSET UNITYSDK_OFFSET(0xE90CC20)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_CTOR_OFFSET UNITYSDK_OFFSET(0xE90D560)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_KJGGPABLFKI_OFFSET UNITYSDK_OFFSET(0xE90D0F0)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_NEJLOGNANMC_OFFSET UNITYSDK_OFFSET(0xE90D510)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xE90CEF0)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xE90D040)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE90CB70)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PlaySimpleTalkMixer_TypeDefinitionIndex = 48226;

	class PlaySimpleTalkMixer : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Double _Duration; // 0x10
		::UnityEngine::Playables::PlayableDirector* _Director; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* _TimelineClips; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _ClipOrder; // 0x28
		::System::Int32 _LastClearMarkerClipIndex; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void BDEOJBICNNM(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_BDEOJBICNNM_OFFSET))(this, a1);
		}

		::System::Void KJGGPABLFKI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_KJGGPABLFKI_OFFSET))(this, a1);
		}

		::System::Void NEJLOGNANMC(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_NEJLOGNANMC_OFFSET))(this, a1);
		}

	};
}
