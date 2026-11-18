#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/Universal/RTXAOPass_RTXAOMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine::Experimental::Rendering { class RayTracingShader; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class RTXAOPass_HistoryBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_BUILDSPATIALPARAMS_OFFSET UNITYSDK_OFFSET(0x1D718180)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_CALCULATEPIXELSPREADANGLETANGENT_OFFSET UNITYSDK_OFFSET(0x1D716150)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_CALCULATEZBUFFERPARAMS_OFFSET UNITYSDK_OFFSET(0x1D7184D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D716C40)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_DODENOISE_OFFSET UNITYSDK_OFFSET(0x1D7140D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_ENSUREINTERMEDIATETARGETS_OFFSET UNITYSDK_OFFSET(0x1D715DE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_ENSUREVALIDATIONBUFFER_OFFSET UNITYSDK_OFFSET(0x1D717EC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D714510)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_GET_BILATERALSPATIALREADY_OFFSET UNITYSDK_OFFSET(0x1D713430)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_GET_DENOISERREADY_OFFSET UNITYSDK_OFFSET(0x1D7132A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_GET_HARDWARETRACEREADY_OFFSET UNITYSDK_OFFSET(0x1D713880)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_GET_HASVALIDAOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D713240)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_GET_INLINETRACEREADY_OFFSET UNITYSDK_OFFSET(0x1D7135A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_GET_SCREENSPACETRACEREADY_OFFSET UNITYSDK_OFFSET(0x1D713710)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RELEASEINTERMEDIATETARGETS_OFFSET UNITYSDK_OFFSET(0x1D716C90)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RELEASERT_OFFSET UNITYSDK_OFFSET(0x1D718480)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RESOLVEHYBRIDOFFSETENABLE_OFFSET UNITYSDK_OFFSET(0x1D713160)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RESOLVEREQUESTEDMODE_OFFSET UNITYSDK_OFFSET(0x1D715D10)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RUNDENOISER_OFFSET UNITYSDK_OFFSET(0x1D7142D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RUNINLINETRACE_OFFSET UNITYSDK_OFFSET(0x1D716220)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RUNSCREENSPACETRACE_OFFSET UNITYSDK_OFFSET(0x1D716730)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RUNTEMPORALSPATIALDENOISER_OFFSET UNITYSDK_OFFSET(0x1D716E50)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_SETDEFAULTAMBIENTOCCLUSION_OFFSET UNITYSDK_OFFSET(0x1D715B30)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7185D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7139E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RTXAOPass_TypeDefinitionIndex = 27289;

	class RTXAOPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Camera*>** StaticGet_s_NonTemporalCameras()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Camera*>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x23820);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXAOConsoleHybridOverride()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x23828);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXAOConsoleRayLength()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x23830);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXAOConsoleDenoiserRadius()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x23838);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXAODirectLightPreserve()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x23840);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXAOConsoleSampleCount()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x23848);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXAOConsoleMode()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x23850);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXAOConsoleDenoiserMode()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x23858);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXAOConsoleRayBias()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x23860);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXAOConsoleDownsample()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x23868);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXAOConsoleDistanceBiasScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x23870);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXAOConsoleIntensity()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x23878);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXAOMinOcc()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x23880);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXAOConsoleQuality()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x23888);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXAOConsoleDenoiser()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x23890);
		}
		static ::System::Boolean* StaticGet_s_HasValidAOTexture()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x5770);
		}
		static ::System::Boolean* StaticGet_RTXAOHybridOffsetEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x5771);
		}
		// static const ::System::String* RTXAOProfilerTag; // 0x0
		// static const ::System::String* RTXAOShaderPassName; // 0x0
		// static const ::System::Int32 RTXAOThreadGroupSize = 0x8; // 0x0
		// static const ::System::String* RTXAOInlineKernelName; // 0x0
		// static const ::System::String* RTXAOScreenSpaceKernelName; // 0x0
		// static const ::System::String* RTXAOHardwareRayGenName; // 0x0
		// static const ::System::String* RTXAOBilateralSpatialKernelName; // 0x0
		::UnityEngine::ComputeShader* m_DenoiseShader; // 0xA8
		::UnityEngine::Experimental::Rendering::RayTracingShader* m_RayTracingShader; // 0xB0
		::UnityEngine::NAPRenderPipeline0::RTHandle* m_Intermediate1; // 0xB8
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_TraceSampler; // 0xC0
		::UnityEngine::NAPRenderPipeline0::RTHandle* m_Intermediate0; // 0xC8
		::UnityEngine::Rendering::Universal::RTXAOPass_HistoryBuffer* m_CurHistory; // 0xD0
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_DenoiseSampler; // 0xD8
		::UnityEngine::NAPRenderPipeline0::RTHandle* m_ValidationBuffer; // 0xE0
		::UnityEngine::ComputeShader* m_InlineTraceShader; // 0xE8
		::System::Int32 m_BilateralSpatialKernel; // 0xF0
		::System::Int32 m_ScreenSpaceKernel; // 0xF4
		::System::Int32 m_rtWidth; // 0xF8
		::System::Int32 m_InlineTraceKernel; // 0xFC
		::System::Int32 m_CopyHistoryKernel; // 0x100
		::System::Int32 m_rtHeight; // 0x104
		::System::Int32 m_ValidationKernel; // 0x108
		::System::Int32 m_TemporalKernel; // 0x10C
		::System::Boolean m_Initialized; // 0x110
		::System::Boolean m_CurIsFirstTime; // 0x111
		::System::Boolean m_HardwareTracingReady; // 0x112
		::System::Byte _padding0[0x1];
		::System::Int32 m_SpatialKernel; // 0x114

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig, ::UnityEngine::Experimental::Rendering::RayTracingShader* rayTracingShader, ::UnityEngine::ComputeShader* denoiseShader, ::UnityEngine::ComputeShader* inlineTraceShader)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*, ::UnityEngine::Experimental::Rendering::RayTracingShader*, ::UnityEngine::ComputeShader*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig, rayTracingShader, denoiseShader, inlineTraceShader);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS__CCTOR_OFFSET))();
		}

		static ::System::Boolean ResolveHybridOffsetEnable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RESOLVEHYBRIDOFFSETENABLE_OFFSET))();
		}

		static ::System::Boolean get_HasValidAOTexture()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_GET_HASVALIDAOTEXTURE_OFFSET))();
		}

		::System::Boolean get_DenoiserReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_GET_DENOISERREADY_OFFSET))(this);
		}

		::System::Boolean get_BilateralSpatialReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_GET_BILATERALSPATIALREADY_OFFSET))(this);
		}

		::System::Boolean get_InlineTraceReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_GET_INLINETRACEREADY_OFFSET))(this);
		}

		::System::Boolean get_ScreenSpaceTraceReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_GET_SCREENSPACETRACEREADY_OFFSET))(this);
		}

		::System::Boolean get_HardwareTraceReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_GET_HARDWARETRACEREADY_OFFSET))(this);
		}

		::System::Void DoDenoise(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_DODENOISE_OFFSET))(this, cmd, renderingData);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_DISPOSE_OFFSET))(this);
		}

		::System::Void RunInlineTrace(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::RTXAOPass_HistoryBuffer* history, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RTXAOPass_HistoryBuffer*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RUNINLINETRACE_OFFSET))(this, cmd, history, camera);
		}

		::System::Void RunScreenSpaceTrace(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::RTXAOPass_HistoryBuffer* history, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RTXAOPass_HistoryBuffer*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RUNSCREENSPACETRACE_OFFSET))(this, cmd, history, camera);
		}

		::System::Void RunDenoiser(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::RTXAOPass_HistoryBuffer* history, ::System::Boolean forceHistoryReset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::RTXAOPass_HistoryBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RUNDENOISER_OFFSET))(this, cmd, renderingData, history, forceHistoryReset);
		}

		::System::Void RunTemporalSpatialDenoiser(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::RTXAOPass_HistoryBuffer* history, ::UnityEngine::Camera* camera, ::System::Boolean forceHistoryReset, ::System::Boolean useBilateralSpatial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::RTXAOPass_HistoryBuffer*, ::UnityEngine::Camera*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RUNTEMPORALSPATIALDENOISER_OFFSET))(this, cmd, renderingData, history, camera, forceHistoryReset, useBilateralSpatial);
		}

		::UnityEngine::Vector4 BuildSpatialParams()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_BUILDSPATIALPARAMS_OFFSET))(this);
		}

		::System::Void EnsureIntermediateTargets(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_ENSUREINTERMEDIATETARGETS_OFFSET))(this, width, height);
		}

		::System::Void ReleaseIntermediateTargets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RELEASEINTERMEDIATETARGETS_OFFSET))(this);
		}

		static ::UnityEngine::Vector4 CalculateZBufferParams(::UnityEngine::Camera* camera)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_CALCULATEZBUFFERPARAMS_OFFSET))(camera);
		}

		static ::System::Void ReleaseRT(::UnityEngine::NAPRenderPipeline0::RTHandle*& handle)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::RTHandle*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RELEASERT_OFFSET))(handle);
		}

		::System::Void EnsureValidationBuffer(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_ENSUREVALIDATIONBUFFER_OFFSET))(this, width, height);
		}

		static ::System::Void SetDefaultAmbientOcclusion(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_SETDEFAULTAMBIENTOCCLUSION_OFFSET))(cmd);
		}

		static ::UnityEngine::Rendering::Universal::RTXAOPass_RTXAOMode ResolveRequestedMode(::UnityEngine::Rendering::Universal::RTXAOPass_RTXAOMode requested, ::System::Boolean hardwareAvailable, ::System::Boolean inlineAvailable, ::System::Boolean screenSpaceAvailable)
		{
			return ((::UnityEngine::Rendering::Universal::RTXAOPass_RTXAOMode(*)(::UnityEngine::Rendering::Universal::RTXAOPass_RTXAOMode, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RESOLVEREQUESTEDMODE_OFFSET))(requested, hardwareAvailable, inlineAvailable, screenSpaceAvailable);
		}

		static ::System::Single CalculatePixelSpreadAngleTangent(::UnityEngine::Camera* camera, ::System::Int32 rtWidth, ::System::Int32 rtHeight)
		{
			return ((::System::Single(*)(::UnityEngine::Camera*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_CALCULATEPIXELSPREADANGLETANGENT_OFFSET))(camera, rtWidth, rtHeight);
		}
	};
}
