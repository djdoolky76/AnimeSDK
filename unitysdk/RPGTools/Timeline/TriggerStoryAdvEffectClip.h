#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace RPGTools::Timeline { class StoryAdvEffectFollowOverride; }
namespace System { class Nullable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTCLIP_CBCCBAGFHIF_OFFSET UNITYSDK_OFFSET(0xE94ECA0)
#define RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE94EE40)
#define RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE94EFA0)
#define RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE94EE30)

namespace RPGTools::Timeline
{
	class TriggerStoryAdvEffectClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* ConfigNameList; // 0x20
		::System::Collections::Generic::List_1<::RPGTools::Timeline::StoryAdvEffectFollowOverride*>* FollowOverrides; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTCLIP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Nullable* CBCCBAGFHIF(::System::String* a1)
		{
			return ((::System::Nullable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTCLIP_CBCCBAGFHIF_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

	};
}
