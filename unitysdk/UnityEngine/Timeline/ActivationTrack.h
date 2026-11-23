#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/ActivationTrack_F85C659A06696790.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/FA1EDF0909FD0302/AE42330449B9EF25.h"
#include "unitysdk/FA1EDF0909FD0302/ED10F6CA1871D5DB.h"

class F85D883F5D6BA0DA;
namespace BDAD7F45EA9CF9E9 { class FD547AC9587B8524; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_CANCOMPILECLIPS_OFFSET UNITYSDK_OFFSET(0x40CFEB0)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x40CFF40)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x40D0090)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_GET_POSTPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0x1D7E6C0)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x40D01B0)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_SET_POSTPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0x40D0280)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_UPDATETRACKMODE_OFFSET UNITYSDK_OFFSET(0x40D0200)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x40D0220)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ActivationTrack_TypeDefinitionIndex = 20227;

	class ActivationTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::UnityEngine::Timeline::ActivationTrack_F85C659A06696790 m_PostPlaybackState; // 0xA0
		::System::Byte _padding0[0x4];
		::BDAD7F45EA9CF9E9::FD547AC9587B8524* m_ActivationMixer; // 0xA8

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* A9F0E1077186BAC8, ::F85D883F5D6BA0DA* A9BAF281B87EFA01)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::F85D883F5D6BA0DA*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_GATHERPROPERTIES_OFFSET))(this, A9F0E1077186BAC8, A9BAF281B87EFA01);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK__CTOR_OFFSET))(this);
		}

		::System::Void UpdateTrackMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_UPDATETRACKMODE_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* AD43DEAB8304398A)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_ONCREATECLIP_OFFSET))(this, AD43DEAB8304398A);
		}

		::UnityEngine::Timeline::ActivationTrack_F85C659A06696790 get_postPlaybackState()
		{
			return ((::UnityEngine::Timeline::ActivationTrack_F85C659A06696790(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_GET_POSTPLAYBACKSTATE_OFFSET))(this);
		}

		::FA1EDF0909FD0302::AE42330449B9EF25 CreateTrackMixer(::FA1EDF0909FD0302::ED10F6CA1871D5DB FF3BC15A84BE456D, ::UnityEngine::GameObject* AD1247287D2D9217, ::System::Int32 E0526D776D4634F5)
		{
			return ((::FA1EDF0909FD0302::AE42330449B9EF25(*)(::PVOID, ::FA1EDF0909FD0302::ED10F6CA1871D5DB, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_CREATETRACKMIXER_OFFSET))(this, FF3BC15A84BE456D, AD1247287D2D9217, E0526D776D4634F5);
		}

		::System::Boolean CanCompileClips()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_CANCOMPILECLIPS_OFFSET))(this);
		}

		::System::Void set_postPlaybackState(::UnityEngine::Timeline::ActivationTrack_F85C659A06696790 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ActivationTrack_F85C659A06696790))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_SET_POSTPLAYBACKSTATE_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
