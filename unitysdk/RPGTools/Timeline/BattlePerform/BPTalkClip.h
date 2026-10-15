#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace RPG::GameCore { class SimpleTalkStyle; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8B00E0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE8B0240)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE8B0000)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xE8B0010)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDURATION_OFFSET UNITYSDK_OFFSET(0xE8B0080)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPTalkClip_TypeDefinitionIndex = 48826;

	class BPTalkClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::UInt32 TalkSentenceID; // 0x18
		::System::Boolean HaveProtectTime; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single ProtectTime; // 0x20
		::System::Boolean ProtectByVoice; // 0x24
		::System::Byte _padding1[0x3];
		::System::Single ForceToNextTime; // 0x28
		::System::Byte _padding2[0x4];
		::RPG::GameCore::SimpleTalkStyle* Style; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKCLIP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Boolean UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDisplayName(::UnityEngine::Timeline::TimelineClip* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_OFFSET))(this, a1, a2);
		}

		::System::Boolean UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDuration(::UnityEngine::Timeline::TimelineClip* a1, ::System::Double a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::Double))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDURATION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

	};
}
