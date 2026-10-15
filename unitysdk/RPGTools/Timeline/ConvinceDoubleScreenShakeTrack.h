#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKETRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xE8CAE60)
#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKETRACK_CTOR_OFFSET UNITYSDK_OFFSET(0xE8CAFE0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ConvinceDoubleScreenShakeTrack_TypeDefinitionIndex = 48041;

	class ConvinceDoubleScreenShakeTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKETRACK_CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKETRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

	};
}
