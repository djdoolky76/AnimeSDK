#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class MDHKPOLCNOK;
namespace RPGTools::Timeline { class CumulativeScoreBoardClipData; }
namespace RPGTools::Timeline { class ShowCumulativeScoreBoardClip; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR_CCTOR_OFFSET UNITYSDK_OFFSET(0xE938DC0)
#define RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE938DB0)
#define RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE938A10)
#define RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR_IHFNBHEIIAI_OFFSET UNITYSDK_OFFSET(0xE938C20)
#define RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE938A30)
#define RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE938A20)

namespace RPGTools::Timeline
{
	class ShowCumulativeScoreBoardBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::ShowCumulativeScoreBoardClip* _Clip_k__BackingField; // 0x10
		static ::System::String** StaticGet_UI_LUA_PATH()
		{
			return (::System::String**)UnitySDK::FromName("RPGTools.Timeline", "ShowCumulativeScoreBoardBehaviour")->GetStaticField(0x6FDE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR_CCTOR_OFFSET))();
		}

		::RPGTools::Timeline::ShowCumulativeScoreBoardClip* get_Clip()
		{
			return ((::RPGTools::Timeline::ShowCumulativeScoreBoardClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::ShowCumulativeScoreBoardClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ShowCumulativeScoreBoardClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::MDHKPOLCNOK* IHFNBHEIIAI(::RPGTools::Timeline::CumulativeScoreBoardClipData* a1)
		{
			return ((::MDHKPOLCNOK*(*)(::PVOID, ::RPGTools::Timeline::CumulativeScoreBoardClipData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDBEHAVIOUR_IHFNBHEIIAI_OFFSET))(this, a1);
		}

	};
}
