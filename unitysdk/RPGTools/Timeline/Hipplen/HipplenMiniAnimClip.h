#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENMINIANIMCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE903710)
#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENMINIANIMCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE9038C0)
#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENMINIANIMCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE9038B0)

namespace RPGTools::Timeline::Hipplen
{
	class HipplenMiniAnimClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::RPG::GameCore::AnimatorParameterType _AnimatorParameterType; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* _ParamName; // 0x28
		::System::String* _Value; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENMINIANIMCLIP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENMINIANIMCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENMINIANIMCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

	};
}
