#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/BuiltinShaderDefine.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsTier.h"
#include "unitysdk/UnityEngine/Object.h"
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering { class RenderPipelineAsset; }

#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_ALLOWENLIGHTENSUPPORTFORUPGRADEDPROJECT_OFFSET UNITYSDK_OFFSET(0x206D4AD0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_CPPENABLE_OFFSET UNITYSDK_OFFSET(0x206D4DB0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_CURRENTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x206D4B00)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_DEFAULTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x206D4BC0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_INTERNAL_CURRENTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x206D4AF0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_INTERNAL_DEFAULTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x206D4D20)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_RENDERPIPELINEASSET_OFFSET UNITYSDK_OFFSET(0x206D4B60)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_USESCRIPTABLERENDERPIPELINEBATCHING_OFFSET UNITYSDK_OFFSET(0x206D4AC0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_HASSHADERDEFINE_OFFSET UNITYSDK_OFFSET(0x206D4AE0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_DEFAULTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x206D4CA0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_ENABLELOCALLIGHTSHADOWBAKING_OFFSET UNITYSDK_OFFSET(0x206D4DC0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_INTERNAL_DEFAULTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x206D4D30)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_RENDERPIPELINEASSET_OFFSET UNITYSDK_OFFSET(0x206D4C20)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GraphicsSettings_TypeDefinitionIndex = 4734;

	class GraphicsSettings : public ::UnityEngine::Object
	{
	public:
		static ::System::Boolean get_useScriptableRenderPipelineBatching()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_USESCRIPTABLERENDERPIPELINEBATCHING_OFFSET))();
		}

		static ::System::Boolean AllowEnlightenSupportForUpgradedProject()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_ALLOWENLIGHTENSUPPORTFORUPGRADEDPROJECT_OFFSET))();
		}

		static ::System::Boolean HasShaderDefine(::UnityEngine::Rendering::GraphicsTier a1, ::UnityEngine::Rendering::BuiltinShaderDefine a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::GraphicsTier, ::UnityEngine::Rendering::BuiltinShaderDefine))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_HASSHADERDEFINE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ScriptableObject* get_INTERNAL_currentRenderPipeline()
		{
			return ((::UnityEngine::ScriptableObject*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_INTERNAL_CURRENTRENDERPIPELINE_OFFSET))();
		}

		static ::UnityEngine::Rendering::RenderPipelineAsset* get_currentRenderPipeline()
		{
			return ((::UnityEngine::Rendering::RenderPipelineAsset*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_CURRENTRENDERPIPELINE_OFFSET))();
		}

		static ::UnityEngine::Rendering::RenderPipelineAsset* get_renderPipelineAsset()
		{
			return ((::UnityEngine::Rendering::RenderPipelineAsset*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_RENDERPIPELINEASSET_OFFSET))();
		}

		static ::System::Void set_renderPipelineAsset(::UnityEngine::Rendering::RenderPipelineAsset* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_RENDERPIPELINEASSET_OFFSET))(a1);
		}

		static ::UnityEngine::ScriptableObject* get_INTERNAL_defaultRenderPipeline()
		{
			return ((::UnityEngine::ScriptableObject*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_INTERNAL_DEFAULTRENDERPIPELINE_OFFSET))();
		}

		static ::System::Void set_INTERNAL_defaultRenderPipeline(::UnityEngine::ScriptableObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_INTERNAL_DEFAULTRENDERPIPELINE_OFFSET))(a1);
		}

		static ::UnityEngine::Rendering::RenderPipelineAsset* get_defaultRenderPipeline()
		{
			return ((::UnityEngine::Rendering::RenderPipelineAsset*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_DEFAULTRENDERPIPELINE_OFFSET))();
		}

		static ::System::Void set_defaultRenderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_DEFAULTRENDERPIPELINE_OFFSET))(a1);
		}

		static ::System::Boolean get_CPPEnable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_CPPENABLE_OFFSET))();
		}

		static ::System::Void set_enableLocalLightShadowBaking(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_ENABLELOCALLIGHTSHADOWBAKING_OFFSET))(a1);
		}

	};
}
