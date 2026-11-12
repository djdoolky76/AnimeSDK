#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_PERFORMANCESHORTCUT_PERFORMANCESHORTCUTCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xF3EF6E0)
#define RPGTOOLS_TIMELINE_PERFORMANCESHORTCUT_PERFORMANCESHORTCUTCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xF3EF790)
#define RPGTOOLS_TIMELINE_PERFORMANCESHORTCUT_PERFORMANCESHORTCUTCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xF3EF6D0)

namespace RPGTools::Timeline::PerformanceShortcut
{
	inline static constexpr unsigned int PerformanceShortcutClip_TypeDefinitionIndex = 49689;

	class PerformanceShortcutClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* AnimatorCandidates; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* EmotionCandidates; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* LookAtCandidates; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* SteerCandidates; // 0x30
		::System::Boolean AnimatorEnabled; // 0x38
		::System::Boolean EmotionEnabled; // 0x39
		::System::Boolean LookAtEnabled; // 0x3A
		::System::Boolean SteerEnabled; // 0x3B
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* Rows; // 0x40
		// static const ::System::String* PROP_PREFIX; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PERFORMANCESHORTCUT_PERFORMANCESHORTCUTCLIP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PERFORMANCESHORTCUT_PERFORMANCESHORTCUTCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PERFORMANCESHORTCUT_PERFORMANCESHORTCUTCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

	};
}
