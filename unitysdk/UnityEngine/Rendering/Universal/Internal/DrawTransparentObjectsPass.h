#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/BuiltinRenderTextureType.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/RenderStateBlock.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"
#include "unitysdk/UnityEngine/Rendering/SortingCriteria.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CommandBufferWrapper.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/DrawingSettings.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/StencilState.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::NAPRenderPipeline0 { class MaterialWrapper; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }
namespace UnityEngine::Rendering::Universal { class PostProcessData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_BLITCHARACTERGHOST_OFFSET UNITYSDK_OFFSET(0x1C85EA10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_BLITDSTDISCARDCONTENT_OFFSET UNITYSDK_OFFSET(0x1C865F90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_BLURUI_OFFSET UNITYSDK_OFFSET(0x1C85F0A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1C84F550)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x1C859B20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DOBOKEHDEPTHOFFIELD_OFFSET UNITYSDK_OFFSET(0x1C8646D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DODAMAGETEXTSYSTEMDRAW_OFFSET UNITYSDK_OFFSET(0x1C85D600)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DODEPTHOFFILEDFORCG_OFFSET UNITYSDK_OFFSET(0x1C862A20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DOGAUSSIANDEPTHOFFIELD_OFFSET UNITYSDK_OFFSET(0x1C863560)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DOPOSTLIGHTFORCG_OFFSET UNITYSDK_OFFSET(0x1C861CB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DOPVFARCLIPFOREDITOR_OFFSET UNITYSDK_OFFSET(0x1C861C40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DOPVUICAPTUREFOREDITOR_OFFSET UNITYSDK_OFFSET(0x1C862670)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DRAWCHARACTEROUTLINEFXFORCG_OFFSET UNITYSDK_OFFSET(0x1C860D60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DRAWDEBUGVIEWTOOLSFOREDITOR_OFFSET UNITYSDK_OFFSET(0x1C8618D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DRAWFULLRESFXAFTERALL_OFFSET UNITYSDK_OFFSET(0x1C860890)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DRAWFX2DFOG_OFFSET UNITYSDK_OFFSET(0x1C85CB20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DRAWHIZDEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1C85ED60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DRAWMODULATEFORCG_OFFSET UNITYSDK_OFFSET(0x1C861370)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DRAWPOSTLIGHTEFFECTFOREFFECT_OFFSET UNITYSDK_OFFSET(0x1C8621F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DRAWSCENEFARTRANSPARENTOBJECT_OFFSET UNITYSDK_OFFSET(0x1C85DF10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DRAWTRANSPARENTMASKPASSFORCG_OFFSET UNITYSDK_OFFSET(0x1C860F00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_EXECUTEPROCESSLENSFLARE_OFFSET UNITYSDK_OFFSET(0x1C85EBB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C85A170)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1C8665F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_GETCOCPARAMS_OFFSET UNITYSDK_OFFSET(0x1C865330)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_GETMAXBOKEHRADIUSINPIXELS_OFFSET UNITYSDK_OFFSET(0x1C865F30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_GETRTXPATHTRACERENABLED_OFFSET UNITYSDK_OFFSET(0x1C85E8C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_GETSTEREOCOMPATIBLEDESCRIPTOR_1_OFFSET UNITYSDK_OFFSET(0x1C865510)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_GETSTEREOCOMPATIBLEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C8660D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_OUTPUTLENSFLARELAYERFORCG_OFFSET UNITYSDK_OFFSET(0x1C861930)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_OUTPUTPARTICLELAYERFORCG_OFFSET UNITYSDK_OFFSET(0x1C861090)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_PREPAREBOKEHKERNEL_OFFSET UNITYSDK_OFFSET(0x1C865670)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_PREPAREDOFRESOURCE_OFFSET UNITYSDK_OFFSET(0x1C866340)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_PREVIEWPATHTRACERFOREDITOR_OFFSET UNITYSDK_OFFSET(0x1C861870)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_PREVIEWSCENEVIEWLIGHTSHAFTFOREDITOR_OFFSET UNITYSDK_OFFSET(0x1C8616B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_PROCESSOFFSCREENPARTICLES_OFFSET UNITYSDK_OFFSET(0x1C85E060)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_SETPREVIEWCAMERALAYERMASKFOREDITOR_OFFSET UNITYSDK_OFFSET(0x1C862610)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1C84C000)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_TRYBLITVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0x1C85D930)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_TRYDRAWRAINDEPTHFORCG_OFFSET UNITYSDK_OFFSET(0x1C860BD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_TRYDRAWRAINDROPANDRAINSPLASHFORCG_OFFSET UNITYSDK_OFFSET(0x1C8615E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8666A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C842A80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS___BASE_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x1C866730)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1C866740)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DrawTransparentObjectsPass_TypeDefinitionIndex = 27237;

	class DrawTransparentObjectsPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::System::Int32* StaticGet_s_FlipPreUIBackBufferId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrawTransparentObjectsPass_TypeDefinitionIndex)->GetStaticField(0x7770);
		}
		static ::System::Int32* StaticGet_s_FlipUITextureId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrawTransparentObjectsPass_TypeDefinitionIndex)->GetStaticField(0x7774);
		}
		static ::System::Int32* StaticGet_s_PreUIBackBufferId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrawTransparentObjectsPass_TypeDefinitionIndex)->GetStaticField(0x7778);
		}
		static ::System::Int32* StaticGet_s_UIBlurCompositeSource()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrawTransparentObjectsPass_TypeDefinitionIndex)->GetStaticField(0x777C);
		}
		static ::System::Int32* StaticGet_s_UITextureId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrawTransparentObjectsPass_TypeDefinitionIndex)->GetStaticField(0x7780);
		}
		static ::System::Int32* StaticGet_PassPropertyId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrawTransparentObjectsPass_TypeDefinitionIndex)->GetStaticField(0x7784);
		}
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* m_MRT3; // 0xA8
		::System::String* m_ProfilerTag; // 0xB0
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler; // 0xB8
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_FarTransparentShaderTagIdList; // 0xC0
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* bokehDepthOfField; // 0xC8
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_TopTransparentShaderTagIdList; // 0xD0
		::UnityEngine::Rendering::Universal::DepthOfField* m_DepthOfField; // 0xD8
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_WriteTransparentMaskTagIdList; // 0xE0
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_TransparentShaderTagIdList; // 0xE8
		::Il2CppArray<::UnityEngine::Vector4>* m_BokehKernel; // 0xF0
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* gaussianDepthOfFieldMaterial; // 0xF8
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForTop; // 0x100
		::UnityEngine::Matrix4x4 m_DamageTextProjMatrix; // 0x11C
		::System::Byte _padding0[0x4];
		::UnityEngine::Rendering::RenderTargetIdentifier m_DepthIdentifier; // 0x160
		::System::Int32 m_lastScreenWidth; // 0x188
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_CameraColorAttachment; // 0x18C
		::UnityEngine::Rendering::RenderStateBlock m_RenderStateBlock; // 0x190
		::UnityEngine::Matrix4x4 cameraProjMatrix; // 0x1FC
		::System::Boolean m_OutlineBeforeTransparent; // 0x23C
		::System::Boolean m_UseNativeDeferred; // 0x23D
		::System::Boolean m_UseFullResOffScreenParticlePass; // 0x23E
		::System::Boolean m_isInitDamageTextProjMatrix; // 0x23F
		::UnityEngine::Matrix4x4 cameraViewMatrix; // 0x240
		::System::Boolean m_OffScreenUI; // 0x280
		::System::Boolean m_DrawParticleDecalAndOnTransparentPass; // 0x281
		::System::Boolean m_OutlineProcessPassActiveHear; // 0x282
		::System::Byte _padding1[0x1];
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_DofCoCFormat; // 0x284
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForAll; // 0x288
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettings; // 0x2A4
		::UnityEngine::RenderTextureDescriptor m_Descriptor; // 0x2C0
		::UnityEngine::Rendering::FilteringSettings m_FilterSettingForNonUI2DParticle; // 0x2F8
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_ActiveDepthAttachment; // 0x314
		::UnityEngine::Rendering::FilteringSettings m_FilterForFarFullResTransparent; // 0x318
		::System::Boolean m_PlanarReflectedFxInRtx; // 0x334
		::System::Boolean m_UIBlurRendered; // 0x335
		::System::Boolean m_JustSetRenderTarget; // 0x336
		::System::Boolean m_SubPassDeferred; // 0x337
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_DefaultHDRFormat; // 0x338
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForModulateCGBack; // 0x33C
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForModulateCGFront; // 0x358
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_ActiveColorAttachment; // 0x374
		::System::Int32 m_BokehHash; // 0x378
		::System::Int32 m_lastScreenHeight; // 0x37C

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig, ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState stencilState, ::System::Int32 stencilReference, ::UnityEngine::Rendering::Universal::PostProcessData* ppsData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*, ::UnityEngine::LayerMask, ::UnityEngine::Rendering::StencilState, ::System::Int32, ::UnityEngine::Rendering::Universal::PostProcessData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig, layerMask, stencilState, stencilReference, ppsData);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS__CCTOR_OFFSET))();
		}

		::System::Void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_CONFIGURE_OFFSET))(this, cmd, renderingData);
		}

		::System::Void Setup(::UnityEngine::NAPRenderPipeline0::RenderTargetHandle activeColorAttachment, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle activeDepthAttachment, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle cameraColorAttachment, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Boolean useFullResOffScreenParticle, ::System::Boolean drawParticleDecalAndOnTransparentPass, ::System::Boolean justSetRenderTarget, ::System::Boolean UseNativeDeferred, ::System::Boolean planarReflectedFxInRTX, ::System::Boolean useOffScreenUI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_SETUP_OFFSET))(this, activeColorAttachment, activeDepthAttachment, cameraColorAttachment, renderingData, useFullResOffScreenParticle, drawParticleDecalAndOnTransparentPass, justSetRenderTarget, UseNativeDeferred, planarReflectedFxInRTX, useOffScreenUI);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void DrawFullResFxAfterAll(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DRAWFULLRESFXAFTERALL_OFFSET))(this, context, cmd, renderingData, postCullRenderingData);
		}

		::System::Void TryDrawRainDepthForCG(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_TRYDRAWRAINDEPTHFORCG_OFFSET))(this, renderingData, cmdWrapper);
		}

		::System::Void DrawSceneFarTransparentObject(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DRAWSCENEFARTRANSPARENTOBJECT_OFFSET))(this, context, postCullRenderingData, renderingData);
		}

		::System::Void DrawCharacterOutlineFXForCG(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::FilteringSettings& filterSettings, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::SortingCriteria& sortFlags)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::FilteringSettings&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::SortingCriteria&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DRAWCHARACTEROUTLINEFXFORCG_OFFSET))(this, context, postCullRenderingData, cmd, filterSettings, renderingData, sortFlags);
		}

		::System::Void DrawTransparentMaskPassForCG(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::FilteringSettings& filterSettings, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::SortingCriteria& sortFlags)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::FilteringSettings&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::SortingCriteria&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DRAWTRANSPARENTMASKPASSFORCG_OFFSET))(this, context, postCullRenderingData, cmd, filterSettings, renderingData, sortFlags);
		}

		::System::Void OutputParticleLayerForCG(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_OUTPUTPARTICLELAYERFORCG_OFFSET))(this, renderingData, cmd);
		}

		::System::Void BlitCharacterGhost(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_BLITCHARACTERGHOST_OFFSET))(this, cmd, context);
		}

		::System::Void DrawModulateForCG(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::SortingCriteria& sortFlags)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::SortingCriteria&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DRAWMODULATEFORCG_OFFSET))(this, context, postCullRenderingData, cmd, renderingData, sortFlags);
		}

		::System::Void TryDrawRainDropAndRainSplashForCG(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_TRYDRAWRAINDROPANDRAINSPLASHFORCG_OFFSET))(this, renderingData, cmdWrapper);
		}

		::System::Void PreviewSceneViewLightShaftForEditor(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_PREVIEWSCENEVIEWLIGHTSHAFTFOREDITOR_OFFSET))(this, camera, cmd);
		}

		::System::Void PreviewPathTracerForEditor(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_PREVIEWPATHTRACERFOREDITOR_OFFSET))(this, renderingData, context, cmd);
		}

		::System::Void DrawDebugViewToolsForEditor(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DRAWDEBUGVIEWTOOLSFOREDITOR_OFFSET))(this, renderingData, cmd, camera);
		}

		::System::Boolean GetRTXPathTracerEnabled(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_GETRTXPATHTRACERENABLED_OFFSET))(this, renderingData);
		}

		::System::Void OutputLensflareLayerForCG(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_OUTPUTLENSFLARELAYERFORCG_OFFSET))(this, renderingData, context, cmd);
		}

		::System::Void DoPVFarClipForEditor(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::SortingCriteria& sortFlags)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::SortingCriteria&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DOPVFARCLIPFOREDITOR_OFFSET))(this, context, cmd, renderingData, postCullRenderingData, sortFlags);
		}

		::System::Void DoPostLightForCG(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::SortingCriteria& sortFlags)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::SortingCriteria&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DOPOSTLIGHTFORCG_OFFSET))(this, context, renderingData, postCullRenderingData, cmd, sortFlags);
		}

		::System::Void DrawPostLightEffectForEffect(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DRAWPOSTLIGHTEFFECTFOREFFECT_OFFSET))(this, context, renderingData, cmd);
		}

		::System::Void SetPreviewCameraLayerMaskForEditor(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::FilteringSettings& filteringSettings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::FilteringSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_SETPREVIEWCAMERALAYERMASKFOREDITOR_OFFSET))(this, renderingData, filteringSettings);
		}

		::System::Void DoPVUICaptureForEditor(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DOPVUICAPTUREFOREDITOR_OFFSET))(this, renderingData, cmd, context);
		}

		::System::Void DrawFx2DFog(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DRAWFX2DFOG_OFFSET))(this, cmd);
		}

		::System::Void BlurUI(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::DrawingSettings& drawSettings, ::UnityEngine::Rendering::FilteringSettings& filterSettings, ::System::Int32 rawLayerMask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::DrawingSettings&, ::UnityEngine::Rendering::FilteringSettings&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_BLURUI_OFFSET))(this, context, renderingData, postCullRenderingData, cmd, drawSettings, filterSettings, rawLayerMask);
		}

		::System::Void DrawHizDebugView(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::SortingCriteria sortFlags)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::SortingCriteria))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DRAWHIZDEBUGVIEW_OFFSET))(this, context, renderingData, postCullRenderingData, sortFlags);
		}

		::System::Void TryBlitVolumetricFog(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Boolean canBlit, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_TRYBLITVOLUMETRICFOG_OFFSET))(this, cmd, canBlit, postCullRenderingData, renderingData);
		}

		::System::Void ProcessOffScreenParticles(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_PROCESSOFFSCREENPARTICLES_OFFSET))(this, cmd, renderingData);
		}

		::System::Void ExecuteProcessLensFlare(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_EXECUTEPROCESSLENSFLARE_OFFSET))(this, cmd, context, renderingData);
		}

		::System::Void DoDamageTextSystemDraw(::UnityEngine::Camera* camera, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DODAMAGETEXTSYSTEMDRAW_OFFSET))(this, camera, renderingData, cmd);
		}

		::System::Void DoDepthOfFiledForCG(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::CommandBuffer* cmdWrapper, ::UnityEngine::Rect pixelRect, ::System::Boolean isAfterVolumetricFogCall)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DODEPTHOFFILEDFORCG_OFFSET))(this, cameraData, cmdWrapper, pixelRect, isAfterVolumetricFogCall);
		}

		::System::Void DoGaussianDepthOfField(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::CommandBuffer* cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier& source, ::UnityEngine::Rendering::RenderTargetIdentifier& destination, ::UnityEngine::Rect pixelRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DOGAUSSIANDEPTHOFFIELD_OFFSET))(this, cameraData, cmdWrapper, source, destination, pixelRect);
		}

		::System::Void PrepareBokehKernel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_PREPAREBOKEHKERNEL_OFFSET))(this);
		}

		::System::Void DoBokehDepthOfField(::UnityEngine::Rendering::CommandBuffer* cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier& source, ::UnityEngine::Rendering::RenderTargetIdentifier& destination, ::UnityEngine::Rect pixelRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_DOBOKEHDEPTHOFFIELD_OFFSET))(this, cmdWrapper, source, destination, pixelRect);
		}

		::UnityEngine::Rendering::BuiltinRenderTextureType BlitDstDiscardContent(::UnityEngine::Rendering::CommandBuffer* cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier rt)
		{
			return ((::UnityEngine::Rendering::BuiltinRenderTextureType(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_BLITDSTDISCARDCONTENT_OFFSET))(this, cmdWrapper, rt);
		}

		static ::System::Single GetMaxBokehRadiusInPixels(::System::Single viewportHeight)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_GETMAXBOKEHRADIUSINPIXELS_OFFSET))(viewportHeight);
		}

		::UnityEngine::RenderTextureDescriptor GetStereoCompatibleDescriptor(::System::Boolean lossy)
		{
			return ((::UnityEngine::RenderTextureDescriptor(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_GETSTEREOCOMPATIBLEDESCRIPTOR_OFFSET))(this, lossy);
		}

		::UnityEngine::RenderTextureDescriptor GetStereoCompatibleDescriptor_1(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Int32 depthBufferBits, ::System::Boolean lossy)
		{
			return ((::UnityEngine::RenderTextureDescriptor(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_GETSTEREOCOMPATIBLEDESCRIPTOR_1_OFFSET))(this, width, height, format, depthBufferBits, lossy);
		}

		::System::Void PrepareDofResource(::UnityEngine::Rendering::Universal::PostProcessData* ppsData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::PostProcessData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_PREPAREDOFRESOURCE_OFFSET))(this, ppsData);
		}

		::UnityEngine::Vector4 GetCoCParams(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_GETCOCPARAMS_OFFSET))(this, cameraData);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_CLEANUP_OFFSET))(this);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void __base_Configure(::UnityEngine::Rendering::CommandBuffer* P0, ::UnityEngine::NAPRenderPipeline0::RenderingData& P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS___BASE_CONFIGURE_OFFSET))(this, P0, P1);
		}

		::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWTRANSPARENTOBJECTSPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
		}
	};
}
