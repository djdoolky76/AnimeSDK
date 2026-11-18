#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }

#define PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SECTIONCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x2006FDC0)
#define PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SECTIONCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x2006FF40)

namespace PipelineCamera::CameraSequence::Timeline
{
	inline static constexpr unsigned int SectionClip_TypeDefinitionIndex = 96107;

	class SectionClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SECTIONCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SECTIONCLIP_CREATEPLAYABLE_OFFSET))(this, graph, go);
		}
	};
}
