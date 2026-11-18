#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VolumetricCloudV2Quality.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class VolumetricCloudConfigV2; }
namespace UnityEngine::Rendering::Universal { class VolumetricCloudV2Config; }
namespace UnityEngine::Rendering::Universal::Internal { class CpuIntParams; }
namespace UnityEngine::Rendering::Universal::Internal { class CpuTextureParams; }
namespace UnityEngine::Rendering::Universal::Internal { class CpuVector4Params; }

#define VOLUMETRICCLOUDV2RENDERPASS_ENSUREMERGEDTRACINGRT_OFFSET UNITYSDK_OFFSET(0x1CF9CD50)
#define VOLUMETRICCLOUDV2RENDERPASS_ENSURESINGLECLOUDTRACINGRT_OFFSET UNITYSDK_OFFSET(0x1CF9CAF0)
#define VOLUMETRICCLOUDV2RENDERPASS_ENSUREVOLUMETRICTRACINGRT_OFFSET UNITYSDK_OFFSET(0x1CF9C880)
#define VOLUMETRICCLOUDV2RENDERPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1CF997E0)
#define VOLUMETRICCLOUDV2RENDERPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1CF9CFB0)
#define VOLUMETRICCLOUDV2RENDERPASS_GETTRACINGDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CF9D150)
#define VOLUMETRICCLOUDV2RENDERPASS_SETPACKEDCLOUDPARAMS_OFFSET UNITYSDK_OFFSET(0x1CF989A0)
#define VOLUMETRICCLOUDV2RENDERPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1CF98310)
#define VOLUMETRICCLOUDV2RENDERPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF9D360)
#define VOLUMETRICCLOUDV2RENDERPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF97B30)
#define VOLUMETRICCLOUDV2RENDERPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1CF9D400)

inline static constexpr unsigned int VolumetricCloudV2RenderPass_TypeDefinitionIndex = 26213;

class VolumetricCloudV2RenderPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
{
public:
	static ::System::Int32* StaticGet__OutCloudDepth()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x66F0);
	}
	static ::System::Int32* StaticGet__SingleCloudDepthRT()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x66F4);
	}
	static ::System::Int32* StaticGet__MergedCloudDepthRT()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x66F8);
	}
	static ::System::Int32* StaticGet__OutCloudColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x66FC);
	}
	static ::System::Int32* StaticGet__MergedCloudColorRT()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x6700);
	}
	static ::System::Int32* StaticGet__SingleCloudColorRT()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2RenderPass_TypeDefinitionIndex)->GetStaticField(0x6704);
	}
	// static const ::System::Int32 kTracePassIndex = 0x1; // 0x0
	// static const ::System::Int32 kSingleCloudMergePassIndex = 0x4; // 0x0
	::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* MobileCloudParams1; // 0xA8
	::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdList; // 0xB0
	::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* CloudV2Params7; // 0xB8
	::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* CloudV2Params2; // 0xC0
	::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* CloudV2Params0; // 0xC8
	::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* CloudSDFTex; // 0xD0
	::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* CloudNoiseTex; // 0xD8
	::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* CloudV2Params3; // 0xE0
	::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* CloudModelDataTex; // 0xE8
	::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* CloudV2Params8; // 0xF0
	::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* _mrt2_tracing; // 0xF8
	::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* CloudV2Params1; // 0x100
	::UnityEngine::Rendering::Universal::Internal::CpuIntParams* StateFrameIndexMod8; // 0x108
	::UnityEngine::NAPRenderPipeline0::ProfilingSampler* profileSampler; // 0x110
	::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* MobileCloudParams2; // 0x118
	::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* CloudV2Params5; // 0x120
	::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* CloudV2Params4; // 0x128
	::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* CloudV2Params6; // 0x130
	::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* _mrt2_singleCloud; // 0x138
	::UnityEngine::Rendering::Universal::Internal::CpuIntParams* MsOctaveCount; // 0x140
	::UnityEngine::Material* cloudProcessMaterial; // 0x148
	::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* CloudOutputSize; // 0x150
	::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* MobileDensityMapID; // 0x158
	::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* MobileCloudParams0; // 0x160
	::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* CloudV2Params9; // 0x168
	::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* _mrt2_merged; // 0x170
	::UnityEngine::Rendering::Universal::VolumetricCloudV2Config* cloudConfig; // 0x178
	::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* CloudRampColorTex; // 0x180
	::UnityEngine::Rendering::RenderTargetIdentifier singleCloudTracingRT; // 0x188
	::UnityEngine::Rendering::RenderTargetIdentifier singleCloudTracingRTDepth; // 0x1B0
	::System::Int32 CloudDepthRT; // 0x1D8
	::System::Int32 SingleCloudDepthRT; // 0x1DC
	::UnityEngine::Rendering::RenderTargetIdentifier volumetricTracingRTDepth; // 0x1E0
	::System::Int32 SingleCloudColorRT; // 0x208
	::System::Int32 CloudColorRT; // 0x20C
	::UnityEngine::Rendering::RenderTargetIdentifier mergedCloudTracingRTDepth; // 0x210
	::UnityEngine::Vector2 volumetricRTSize; // 0x238
	::System::Int32 frameIndexMod8; // 0x240
	::System::Byte _padding0[0x4];
	::UnityEngine::Rendering::RenderTargetIdentifier volumetricTracingRT; // 0x248
	::UnityEngine::Rendering::RenderTargetIdentifier mergedCloudTracingRT; // 0x270

	::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt, ::UnityEngine::Material* cloudMaterial)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RENDERPASS__CTOR_OFFSET))(this, evt, cloudMaterial);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RENDERPASS__CCTOR_OFFSET))();
	}

	::System::Void Setup(::UnityEngine::Rendering::Universal::VolumetricCloudConfigV2* config, ::System::Boolean& needDrawVolumetricCloud)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VolumetricCloudConfigV2*, ::System::Boolean&))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RENDERPASS_SETUP_OFFSET))(this, config, needDrawVolumetricCloud);
	}

	::System::Void SetPackedCloudParams(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector3 boxCenterWS, ::UnityEngine::Vector3 boxHalfExtentWS, ::System::Single stepDistance, ::UnityEngine::Vector4 tracingCoordToZbufferCoordScaleBias, ::UnityEngine::Vector3 windDirection, ::System::Single skyLightCloudBottomVisibility, ::UnityEngine::Vector3 atmosphericLightCloudScatteredLuminanceScale, ::System::Single shadowTracingMaxDistance, ::UnityEngine::Vector3 distantSkyLightLuminance, ::System::Int32 shadowSampleCountMax, ::UnityEngine::Vector3 detailNoiseScale, ::System::Single stopTracingTransmittanceThreshold, ::System::Single phaseG, ::System::Single msScattFactor, ::System::Single msExtinFactor, ::System::Single msPhaseFactor, ::System::Single detailNoiseMipLevel, ::System::Single detailMipMapDistanceScale, ::System::Single fogWeight, ::System::Single densityMultiplier, ::System::Int32 stepCountMax)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector4, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RENDERPASS_SETPACKEDCLOUDPARAMS_OFFSET))(this, cmd, boxCenterWS, boxHalfExtentWS, stepDistance, tracingCoordToZbufferCoordScaleBias, windDirection, skyLightCloudBottomVisibility, atmosphericLightCloudScatteredLuminanceScale, shadowTracingMaxDistance, distantSkyLightLuminance, shadowSampleCountMax, detailNoiseScale, stopTracingTransmittanceThreshold, phaseG, msScattFactor, msExtinFactor, msPhaseFactor, detailNoiseMipLevel, detailMipMapDistanceScale, fogWeight, densityMultiplier, stepCountMax);
	}

	::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RENDERPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
	}

	::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RENDERPASS_FRAMECLEANUP_OFFSET))(this, cmd);
	}

	::System::Void EnsureVolumetricTracingRT(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality quality)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RENDERPASS_ENSUREVOLUMETRICTRACINGRT_OFFSET))(this, cmd, renderingData, quality);
	}

	::System::Void EnsureSingleCloudTracingRT(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality quality)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RENDERPASS_ENSURESINGLECLOUDTRACINGRT_OFFSET))(this, cmd, renderingData, quality);
	}

	::System::Void EnsureMergedTracingRT(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality quality)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RENDERPASS_ENSUREMERGEDTRACINGRT_OFFSET))(this, cmd, renderingData, quality);
	}

	::UnityEngine::RenderTextureDescriptor GetTracingDescriptor(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality quality)
	{
		return ((::UnityEngine::RenderTextureDescriptor(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RENDERPASS_GETTRACINGDESCRIPTOR_OFFSET))(this, renderingData, quality);
	}

	::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2RENDERPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
	}
};
