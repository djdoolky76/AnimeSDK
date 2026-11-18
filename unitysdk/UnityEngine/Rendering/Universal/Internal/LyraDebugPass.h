#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/Vector2i.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal::Internal { class LyraUpdateProbePass; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRADEBUGPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EA4BC20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRADEBUGPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1EA4A2D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRADEBUGPASS_VISUALIZEGI_OFFSET UNITYSDK_OFFSET(0x1EA4AA90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRADEBUGPASS_VISUALIZELOCALLIGHT_OFFSET UNITYSDK_OFFSET(0x1EA4B690)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRADEBUGPASS_VISUALIZESDFLIGHT_OFFSET UNITYSDK_OFFSET(0x1EA4AD70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRADEBUGPASS_VISUALIZEVOXELLIGHTING_OFFSET UNITYSDK_OFFSET(0x1EA4A320)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRADEBUGPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA4D050)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRADEBUGPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4A030)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraDebugPass_TypeDefinitionIndex = 26561;

	class LyraDebugPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraDebugBLV()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraDebugPass_TypeDefinitionIndex)->GetStaticField(0x23B00);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSampler()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraDebugPass_TypeDefinitionIndex)->GetStaticField(0x23B08);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_m_ProfilingVisualizeGI()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraDebugPass_TypeDefinitionIndex)->GetStaticField(0x23B10);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_m_ProfilingVisualizeSDFLighting()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraDebugPass_TypeDefinitionIndex)->GetStaticField(0x23B18);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_m_VisualizeVoxelLightingSampler()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraDebugPass_TypeDefinitionIndex)->GetStaticField(0x23B20);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingDebugLyraUniforms()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraDebugPass_TypeDefinitionIndex)->GetStaticField(0x23B28);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingCopyLyraState()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraDebugPass_TypeDefinitionIndex)->GetStaticField(0x23B30);
		}
		static ::System::Int32* StaticGet__LyraDebugRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LyraDebugPass_TypeDefinitionIndex)->GetStaticField(0x6040);
		}
		static ::System::Int32* StaticGet__LyraStateRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LyraDebugPass_TypeDefinitionIndex)->GetStaticField(0x6044);
		}
		::UnityEngine::Rendering::Universal::Internal::LyraUpdateProbePass* m_lyraUpdateProbePass; // 0xA8
		::UnityEngine::ComputeShader* m_lyraDebugProbesCS; // 0xB0
		::UnityEngine::Material* m_lyraDebugMaterial; // 0xB8
		::System::Boolean m_lastFreeze; // 0xC0
		::System::Byte _padding0[0x3];
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_colorRTHandle; // 0xC4

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig, ::UnityEngine::Shader* lyraDebugShader, ::UnityEngine::Rendering::Universal::Internal::LyraUpdateProbePass* lyraUpdateProbePass, ::UnityEngine::ComputeShader* lyraDebugProbesCS)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*, ::UnityEngine::Shader*, ::UnityEngine::Rendering::Universal::Internal::LyraUpdateProbePass*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRADEBUGPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig, lyraDebugShader, lyraUpdateProbePass, lyraDebugProbesCS);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRADEBUGPASS__CCTOR_OFFSET))();
		}

		::System::Void Setup(::UnityEngine::NAPRenderPipeline0::RenderTargetHandle colorAttachment)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRADEBUGPASS_SETUP_OFFSET))(this, colorAttachment);
		}

		::System::Void VisualizeVoxelLighting(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData renderingData, ::UnityEngine::Rendering::Universal::Internal::Vector2i screenSize)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData, ::UnityEngine::Rendering::Universal::Internal::Vector2i))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRADEBUGPASS_VISUALIZEVOXELLIGHTING_OFFSET))(this, cmd, renderingData, screenSize);
		}

		::System::Void VisualizeGI(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRADEBUGPASS_VISUALIZEGI_OFFSET))(this, cmd, renderingData);
		}

		::System::Void VisualizeSDFLight(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData renderingData, ::UnityEngine::Rendering::Universal::Internal::Vector2i screenSize)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData, ::UnityEngine::Rendering::Universal::Internal::Vector2i))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRADEBUGPASS_VISUALIZESDFLIGHT_OFFSET))(this, cmd, renderingData, screenSize);
		}

		::System::Void VisualizeLocalLight(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData renderingData, ::UnityEngine::Rendering::Universal::Internal::Vector2i screenSize)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData, ::UnityEngine::Rendering::Universal::Internal::Vector2i))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRADEBUGPASS_VISUALIZELOCALLIGHT_OFFSET))(this, cmd, renderingData, screenSize);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRADEBUGPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
