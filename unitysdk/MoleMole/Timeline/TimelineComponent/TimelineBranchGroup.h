#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_BGLGHEFLAPH_OFFSET UNITYSDK_OFFSET(0x14BD8F40)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_BNOKKNMNFIE_OFFSET UNITYSDK_OFFSET(0x14BD8DB0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_GET_BRANCHTRACK_OFFSET UNITYSDK_OFFSET(0x14BD8A60)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_ILNGGIOPALO_OFFSET UNITYSDK_OFFSET(0x14BD8A80)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_KBMFNNLIHPD_OFFSET UNITYSDK_OFFSET(0x14BD9120)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_OCMLKKFPCLJ_OFFSET UNITYSDK_OFFSET(0x14BD9490)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_PJHECJMFABK_OFFSET UNITYSDK_OFFSET(0x14BD92B0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x14BD8A70)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int TimelineBranchGroup_TypeDefinitionIndex = 85040;

	class TimelineBranchGroup : public ::System::Object
	{
	public:
		::System::String* BranchName; // 0x10
		::System::Double Duration; // 0x18
		::System::Double StartTime; // 0x20
		::System::String* BrachTrackGuid; // 0x28
		::System::Boolean IsMuted; // 0x30
		::System::Byte _padding0[0x7];
		::UnityEngine::Timeline::TrackAsset* _trackAsset; // 0x38
		::UnityEngine::Playables::PlayableDirector* rootPlayableDirector; // 0x40
		::UnityEngine::Playables::PlayableDirector* BranchPlayableDirector; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::TrackAsset* get_BranchTrack()
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_GET_BRANCHTRACK_OFFSET))(this);
		}

		::System::Void ILNGGIOPALO(::UnityEngine::Playables::PlayableDirector* MJOJMALJBGJ, ::UnityEngine::Timeline::TimelineAsset* JHLELCHBLNC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_ILNGGIOPALO_OFFSET))(this, MJOJMALJBGJ, JHLELCHBLNC);
		}

		::System::Void BNOKKNMNFIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_BNOKKNMNFIE_OFFSET))(this);
		}

		::System::Void BGLGHEFLAPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_BGLGHEFLAPH_OFFSET))(this);
		}

		::System::Void KBMFNNLIHPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_KBMFNNLIHPD_OFFSET))(this);
		}

		::System::Void PJHECJMFABK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_PJHECJMFABK_OFFSET))(this);
		}

		::System::Void OCMLKKFPCLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_OCMLKKFPCLJ_OFFSET))(this);
		}
	};
}
