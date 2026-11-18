#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::Rendering { class RenderPipelineAsset; }

#define SCENERENDERPIPELINE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D058C90)
#define SCENERENDERPIPELINE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1D058CE0)
#define SCENERENDERPIPELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D058D30)

inline static constexpr unsigned int SceneRenderPipeline_TypeDefinitionIndex = 17784;

class SceneRenderPipeline : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Rendering::RenderPipelineAsset* renderPipelineAsset; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENERENDERPIPELINE__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENERENDERPIPELINE_ONENABLE_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENERENDERPIPELINE_ONVALIDATE_OFFSET))(this);
	}
};
