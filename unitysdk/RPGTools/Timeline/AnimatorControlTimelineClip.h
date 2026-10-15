#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace RPGTools::Timeline { class AnimatorControlTimelineBehaviour; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8A3450)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE8A3610)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE8A3430)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINECLIP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xE8A3440)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AnimatorControlTimelineClip_TypeDefinitionIndex = 47800;

	class AnimatorControlTimelineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::AnimatorControlTimelineBehaviour* template_; // 0x18
		::System::Boolean useFloatParam; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::Object*>* floatParams; // 0x28
		::System::Boolean useBoolParam; // 0x30
		::System::Byte _padding1[0x7];
		::Il2CppArray<::System::Object*>* boolParams; // 0x38
		::System::Boolean useTriggerParam; // 0x40
		::System::Byte _padding2[0x7];
		::System::String* triggerParam; // 0x48
		::System::String* toState; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINECLIP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINECLIP_GET_DURATION_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

	};
}
