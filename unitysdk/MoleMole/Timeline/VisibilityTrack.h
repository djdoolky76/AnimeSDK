#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/VisibilityTrack_PNOIJBBCDOE.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class KIEPAPELMAN;
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_VISIBILITYTRACK_BBPCIKJIFNJ_OFFSET UNITYSDK_OFFSET(0x17E7D9C0)
#define MOLEMOLE_TIMELINE_VISIBILITYTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x17E7D670)
#define MOLEMOLE_TIMELINE_VISIBILITYTRACK_GET_POSTPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0x17E7D550)
#define MOLEMOLE_TIMELINE_VISIBILITYTRACK_INFJICKIDDO_OFFSET UNITYSDK_OFFSET(0x17E7D600)
#define MOLEMOLE_TIMELINE_VISIBILITYTRACK_LGAGFNHGIGH_OFFSET UNITYSDK_OFFSET(0x17E7D980)
#define MOLEMOLE_TIMELINE_VISIBILITYTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x17E7D8A0)
#define MOLEMOLE_TIMELINE_VISIBILITYTRACK_SET_POSTPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0x17E7D560)
#define MOLEMOLE_TIMELINE_VISIBILITYTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x17E7D920)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VisibilityTrack_TypeDefinitionIndex = 58293;

	class VisibilityTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::MoleMole::Timeline::VisibilityTrack_PNOIJBBCDOE m_PostPlaybackState; // 0xB0
		::System::Byte _padding0[0x4];
		::KIEPAPELMAN* m_VisibilityMixer; // 0xB8
		::System::Boolean JustClip; // 0xC0
		::System::Boolean UnActive; // 0xC1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISIBILITYTRACK__CTOR_OFFSET))(this);
		}

		::MoleMole::Timeline::VisibilityTrack_PNOIJBBCDOE get_postPlaybackState()
		{
			return ((::MoleMole::Timeline::VisibilityTrack_PNOIJBBCDOE(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISIBILITYTRACK_GET_POSTPLAYBACKSTATE_OFFSET))(this);
		}

		::System::Void set_postPlaybackState(::MoleMole::Timeline::VisibilityTrack_PNOIJBBCDOE EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Timeline::VisibilityTrack_PNOIJBBCDOE))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISIBILITYTRACK_SET_POSTPLAYBACKSTATE_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* NJOAJLDJCCJ, ::System::Int32 BMHCCJPEFPI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISIBILITYTRACK_CREATETRACKMIXER_OFFSET))(this, MHPNGBGGMMN, NJOAJLDJCCJ, BMHCCJPEFPI);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* PHGBOCIDLEI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISIBILITYTRACK_ONCREATECLIP_OFFSET))(this, PHGBOCIDLEI);
		}

		::System::Void INFJICKIDDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISIBILITYTRACK_INFJICKIDDO_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable LGAGFNHGIGH(::UnityEngine::Playables::PlayableGraph MIALFKCCCPI, ::UnityEngine::GameObject* KMGKAIDEIBA, ::System::Int32 FDHMCIFPNCK)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISIBILITYTRACK_LGAGFNHGIGH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void BBPCIKJIFNJ(::UnityEngine::Timeline::TimelineClip* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISIBILITYTRACK_BBPCIKJIFNJ_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
