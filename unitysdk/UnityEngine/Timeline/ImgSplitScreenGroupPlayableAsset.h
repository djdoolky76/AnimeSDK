#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole { class ComicPartLayoutOverride; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::Timeline { class ComicGroupTrack; }
namespace UnityEngine::Timeline { class TimelineAsset; }

#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPPLAYABLEASSET_ADDONESPRITE_OFFSET UNITYSDK_OFFSET(0x1F442080)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1F441FD0)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1F441FC0)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1F442090)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ImgSplitScreenGroupPlayableAsset_TypeDefinitionIndex = 32434;

	class ImgSplitScreenGroupPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* spriteItems; // 0x18
		::System::String* comicImgStyle; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::ComicPartLayoutOverride*>* croppedLayoutOverrides; // 0x28
		::UnityEngine::ExposedReference_1<::UnityEngine::GameObject*> sourceGameObject; // 0x30
		::System::Byte _padding0[0x8];
		::UnityEngine::Timeline::TimelineAsset* timelineAsset; // 0x40
		::UnityEngine::Timeline::ComicGroupTrack* comicGroupTrack; // 0x48
		::System::Collections::Generic::List_1<::System::Object*>* tags; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, graph, owner);
		}

		::System::Void AddOneSprite(::UnityEngine::Sprite* sprite)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPPLAYABLEASSET_ADDONESPRITE_OFFSET))(this, sprite);
		}
	};
}
