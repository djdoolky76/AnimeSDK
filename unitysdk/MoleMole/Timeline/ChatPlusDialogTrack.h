#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGTRACK_BPMKEKLABAP_OFFSET UNITYSDK_OFFSET(0x18823200)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x18822C20)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGTRACK_FOGCDIKKMKP_OFFSET UNITYSDK_OFFSET(0x188229F0)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGTRACK_PAUSEBYLOGIC_OFFSET UNITYSDK_OFFSET(0x18822980)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGTRACK_RESUMEBYLOGIC_OFFSET UNITYSDK_OFFSET(0x18822BB0)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18823190)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ChatPlusDialogTrack_TypeDefinitionIndex = 50128;

	class ChatPlusDialogTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::Il2CppArray<::System::Int32>* disableInVoiceLanguages; // 0xB0
		::System::Boolean disableMale; // 0xB8
		::System::Boolean disableFemale; // 0xB9
		::System::Byte _padding0[0x2];
		::System::Int32 priorityOverlapIgnoreFrameCount; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGTRACK__CTOR_OFFSET))(this);
		}

		::System::Void PauseByLogic(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGTRACK_PAUSEBYLOGIC_OFFSET))(this, MHPNGBGGMMN);
		}

		::System::Void ResumeByLogic(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGTRACK_RESUMEBYLOGIC_OFFSET))(this, MHPNGBGGMMN);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* JEIDPPCEHLD, ::UnityEngine::Timeline::TimelineClip* PHGBOCIDLEI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGTRACK_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, JEIDPPCEHLD, PHGBOCIDLEI);
		}

		::System::Void FOGCDIKKMKP(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::System::Boolean NOLBECKFLEK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGTRACK_FOGCDIKKMKP_OFFSET))(this, MHPNGBGGMMN, NOLBECKFLEK);
		}

		::UnityEngine::Playables::Playable BPMKEKLABAP(::UnityEngine::Playables::PlayableGraph MIALFKCCCPI, ::UnityEngine::GameObject* KMGKAIDEIBA, ::UnityEngine::Timeline::TimelineClip* FDHMCIFPNCK)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGTRACK_BPMKEKLABAP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}
	};
}
