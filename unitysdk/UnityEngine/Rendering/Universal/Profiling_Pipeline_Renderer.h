#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }

#define UNITYENGINE_RENDERING_UNIVERSAL_PROFILING_PIPELINE_RENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA6A060)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Profiling_Pipeline_Renderer_TypeDefinitionIndex = 26887;

	class Profiling_Pipeline_Renderer : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_setup()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_Renderer_TypeDefinitionIndex)->GetStaticField(0x23990);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_setupCullingParameters()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_Renderer_TypeDefinitionIndex)->GetStaticField(0x23998);
		}
		// static const ::System::String* k_Name; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PROFILING_PIPELINE_RENDERER__CCTOR_OFFSET))();
		}
	};
}
