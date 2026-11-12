#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine::Rendering { class RenderPipelineAsset; }

#define SCENERENDERPIPELINE_CTOR_OFFSET UNITYSDK_OFFSET(0x2054C9E0)
#define SCENERENDERPIPELINE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2054C8E0)
#define SCENERENDERPIPELINE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x2054C960)

inline static constexpr unsigned int SceneRenderPipeline_TypeDefinitionIndex = 36367;

	class SceneRenderPipeline : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Rendering::RenderPipelineAsset* renderPipelineAsset; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENERENDERPIPELINE_CTOR_OFFSET))(this);
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
