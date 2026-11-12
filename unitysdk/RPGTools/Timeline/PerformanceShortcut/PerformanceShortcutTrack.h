#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_PERFORMANCESHORTCUT_PERFORMANCESHORTCUTTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xF3EF890)
#define RPGTOOLS_TIMELINE_PERFORMANCESHORTCUT_PERFORMANCESHORTCUTTRACK_CTOR_OFFSET UNITYSDK_OFFSET(0xF3EF9B0)

namespace RPGTools::Timeline::PerformanceShortcut
{
	inline static constexpr unsigned int PerformanceShortcutTrack_TypeDefinitionIndex = 49692;

	class PerformanceShortcutTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* Actors; // 0xC8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PERFORMANCESHORTCUT_PERFORMANCESHORTCUTTRACK_CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PERFORMANCESHORTCUT_PERFORMANCESHORTCUTTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

	};
}
