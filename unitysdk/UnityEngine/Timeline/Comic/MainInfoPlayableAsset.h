#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole { class ComicSwitchSceneNarratorInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineAsset; }

#define UNITYENGINE_TIMELINE_COMIC_MAININFOPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1F6E22F0)
#define UNITYENGINE_TIMELINE_COMIC_MAININFOPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1F6E23A0)
#define UNITYENGINE_TIMELINE_COMIC_MAININFOPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6E23B0)

namespace UnityEngine::Timeline::Comic
{
	inline static constexpr unsigned int MainInfoPlayableAsset_TypeDefinitionIndex = 32548;

	class MainInfoPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::Timeline::TimelineAsset* tlAsset; // 0x18
		::MoleMole::ComicSwitchSceneNarratorInfo* switchSceneInfo; // 0x20
		::System::String* bgmStateName; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* dialogueItems; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_MAININFOPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_MAININFOPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, graph, owner);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_MAININFOPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
