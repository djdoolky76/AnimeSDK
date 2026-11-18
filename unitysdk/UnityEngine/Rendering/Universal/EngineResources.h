#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture2DArray; }
namespace UnityEngine::NAPRenderPipeline0 { class HableCurve; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }
namespace UnityEngine::Rendering::Universal { class ForwardRendererData; }
namespace UnityEngine::Rendering::Universal { class ForwardRendererExtension; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CLEARENGINEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E368D00)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEDAMAGEDECALTEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x1E368120)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIALS_OFFSET UNITYSDK_OFFSET(0x1E3655D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x1E368AA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E367A60)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_GETBLACKSHADOWMAP_OFFSET UNITYSDK_OFFSET(0x1E367CE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_GETINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1E3635D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E363730)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_RESETSHADOWPROXYMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E368EB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E369550)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1E369540)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int EngineResources_TypeDefinitionIndex = 26328;

	class EngineResources : public ::System::Object
	{
	public:
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurForEasyMirrorReflection()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21D90);
		}
		static ::UnityEngine::Material** StaticGet_m_BlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21D98);
		}
		static ::UnityEngine::Material** StaticGet_m_ClearStencil421Material()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21DA0);
		}
		static ::UnityEngine::Mesh** StaticGet_m_LocalSphereVolumetricFogMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21DA8);
		}
		static ::UnityEngine::Material** StaticGet_m_OcclusionBlurMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21DB0);
		}
		static ::UnityEngine::Material** StaticGet_m_OffScreenParticleBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21DB8);
		}
		static ::UnityEngine::Material** StaticGet_m_BlitCubeTextureFaceMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21DC0);
		}
		static ::UnityEngine::NAPRenderPipeline0::HableCurve** StaticGet_hableCurve()
		{
			return (::UnityEngine::NAPRenderPipeline0::HableCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21DC8);
		}
		static ::UnityEngine::Material** StaticGet_m_ScreenSpaceReflectionMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21DD0);
		}
		static ::UnityEngine::ComputeShader** StaticGet_m_VfxVolumetricShadow()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21DD8);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_blue()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21DE0);
		}
		static ::UnityEngine::Texture2D** StaticGet_FSRLuminanceBiasLut()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21DE8);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21DF0);
		}
		static ::UnityEngine::ComputeShader** StaticGet_m_ScreenSpaceGlobalIllumination()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21DF8);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurForScreenSpaceReflection()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21E00);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_hueVsSat()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21E08);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurForScreenSpaceReflectionB()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21E10);
		}
		static ::UnityEngine::Material** StaticGet_m_TemporalAntializeMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21E18);
		}
		static ::UnityEngine::Material** StaticGet_m_LightShaftBlurMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21E20);
		}
		static ::UnityEngine::Material** StaticGet_m_LutBuilderHdr()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21E28);
		}
		static ::UnityEngine::Material** StaticGet_m_MeshWindSource()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21E30);
		}
		static ::UnityEngine::Texture2DArray** StaticGet_decalTextureArray()
		{
			return (::UnityEngine::Texture2DArray**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21E38);
		}
		static ::UnityEngine::Material** StaticGet_m_CameraMotionVectorMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21E40);
		}
		static ::UnityEngine::Material** StaticGet_m_SkyboxMaterialMiddleOn()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21E48);
		}
		static ::UnityEngine::Material** StaticGet_m_ShowLightMapResolution()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21E50);
		}
		static ::UnityEngine::Material** StaticGet_m_OpaqueOverdrawMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21E58);
		}
		static ::UnityEngine::Material** StaticGet_m_ScreenSpaceGlobalIlluminationMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21E60);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_m_EngineMaterialList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21E68);
		}
		static ::UnityEngine::Material** StaticGet_m_FluidFxComposisteAndGradient()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21E70);
		}
		static ::UnityEngine::RenderTexture** StaticGet_m_BlackShadowMap()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21E78);
		}
		static ::UnityEngine::Material** StaticGet_m_LensFlareDataDriveMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21E80);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterRampMateiral()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21E88);
		}
		static ::UnityEngine::Material** StaticGet_m_PPFilterMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21E90);
		}
		static ::UnityEngine::Material** StaticGet_m_SkyboxMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21E98);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_master()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21EA0);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_hueVsHue()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21EA8);
		}
		static ::UnityEngine::Material** StaticGet_m_LutBuilderLdr()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21EB0);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterGhostMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21EB8);
		}
		static ::UnityEngine::Material** StaticGet_m_CopyDepthMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21EC0);
		}
		static ::UnityEngine::ComputeShader** StaticGet_m_RegionDetectFlareCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21EC8);
		}
		static ::UnityEngine::Material** StaticGet_m_OpaqueUberPostMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21ED0);
		}
		static ::UnityEngine::Material** StaticGet_m_ScreenspaceShadowsMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21ED8);
		}
		static ::UnityEngine::Material** StaticGet_m_HQNapBloomMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21EE0);
		}
		static ::UnityEngine::Material** StaticGet_m_OutlineProcessMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21EE8);
		}
		static ::Il2CppArray<::UnityEngine::Material*>** StaticGet_colorGradingLutBuilder()
		{
			return (::Il2CppArray<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21EF0);
		}
		static ::UnityEngine::Material** StaticGet_m_PerObjectShadowResolveMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21EF8);
		}
		static ::UnityEngine::Material** StaticGet_m_TransparentOverdrawMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21F00);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>** StaticGet_decalDamageTextures()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21F08);
		}
		static ::UnityEngine::ComputeShader** StaticGet_HQNapBloomUpCombineCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21F10);
		}
		static ::UnityEngine::Material** StaticGet_m_BulletHoleMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21F18);
		}
		static ::UnityEngine::Material** StaticGet_m_VolumetricFogMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21F20);
		}
		static ::UnityEngine::Material** StaticGet_m_DrawSkyLutMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21F28);
		}
		static ::UnityEngine::MaterialPropertyBlock** StaticGet_m_BlurMaterialPropertyBlock()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21F30);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_green()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21F38);
		}
		static ::UnityEngine::Material** StaticGet_m_DownSampleDepthMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21F40);
		}
		static ::UnityEngine::Material** StaticGet_m_BlitShadowMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21F48);
		}
		static ::UnityEngine::Material** StaticGet_m_FSRMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21F50);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_red()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21F58);
		}
		static ::UnityEngine::Material** StaticGet_m_DepthPyramidMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21F60);
		}
		static ::UnityEngine::Material** StaticGet_m_CopyDepthForOffScreenParticlesMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21F68);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_lumVsSat()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21F70);
		}
		static ::UnityEngine::Material** StaticGet_m_OutlineObjectMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21F78);
		}
		static ::UnityEngine::ComputeShader** StaticGet_HQNapBloomBlurCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21F80);
		}
		static ::UnityEngine::Material** StaticGet_m_VolumetricCloudSampleMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21F88);
		}
		static ::UnityEngine::Material** StaticGet_m_ContactShadowMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21F90);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurForScreenSpaceShadow()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21F98);
		}
		static ::UnityEngine::Material** StaticGet_m_LyraGISectorVisualizationMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21FA0);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterGhostBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21FA8);
		}
		static ::UnityEngine::Material** StaticGet_m_LocalSphereVolumetricFogMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21FB0);
		}
		static ::UnityEngine::Mesh** StaticGet_s_TextureStreamingFakerMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21FB8);
		}
		static ::UnityEngine::Material** StaticGet_m_LightShaftOcclusionMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21FC0);
		}
		static ::UnityEngine::Material** StaticGet_m_NapBloomGaussVMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21FC8);
		}
		static ::UnityEngine::Material** StaticGet_m_PostLightMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21FD0);
		}
		static ::UnityEngine::Material** StaticGet_m_TransparentMaskMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21FD8);
		}
		static ::UnityEngine::Texture2D** StaticGet_characterOverlayTexture()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21FE0);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterIgnisFatuusBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21FE8);
		}
		static ::UnityEngine::Material** StaticGet_m_DeferredShadingMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21FF0);
		}
		static ::UnityEngine::Mesh** StaticGet_m_RainMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x21FF8);
		}
		static ::UnityEngine::Material** StaticGet_m_CaptureMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22000);
		}
		static ::UnityEngine::Material** StaticGet_m_ExtraMotionVectorPassMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22008);
		}
		static ::UnityEngine::Material** StaticGet_m_UVViewMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22010);
		}
		static ::UnityEngine::Material** StaticGet_m_NapBloomGaussHMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22018);
		}
		static ::UnityEngine::Material** StaticGet_m_OutlineEffectsMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22020);
		}
		static ::UnityEngine::Rendering::Universal::ForwardRendererExtension** StaticGet_m_Extension()
		{
			return (::UnityEngine::Rendering::Universal::ForwardRendererExtension**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22028);
		}
		static ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset** StaticGet_s_GlobalSettings()
		{
			return (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22030);
		}
		static ::UnityEngine::Material** StaticGet_m_OcclusionProcessMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22038);
		}
		static ::UnityEngine::Material** StaticGet_m_FluidFxDivergence()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22040);
		}
		static ::UnityEngine::Material** StaticGet_m_RegionBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22048);
		}
		static ::UnityEngine::Material** StaticGet_m_FluidFxPressure()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22050);
		}
		static ::UnityEngine::Material** StaticGet_m_BlendOffScreenUIMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22058);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_satVsSat()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22060);
		}
		static ::UnityEngine::Material** StaticGet_m_FxPostProcessFogPSMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22068);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterIgnisFatuusMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22070);
		}
		static ::UnityEngine::Material** StaticGet_m_LightShaftMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22078);
		}
		static ::UnityEngine::Material** StaticGet_m_VolumetricFogBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22080);
		}
		static ::UnityEngine::Material** StaticGet_m_SamplingMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22088);
		}
		static ::UnityEngine::Material** StaticGet_m_VolumetricMistBlitMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22090);
		}
		static ::UnityEngine::Material** StaticGet_m_FluidFxAdvection()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x22098);
		}
		static ::UnityEngine::Material** StaticGet_m_NapBloomMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x220A0);
		}
		static ::UnityEngine::Material** StaticGet_m_HDROutputMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x220A8);
		}
		static ::UnityEngine::Material** StaticGet_m_SpriteMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x220B0);
		}
		static ::UnityEngine::Rendering::Universal::ForwardRendererData** StaticGet_s_Data()
		{
			return (::UnityEngine::Rendering::Universal::ForwardRendererData**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x220B8);
		}
		static ::UnityEngine::Material** StaticGet_m_VisiblePixelCountMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x220C0);
		}
		static ::UnityEngine::ComputeShader** StaticGet_m_RayDtenctionCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x220C8);
		}
		static ::UnityEngine::Material** StaticGet_m_TextureSheetAnimationMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x220D0);
		}
		static ::System::Int32* StaticGet_m_BlitMaterialID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5060);
		}
		static ::System::Int32* StaticGet_m_CopyDepthForOffScreenParticlesMaterialID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5064);
		}
		static ::System::Int32* StaticGet_m_RegionDetectFlareCSID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5068);
		}
		static ::System::Int32* StaticGet_m_SpriteMaterialID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x506C);
		}
		static ::System::Int32* StaticGet_m_SkyboxMaterialID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5070);
		}
		static ::System::Int32* StaticGet_m_RainMeshID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5074);
		}
		static ::System::Int32* StaticGet_m_SkyboxMaterialMiddleOnID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5078);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetInstanceID(::UnityEngine::Object* obj)
		{
			return ((::System::Int32(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_GETINSTANCEID_OFFSET))(obj);
		}

		static ::System::Void Initialize(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_INITIALIZE_OFFSET))(asset);
		}

		static ::System::Void CreateEngineMaterials(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIALS_OFFSET))(asset);
		}

		static ::System::Void CreateDamageDecalTextureArray(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEDAMAGEDECALTEXTUREARRAY_OFFSET))(asset);
		}

		static ::UnityEngine::Material* CreateEngineMaterial(::UnityEngine::Shader* shader, ::System::String* name)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Shader*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIAL_OFFSET))(shader, name);
		}

		static ::UnityEngine::Material* CreateEngineMaterial_1(::UnityEngine::Material* material)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIAL_1_OFFSET))(material);
		}

		static ::System::Void ClearEngineMaterial()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CLEARENGINEMATERIAL_OFFSET))();
		}

		static ::System::Void ResetShadowProxyMaterial()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_RESETSHADOWPROXYMATERIAL_OFFSET))();
		}

		static ::UnityEngine::RenderTexture* GetBlackShadowMap()
		{
			return ((::UnityEngine::RenderTexture*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_GETBLACKSHADOWMAP_OFFSET))();
		}
	};
}
