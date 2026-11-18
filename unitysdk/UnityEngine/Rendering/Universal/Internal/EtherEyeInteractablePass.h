#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal::Internal { class EtherEyeInteractableInfo; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ETHEREYEINTERACTABLEPASS_DRAWINTERACTABLES_OFFSET UNITYSDK_OFFSET(0x108C3EB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ETHEREYEINTERACTABLEPASS_DRAWOVERLAYAFTERDEFERREDSHADING_OFFSET UNITYSDK_OFFSET(0x108C4670)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ETHEREYEINTERACTABLEPASS_EXECUTEAFTERDEFERREDSHADING_OFFSET UNITYSDK_OFFSET(0x108C44C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ETHEREYEINTERACTABLEPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x108C3CA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ETHEREYEINTERACTABLEPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x108C47A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ETHEREYEINTERACTABLEPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x108C3B90)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int EtherEyeInteractablePass_TypeDefinitionIndex = 26974;

	class EtherEyeInteractablePass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::Rendering::Universal::Internal::EtherEyeInteractableInfo** StaticGet_EtherEyeInteractableInfoCache()
		{
			return (::UnityEngine::Rendering::Universal::Internal::EtherEyeInteractableInfo**)Il2CppClass::FromTypeDefinitionIndex(EtherEyeInteractablePass_TypeDefinitionIndex)->GetStaticField(0x24580);
		}
		// static const ::System::Int32 k_ForwardPassIndex = 0x0; // 0x0
		::System::String* m_ProfilerTag; // 0xA8
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler; // 0xB0

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ETHEREYEINTERACTABLEPASS__CTOR_OFFSET))(this, evt);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ETHEREYEINTERACTABLEPASS__CCTOR_OFFSET))();
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ETHEREYEINTERACTABLEPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void ExecuteAfterDeferredShading(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ETHEREYEINTERACTABLEPASS_EXECUTEAFTERDEFERREDSHADING_OFFSET))(this, cmd);
		}

		static ::System::Void DrawOverlayAfterDeferredShading(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ETHEREYEINTERACTABLEPASS_DRAWOVERLAYAFTERDEFERREDSHADING_OFFSET))(cmd);
		}

		static ::System::Void DrawInteractables(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ETHEREYEINTERACTABLEPASS_DRAWINTERACTABLES_OFFSET))(cmd);
		}
	};
}
