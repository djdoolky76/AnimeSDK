#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::NAPRenderPipeline0 { class HableCurve; }
namespace UnityEngine::NAPRenderPipeline0 { class RayTracingResources; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int SRPEngineResources_TypeDefinitionIndex = 6048;

	class SRPEngineResources : public ::System::Object
	{
	public:
		static ::UnityEngine::Material** StaticGet_ScreenSpaceReflectionMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4BD0);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_HueVsSat()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4BD8);
		}
		static ::UnityEngine::Material** StaticGet_OpaqueOverdrawMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4BE0);
		}
		static ::UnityEngine::Material** StaticGet_GaussianBlurForEasyMirrorReflection()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4BE8);
		}
		static ::UnityEngine::Material** StaticGet_SkyboxMaterialMiddleOn()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4BF0);
		}
		static ::UnityEngine::Material** StaticGet_PerObjectShadowResolveMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4BF8);
		}
		static ::UnityEngine::Material** StaticGet_DepthPyramidMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4C00);
		}
		static ::UnityEngine::Material** StaticGet_ScreenspaceShadowsMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4C08);
		}
		static ::UnityEngine::Material** StaticGet_NapBloomGaussVMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4C10);
		}
		static ::Il2CppArray<::UnityEngine::Vector2Int>** StaticGet_BlueNoise16LTexSizes()
		{
			return (::Il2CppArray<::UnityEngine::Vector2Int>**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4C18);
		}
		static ::Il2CppArray<::UnityEngine::Texture2D*>** StaticGet_BlueNoise16LTex()
		{
			return (::Il2CppArray<::UnityEngine::Texture2D*>**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4C20);
		}
		static ::UnityEngine::ComputeShader** StaticGet_Editor_LightCountCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4C28);
		}
		static ::UnityEngine::Material** StaticGet_GaussianBlurForScreenSpaceReflection()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4C30);
		}
		static ::UnityEngine::Material** StaticGet_VolumetricFogMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4C38);
		}
		static ::UnityEngine::Material** StaticGet_GaussianBlurForScreenSpaceShadow()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4C40);
		}
		static ::UnityEngine::Material** StaticGet_CopyDepthForOffScreenParticlesMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4C48);
		}
		static ::UnityEngine::Material** StaticGet_BlendOffScreenUI()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4C50);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_LumVsSat()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4C58);
		}
		static ::UnityEngine::Material** StaticGet_NapBloomGaussHMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4C60);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_Blue()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4C68);
		}
		static ::UnityEngine::NAPRenderPipeline0::HableCurve** StaticGet_HableCurve()
		{
			return (::UnityEngine::NAPRenderPipeline0::HableCurve**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4C70);
		}
		static ::UnityEngine::Material** StaticGet_BlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4C78);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_Red()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4C80);
		}
		static ::UnityEngine::Material** StaticGet_LightShaftBlurMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4C88);
		}
		static ::UnityEngine::Mesh** StaticGet_RainDropMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4C90);
		}
		static ::UnityEngine::Material** StaticGet_ScreenSpaceGlobalIlluminationMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4C98);
		}
		static ::UnityEngine::Material** StaticGet_CameraMotionVectorMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4CA0);
		}
		static ::UnityEngine::Material** StaticGet_OcclusionProcessMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4CA8);
		}
		static ::UnityEngine::Material** StaticGet_OpaqueUberPostMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4CB0);
		}
		static ::UnityEngine::ComputeShader** StaticGet_NapCapsuleAOCullingCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4CB8);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_Master()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4CC0);
		}
		static ::UnityEngine::Material** StaticGet_LightShaftMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4CC8);
		}
		static ::UnityEngine::ComputeShader** StaticGet_ScreenSpaceGlobalIlluminationCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4CD0);
		}
		static ::UnityEngine::Material** StaticGet_DeferredShadingMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4CD8);
		}
		static ::UnityEngine::Material** StaticGet_VolumetricFogBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4CE0);
		}
		static ::UnityEngine::Material** StaticGet_DebugLightGridMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4CE8);
		}
		static ::UnityEngine::Material** StaticGet_CopyDepthMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4CF0);
		}
		static ::UnityEngine::Material** StaticGet_OcclusionBlurMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4CF8);
		}
		static ::Il2CppArray<::UnityEngine::Material*>** StaticGet_ColorGradingLutBuilder()
		{
			return (::Il2CppArray<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4D00);
		}
		static ::UnityEngine::Material** StaticGet_DrawSkyLutMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4D08);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_HueVsHue()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4D10);
		}
		static ::UnityEngine::Texture2D** StaticGet_PreIntegratedFGD_GGXDisneyDiffuse()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4D18);
		}
		static ::UnityEngine::Material** StaticGet_LightShaftOcclusionMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4D20);
		}
		static ::UnityEngine::Material** StaticGet_SkyboxMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4D28);
		}
		static ::UnityEngine::Material** StaticGet_GaussianBlurForScreenSpaceReflectionB()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4D30);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_SatVsSat()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4D38);
		}
		static ::UnityEngine::NAPRenderPipeline0::RayTracingResources** StaticGet_rtxRes()
		{
			return (::UnityEngine::NAPRenderPipeline0::RayTracingResources**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4D40);
		}
		static ::UnityEngine::Material** StaticGet_GaussianBlurMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4D48);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_Green()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4D50);
		}
		static ::UnityEngine::Material** StaticGet_TransparentOverdrawMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4D58);
		}
		static ::UnityEngine::Material** StaticGet_TemporalAntializeMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4D60);
		}
		static ::UnityEngine::Material** StaticGet_NapBloomMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4D68);
		}
		static ::UnityEngine::Material** StaticGet_SamplingMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4D70);
		}
		static ::UnityEngine::Material** StaticGet_HDROutputMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x4D78);
		}
		static ::System::Int32* StaticGet_SkyboxMaterialMiddleOnID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x2290);
		}
		static ::System::Int32* StaticGet_RainDropMeshID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x2294);
		}
		static ::System::Int32* StaticGet_SkyboxMaterialID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x2298);
		}
		static ::System::Int32* StaticGet_CopyDepthForOffScreenParticlesMaterialID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPEngineResources_TypeDefinitionIndex)->GetStaticField(0x229C);
		}
	};
}
