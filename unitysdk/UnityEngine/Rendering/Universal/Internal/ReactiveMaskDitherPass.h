#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKDITHERPASS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E37BF30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKDITHERPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1E37C050)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKDITHERPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E37C680)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKDITHERPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E37BC20)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ReactiveMaskDitherPass_TypeDefinitionIndex = 27113;

	class ReactiveMaskDitherPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::System::Int32* StaticGet__ReactiveValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ReactiveMaskDitherPass_TypeDefinitionIndex)->GetStaticField(0x65C0);
		}
		::System::String* m_ProfilerTag; // 0xA8
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler; // 0xB0
		::UnityEngine::Material* m_Material; // 0xB8
		::System::Boolean m_WarnedMissingShader; // 0xC0

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig, ::UnityEngine::Shader* shader)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKDITHERPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig, shader);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKDITHERPASS__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKDITHERPASS_DISPOSE_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKDITHERPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
