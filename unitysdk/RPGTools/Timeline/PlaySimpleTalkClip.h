#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkBlackMaskColor.h"
#include "unitysdk/RPGTools/Timeline/PlaySimpleTalkClip_UseTextOptionEnum.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace RPG::GameCore { class SimpleTalkInfo; }
namespace RPG::GameCore { class SimpleTalkStyle; }
namespace RPGTools::Timeline { class MouthInfo; }
namespace RPGTools::Timeline { class PlaySimpleTalkBehaviour; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE916C30)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE916E70)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKCLIP_DOCHBJKNFLP_OFFSET UNITYSDK_OFFSET(0xE916BF0)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE916E60)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKCLIP_KAMCJLKDKCO_OFFSET UNITYSDK_OFFSET(0xE916E20)

namespace RPGTools::Timeline
{
	class PlaySimpleTalkClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::Timeline::TimelineClip* TimelineClip; // 0x18
		::System::Boolean ShowMouthAssetCheck; // 0x20
		::System::Byte _padding0[0x3];
		::RPGTools::Timeline::PlaySimpleTalkClip_UseTextOptionEnum UseTextOption; // 0x24
		::RPG::GameCore::SimpleTalkInfo* Config; // 0x28
		::RPG::GameCore::SimpleTalkStyle* Style; // 0x30
		::System::Boolean BlackMask; // 0x38
		::System::Byte _padding1[0x3];
		::RPG::GameCore::SimpleTalkBlackMaskColor BlackMaskColor; // 0x3C
		::System::Boolean NeedFadeBlackMask; // 0x40
		::System::Byte _padding2[0x3];
		::System::Single BlackMaskFadeDuration; // 0x44
		::System::Boolean ProtectByVoice; // 0x48
		::System::Boolean ForceToNextOnProtectEnd; // 0x49
		::System::Boolean HaveProtectTime; // 0x4A
		::System::Byte _padding3[0x5];
		::System::String* UniqueName; // 0x50
		::System::Boolean Use3DVoice; // 0x58
		::System::Boolean UseDiscussionMouthTalk; // 0x59
		::System::Byte _padding4[0x6];
		::RPGTools::Timeline::PlaySimpleTalkBehaviour* template_; // 0x60
		::RPGTools::Timeline::MouthInfo* MouthInfo; // 0x68
		::System::Single Duration; // 0x70
		::System::Boolean AutoEnd; // 0x74
		::System::Byte _padding5[0x3];
		::RPGTools::Timeline::PlaySimpleTalkBehaviour* _BehaviourRef; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKCLIP_CTOR_OFFSET))(this);
		}

		::System::Void DOCHBJKNFLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKCLIP_DOCHBJKNFLP_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::SimpleTalkInfo* KAMCJLKDKCO()
		{
			return ((::RPG::GameCore::SimpleTalkInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKCLIP_KAMCJLKDKCO_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

	};
}
