#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace RPG::Client::Timeline { class ManaVideoTrack; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_TIMELINE_MANAVIDEOTRACK_BJIIHEFCOND_OFFSET UNITYSDK_OFFSET(0xE29E3B0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOTRACK_CCTOR_OFFSET UNITYSDK_OFFSET(0xE29E890)
#define RPG_CLIENT_TIMELINE_MANAVIDEOTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xE29D7F0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOTRACK_CTOR_OFFSET UNITYSDK_OFFSET(0xE29E790)
#define RPG_CLIENT_TIMELINE_MANAVIDEOTRACK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE29E710)

namespace RPG::Client::Timeline
{
	inline static constexpr unsigned int ManaVideoTrack_TypeDefinitionIndex = 73353;

	class ManaVideoTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Guid guid; // 0xC8
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Guid>** StaticGet_bindDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Guid>**)UnitySDK::FromName("RPG.Client.Timeline", "ManaVideoTrack")->GetStaticField(0x1A670);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOTRACK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOTRACK_CCTOR_OFFSET))();
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOTRACK_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void BJIIHEFCOND(::RPG::Client::Timeline::ManaVideoTrack* a1)
		{
			return ((::System::Void(*)(::RPG::Client::Timeline::ManaVideoTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOTRACK_BJIIHEFCOND_OFFSET))(a1);
		}

	};
}
