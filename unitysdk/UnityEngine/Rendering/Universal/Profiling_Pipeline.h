#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Profiling { class CustomSampler; }

#define UNITYENGINE_RENDERING_UNIVERSAL_PROFILING_PIPELINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E874E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Profiling_Pipeline_TypeDefinitionIndex = 26885;

	class Profiling_Pipeline : public ::System::Object
	{
	public:
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererPBDApplyWind()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22D90);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererInitializeRenderingData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22D98);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RenderPlanarReflection()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22DA0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_ForwardRender_RefreshEnvironmentConfig()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22DA8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_InitializeCameraRenderState()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22DB0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_InitializeLightData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22DB8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_FrameRenderSetups_CharacterSetup()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22DC0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_ExBlockAfterRendering()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22DC8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_InternalFinishRendering()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22DD0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_FrameRenderSetups_SetupConstants()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22DD8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_ForwardRender_InitializeCameraViewConstant()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22DE0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_ForwardLights_InitializeLightConstants()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22DE8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_setupPerFrameShaderConstants()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22DF0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererExecute()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22DF8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererPreCull()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22E00);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_ForwardLights_SetupMainLightConstants()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22E08);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_FrameRenderSetups_SetupStaticResource()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22E10);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RenderGameCameraStack()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22E18);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_SoftEdge()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22E20);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererSetup()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22E28);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sampler_WaitSRPHelper()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22E30);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_UpdateLensFlareLightData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22E38);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_UpdateForLights()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22E40);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_SetupLights()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22E48);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_PassUtil_CommonWeatherParams()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22E50);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RenderEditorCamera()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22E58);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_PassUtil_ApplyPPSParams()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22E60);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_NapRenderEntity_PrepareData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22E68);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_FrameRenderSetups_SetupCameras()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22E70);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_InitializeShadowData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22E78);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_ExBlockBeforeRendering()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22E80);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_RuntimePostAO()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22E88);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_FrameRenderSetups()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22E90);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_PassUtil_UpdateWaterValue()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22E98);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_Execute()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22EA0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_PassUtil_ApplyRTXParams()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22EA8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_PassUtil_FlushParams()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22EB0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererSubmit()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22EB8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_FrameRenderSetups_PerObjectShadowSetup()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22EC0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_DrawGizmos()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22EC8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_OverlayBeforeDeferredShading()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22ED0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_ExBlockMainRenderingOpaque()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22ED8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_FillBlockRange()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22EE0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererSortPasses()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22EE8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_CapsuleAOUpdate()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22EF0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_FrameRenderSetups_LensFlareUpdate()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22EF8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_ForwardRender_SetSkyCover()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22F00);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_ExBlockMainRenderingTransparent()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22F08);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_ParticleLightOptimize()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22F10);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Smapler_FlushGamePlayKeywords()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x22F18);
		}
		// static const ::System::String* k_Name; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PROFILING_PIPELINE__CCTOR_OFFSET))();
		}
	};
}
