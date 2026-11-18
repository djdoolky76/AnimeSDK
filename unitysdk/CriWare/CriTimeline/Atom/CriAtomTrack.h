#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1FF9AF90)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF9B4F0)

namespace CriWare::CriTimeline::Atom
{
	inline static constexpr unsigned int CriAtomTrack_TypeDefinitionIndex = 34595;

	class CriAtomTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::String* m_AisacControls; // 0xB0
		::System::Boolean m_StopOnWrapping; // 0xB8
		::System::Boolean m_StopAtGraphEnd; // 0xB9
		::System::Boolean m_ApplyPlayableSpeed; // 0xBA
		::System::Boolean m_CheckPosWithinClip; // 0xBB

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTRACK_CREATETRACKMIXER_OFFSET))(this, graph, owner, inputCount);
		}
	};
}
