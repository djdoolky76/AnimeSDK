#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/RenderStateBlock.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/RenderQueueRange.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/StencilState.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }
namespace UnityEngine::Rendering::Universal::Internal { class WaterGenPass; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOPAQUEAFTERDEFERREDSHADINGPASS_DRAWFUROBJECTS_OFFSET UNITYSDK_OFFSET(0x1D1A1FA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOPAQUEAFTERDEFERREDSHADINGPASS_DRAWINTERIOR_OFFSET UNITYSDK_OFFSET(0x1D1A1E00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOPAQUEAFTERDEFERREDSHADINGPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D1A1170)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOPAQUEAFTERDEFERREDSHADINGPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1D1A0D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOPAQUEAFTERDEFERREDSHADINGPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A0DF0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DrawOpaqueAfterDeferredShadingPass_TypeDefinitionIndex = 27181;

	class DrawOpaqueAfterDeferredShadingPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::Rendering::Universal::Internal::WaterGenPass* m_WaterGenPass; // 0xA8
		::System::String* m_ProfilerTag; // 0xB0
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler; // 0xB8
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_CameraColorAttachment; // 0xC0
		::UnityEngine::Matrix4x4 m_DamageTextProjMatrix; // 0xC4
		::UnityEngine::Rendering::FilteringSettings m_OpaqueFilteringSettingsForNoneBlackCanvas; // 0x104
		::System::Int32 m_lastScreenHeight; // 0x120
		::System::Int32 m_lastScreenWidth; // 0x124
		::System::Boolean m_WaterTessOn; // 0x128
		::System::Boolean m_isInitDamageTextProjMatrix; // 0x129
		::System::Boolean m_UIBlurRendered; // 0x12A
		::System::Byte _padding0[0x1];
		::UnityEngine::Rendering::RenderStateBlock m_RenderStateBlock; // 0x12C
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_ActiveColorAttachment; // 0x198
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForAll; // 0x19C
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_ActiveDepthAttachment; // 0x1B8

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState stencilState, ::System::Int32 stencilReference, ::UnityEngine::Rendering::Universal::Internal::WaterGenPass* waterGenPass)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*, ::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask, ::UnityEngine::Rendering::StencilState, ::System::Int32, ::UnityEngine::Rendering::Universal::Internal::WaterGenPass*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOPAQUEAFTERDEFERREDSHADINGPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig, renderQueueRange, layerMask, stencilState, stencilReference, waterGenPass);
		}

		::System::Void Setup(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* globalSetting)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOPAQUEAFTERDEFERREDSHADINGPASS_SETUP_OFFSET))(this, globalSetting);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOPAQUEAFTERDEFERREDSHADINGPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void DrawInterior(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::System::Boolean RTXPathTracerEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOPAQUEAFTERDEFERREDSHADINGPASS_DRAWINTERIOR_OFFSET))(this, renderingData, postCullRenderingData, cmd, context, RTXPathTracerEnabled);
		}

		::System::Void DrawFurObjects(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::System::Boolean RTXPathTracerEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOPAQUEAFTERDEFERREDSHADINGPASS_DRAWFUROBJECTS_OFFSET))(this, renderingData, cmd, context, RTXPathTracerEnabled);
		}
	};
}
