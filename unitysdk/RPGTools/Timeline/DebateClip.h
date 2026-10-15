#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace RPG::GameCore { class SimpleTalkInfo; }
namespace RPGTools::Timeline { class MouthInfo; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_DEBATECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8D8B50)
#define RPGTOOLS_TIMELINE_DEBATECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE8D8CE0)
#define RPGTOOLS_TIMELINE_DEBATECLIP_DOCHBJKNFLP_OFFSET UNITYSDK_OFFSET(0xE8D8AC0)
#define RPGTOOLS_TIMELINE_DEBATECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE8D8B00)
#define RPGTOOLS_TIMELINE_DEBATECLIP_KAMCJLKDKCO_OFFSET UNITYSDK_OFFSET(0xE8D8B10)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int DebateClip_TypeDefinitionIndex = 48066;

	class DebateClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Boolean ShowMouthAssetCheck; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::Timeline::TimelineClip* TimelineClip; // 0x20
		::System::String* TestimonyName; // 0x28
		::RPG::GameCore::SimpleTalkInfo* Config; // 0x30
		::System::String* UniqueName; // 0x38
		::System::Boolean UseDiscussionMouthTalk; // 0x40
		::System::Byte _padding1[0x7];
		::RPGTools::Timeline::MouthInfo* MouthInfo; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATECLIP_CTOR_OFFSET))(this);
		}

		::System::Void DOCHBJKNFLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATECLIP_DOCHBJKNFLP_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::RPG::GameCore::SimpleTalkInfo* KAMCJLKDKCO()
		{
			return ((::RPG::GameCore::SimpleTalkInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATECLIP_KAMCJLKDKCO_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

	};
}
