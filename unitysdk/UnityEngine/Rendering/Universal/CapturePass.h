#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/Universal/CapturePass_PreviewType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CameraCaptureAction; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_BLITSELECTEDTOPREVIEWTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D279DA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_BLITTOLINEARSPACE_OFFSET UNITYSDK_OFFSET(0x1D2777F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_BLITTOLOGSPACE_OFFSET UNITYSDK_OFFSET(0x1D277250)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWALBEDO_OFFSET UNITYSDK_OFFSET(0x1D27A9F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWBAKEGI_OFFSET UNITYSDK_OFFSET(0x1D27C140)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWBASEUV_OFFSET UNITYSDK_OFFSET(0x1D279AE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWCHARACTER_OFFSET UNITYSDK_OFFSET(0x1D27CCF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWDEPTH_OFFSET UNITYSDK_OFFSET(0x1D2797D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWEMISSION_OFFSET UNITYSDK_OFFSET(0x1D27BC20)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWFOGSCAT_OFFSET UNITYSDK_OFFSET(0x1D27C880)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWFOGTRANS_OFFSET UNITYSDK_OFFSET(0x1D27C410)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWFUR_OFFSET UNITYSDK_OFFSET(0x1D27D0C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWIBLDIFFUSE_OFFSET UNITYSDK_OFFSET(0x1D27BEB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWJUSTDIRECTIONLIGHT_OFFSET UNITYSDK_OFFSET(0x1D27B670)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWJUSTIBLSPECULAR_OFFSET UNITYSDK_OFFSET(0x1D27D5E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWJUSTPUNCTUALLIGHT_OFFSET UNITYSDK_OFFSET(0x1D27B960)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWLIGHT_OFFSET UNITYSDK_OFFSET(0x1D27ACD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWOUTPUTDEFERREDSHADINGFORPUNCTUALLIGHTANDGI_OFFSET UNITYSDK_OFFSET(0x1D27D350)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWPOSITION_OFFSET UNITYSDK_OFFSET(0x1D278620)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWSKYBACKGROUND_OFFSET UNITYSDK_OFFSET(0x1D278C50)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWSKYCLOUD_OFFSET UNITYSDK_OFFSET(0x1D2791F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWSSAO_OFFSET UNITYSDK_OFFSET(0x1D27D8B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D2806D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1D2815D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_ISRECORADPLAY_OFFSET UNITYSDK_OFFSET(0x1D276920)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTALBEDO_OFFSET UNITYSDK_OFFSET(0x1D27AEF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTBAKEGI_OFFSET UNITYSDK_OFFSET(0x1D27EA50)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTBASEUVLAYER_OFFSET UNITYSDK_OFFSET(0x1D279D10)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTBLOOMWITHLINEARSPACE_OFFSET UNITYSDK_OFFSET(0x1D278040)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTCHARACTERBLOOM_OFFSET UNITYSDK_OFFSET(0x1D2782C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTCHARACTER_OFFSET UNITYSDK_OFFSET(0x1D27EDA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTCOLORWITHLINEARSPACE_OFFSET UNITYSDK_OFFSET(0x1D2774E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTCOLORWITHLOGSPACE_OFFSET UNITYSDK_OFFSET(0x1D276FD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTCOLOR_OFFSET UNITYSDK_OFFSET(0x1D276EB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTDEFERREDSHADINGFORPUNCTUALLIGHTANDGI_OFFSET UNITYSDK_OFFSET(0x1D27F510)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTDEPTH_OFFSET UNITYSDK_OFFSET(0x1D2794C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTEFFECT_OFFSET UNITYSDK_OFFSET(0x1D27DB90)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTEMISSION_OFFSET UNITYSDK_OFFSET(0x1D27E3B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTFOGSCAT_OFFSET UNITYSDK_OFFSET(0x1D280380)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTFOGTRANS_OFFSET UNITYSDK_OFFSET(0x1D280030)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTFUR_OFFSET UNITYSDK_OFFSET(0x1D27F1C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTIBLDIFFUSE_OFFSET UNITYSDK_OFFSET(0x1D27E700)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTJUSTDIRECTIONLIGHT_OFFSET UNITYSDK_OFFSET(0x1D27DCD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTJUSTIBLSPECULAR_OFFSET UNITYSDK_OFFSET(0x1D27F860)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTJUSTPUNCTUALLIGHT_OFFSET UNITYSDK_OFFSET(0x1D27E040)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTLAYERID_OFFSET UNITYSDK_OFFSET(0x1D279A90)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTLIGHT_OFFSET UNITYSDK_OFFSET(0x1D27B3F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTNORMAL_OFFSET UNITYSDK_OFFSET(0x1D276D70)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTOFFSCREENRT_OFFSET UNITYSDK_OFFSET(0x1D27FBB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x1D278360)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTSCENEALBEDO_OFFSET UNITYSDK_OFFSET(0x1D27B170)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTSKYBACKGROUND_OFFSET UNITYSDK_OFFSET(0x1D278940)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTSKYCLOUD_OFFSET UNITYSDK_OFFSET(0x1D278F50)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTSSAO_OFFSET UNITYSDK_OFFSET(0x1D27FD10)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTSUNSHAFTWITHLINEARSPACE_OFFSET UNITYSDK_OFFSET(0x1D277D30)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTVOLUMETRICFOGWITHLINEARSPACE_OFFSET UNITYSDK_OFFSET(0x1D277A80)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_SETISRECORADPLAY_OFFSET UNITYSDK_OFFSET(0x1D2768A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1D276A30)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2816E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2769A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1D281940)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CapturePass_TypeDefinitionIndex = 27244;

	class CapturePass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PreviewTypesStyle()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CapturePass_TypeDefinitionIndex)->GetStaticField(0x23CB0);
		}
		static ::UnityEngine::RenderTexture** StaticGet_m_PreviewTexture()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(CapturePass_TypeDefinitionIndex)->GetStaticField(0x23CB8);
		}
		static ::System::Int32* StaticGet__TempRTForCommonCapture3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapturePass_TypeDefinitionIndex)->GetStaticField(0x60E0);
		}
		static ::System::Single* StaticGet_DepthFarClipPlane()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CapturePass_TypeDefinitionIndex)->GetStaticField(0x60E4);
		}
		static ::System::Int32* StaticGet__TempRTForCommonCapture4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapturePass_TypeDefinitionIndex)->GetStaticField(0x60E8);
		}
		static ::UnityEngine::Rendering::Universal::CapturePass_PreviewType* StaticGet_m_PreviewType()
		{
			return (::UnityEngine::Rendering::Universal::CapturePass_PreviewType*)Il2CppClass::FromTypeDefinitionIndex(CapturePass_TypeDefinitionIndex)->GetStaticField(0x60EC);
		}
		static ::System::Single* StaticGet_PositionRadius()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CapturePass_TypeDefinitionIndex)->GetStaticField(0x60F0);
		}
		static ::System::Boolean* StaticGet_isRecoradPlay()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CapturePass_TypeDefinitionIndex)->GetStaticField(0x60F4);
		}
		static ::System::Boolean* StaticGet_captureParticleOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CapturePass_TypeDefinitionIndex)->GetStaticField(0x60F5);
		}
		static ::System::Int32* StaticGet__TempRTForCommonCaptur2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapturePass_TypeDefinitionIndex)->GetStaticField(0x60F8);
		}
		static ::System::Int32* StaticGet__TempRTForCommonCapture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapturePass_TypeDefinitionIndex)->GetStaticField(0x60FC);
		}
		static ::UnityEngine::Vector3* StaticGet_PositionCenter()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(CapturePass_TypeDefinitionIndex)->GetStaticField(0x6100);
		}
		// static const ::System::String* m_ProfilerTag; // 0x0
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_CameraDepthHandle; // 0xA8
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_CameraColorHandle; // 0xAC

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS__CCTOR_OFFSET))();
		}

		static ::System::Void setIsRecoradPlay(::System::Boolean boo)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_SETISRECORADPLAY_OFFSET))(boo);
		}

		static ::System::Boolean IsRecoradPlay()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_ISRECORADPLAY_OFFSET))();
		}

		::System::Void Setup(::UnityEngine::NAPRenderPipeline0::RenderTargetHandle colorHandle, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle depthHandle, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_SETUP_OFFSET))(this, colorHandle, depthHandle, renderingData);
		}

		::System::Void OutputNormal(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTNORMAL_OFFSET))(this, captureAction, cmd);
		}

		::System::Void OutputColor(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTCOLOR_OFFSET))(this, captureAction, cmd);
		}

		::System::Void OutputColorWithLogSpace(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTCOLORWITHLOGSPACE_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData);
		}

		::System::Void OutputColorWithLinearSpace(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTCOLORWITHLINEARSPACE_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData);
		}

		::System::Void OutputVolumetricFogWithLinearSpace(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTVOLUMETRICFOGWITHLINEARSPACE_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData);
		}

		::System::Void OutputSunShaftWithLinearSpace(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTSUNSHAFTWITHLINEARSPACE_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData);
		}

		::System::Void OutputBloomWithLinearSpace(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTBLOOMWITHLINEARSPACE_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData);
		}

		::System::Void OutputCharacterBloom(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTCHARACTERBLOOM_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData);
		}

		::System::Void OutputPosition(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTPOSITION_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData);
		}

		::System::Void OutputSkyBackground(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTSKYBACKGROUND_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData);
		}

		::System::Void OutputSkyCloud(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTSKYCLOUD_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData);
		}

		::System::Void OutputDepth(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmdBuf, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTDEPTH_OFFSET))(this, captureAction, cmdBuf, screenSize, context);
		}

		::System::Void OutputLayerId(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmdBuf)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTLAYERID_OFFSET))(this, captureAction, cmdBuf);
		}

		static ::System::Void DrawBaseUV(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWBASEUV_OFFSET))(cmd, renderTarget);
		}

		::System::Void OutputBaseUVLayer(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTBASEUVLAYER_OFFSET))(this, captureAction, cmd, screenSize, context);
		}

		static ::System::Void BlitSelectedToPreviewTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Matrix4x4 view, ::UnityEngine::Matrix4x4 proj)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_BLITSELECTEDTOPREVIEWTEXTURE_OFFSET))(cmd, view, proj);
		}

		::System::Void OutputAlbedo(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTALBEDO_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData);
		}

		::System::Void OutputSceneAlbedo(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTSCENEALBEDO_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData);
		}

		::System::Void OutputLight(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTLIGHT_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData);
		}

		static ::System::Void DrawAlbedo(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget, ::System::Boolean allAlbedo)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWALBEDO_OFFSET))(cmd, renderTarget, allAlbedo);
		}

		static ::System::Void DrawJustDirectionLight(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget, ::UnityEngine::Rendering::RenderTargetIdentifier depthTarget, ::System::Int32 type)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWJUSTDIRECTIONLIGHT_OFFSET))(cmd, renderTarget, depthTarget, type);
		}

		static ::System::Void DrawJustPunctualLight(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget, ::UnityEngine::Rendering::RenderTargetIdentifier depthTarget, ::System::Int32 type)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWJUSTPUNCTUALLIGHT_OFFSET))(cmd, renderTarget, depthTarget, type);
		}

		static ::System::Void DrawEmission(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget, ::UnityEngine::Rendering::RenderTargetIdentifier depthTarget)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWEMISSION_OFFSET))(cmd, renderTarget, depthTarget);
		}

		static ::System::Void DrawIBLDiffuse(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget, ::UnityEngine::Rendering::RenderTargetIdentifier depthTarget)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWIBLDIFFUSE_OFFSET))(cmd, renderTarget, depthTarget);
		}

		static ::System::Void DrawBakeGI(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget, ::UnityEngine::Rendering::RenderTargetIdentifier depthTarget)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWBAKEGI_OFFSET))(cmd, renderTarget, depthTarget);
		}

		static ::System::Void DrawFogTrans(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget, ::UnityEngine::Rendering::RenderTargetIdentifier depthTarget)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWFOGTRANS_OFFSET))(cmd, renderTarget, depthTarget);
		}

		static ::System::Void DrawFogScat(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget, ::UnityEngine::Rendering::RenderTargetIdentifier depthTarget)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWFOGSCAT_OFFSET))(cmd, renderTarget, depthTarget);
		}

		static ::System::Void DrawCharacter(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget, ::UnityEngine::Rendering::RenderTargetIdentifier depthTarget, ::UnityEngine::Rendering::RenderTargetIdentifier mask)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWCHARACTER_OFFSET))(cmd, renderTarget, depthTarget, mask);
		}

		static ::System::Void DrawFur(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget, ::UnityEngine::Rendering::RenderTargetIdentifier depthTarget)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWFUR_OFFSET))(cmd, renderTarget, depthTarget);
		}

		static ::System::Void DrawOutputDeferredShadingForPunctualLightAndGI(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget, ::UnityEngine::Rendering::RenderTargetIdentifier depthTarget)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWOUTPUTDEFERREDSHADINGFORPUNCTUALLIGHTANDGI_OFFSET))(cmd, renderTarget, depthTarget);
		}

		static ::System::Void DrawJustIBLSpecular(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget, ::UnityEngine::Rendering::RenderTargetIdentifier depthTarget)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWJUSTIBLSPECULAR_OFFSET))(cmd, renderTarget, depthTarget);
		}

		static ::System::Void DrawSSAO(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget, ::UnityEngine::Rendering::RenderTargetIdentifier SSAOBuffer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWSSAO_OFFSET))(cmd, renderTarget, SSAOBuffer);
		}

		static ::System::Void DrawPosition(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier renderTargetIdentifier, ::UnityEngine::Matrix4x4 view, ::UnityEngine::Matrix4x4 proj)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWPOSITION_OFFSET))(cmd, renderTargetIdentifier, view, proj);
		}

		static ::System::Void BlitToLogSpace(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier target)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_BLITTOLOGSPACE_OFFSET))(cmd, source, target);
		}

		static ::System::Void BlitToLinearSpace(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier target)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_BLITTOLINEARSPACE_OFFSET))(cmd, source, target);
		}

		static ::System::Void DrawLight(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWLIGHT_OFFSET))(cmd, renderTarget);
		}

		static ::System::Void DrawDepth(::UnityEngine::Rendering::CommandBuffer* cmdBuf, ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget, ::UnityEngine::Rendering::RenderTargetIdentifier colorInput)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWDEPTH_OFFSET))(cmdBuf, renderTarget, colorInput);
		}

		static ::System::Void DrawSkyBackground(::UnityEngine::Rendering::CommandBuffer* cmdBuf, ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget, ::UnityEngine::Rendering::RenderTargetIdentifier depthTarget)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWSKYBACKGROUND_OFFSET))(cmdBuf, renderTarget, depthTarget);
		}

		static ::System::Void DrawSkyCloud(::UnityEngine::Rendering::CommandBuffer* cmdBuf, ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget, ::UnityEngine::Rendering::RenderTargetIdentifier colorInput)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_DRAWSKYCLOUD_OFFSET))(cmdBuf, renderTarget, colorInput);
		}

		::System::Void OutputEffect(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTEFFECT_OFFSET))(this, captureAction, cmd);
		}

		::System::Void OutputJustDirectionLight(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Int32 type)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTJUSTDIRECTIONLIGHT_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData, type);
		}

		::System::Void OutputJustPunctualLight(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Int32 type)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTJUSTPUNCTUALLIGHT_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData, type);
		}

		::System::Void OutputEmission(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTEMISSION_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData);
		}

		::System::Void OutputIBLDiffuse(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTIBLDIFFUSE_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData);
		}

		::System::Void OutputBakeGI(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTBAKEGI_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData);
		}

		::System::Void OutputCharacter(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTCHARACTER_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData);
		}

		::System::Void OutputFur(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTFUR_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData);
		}

		::System::Void OutputDeferredShadingForPunctualLightAndGI(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTDEFERREDSHADINGFORPUNCTUALLIGHTANDGI_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData);
		}

		::System::Void OutputJustIBLSpecular(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTJUSTIBLSPECULAR_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData);
		}

		::System::Void OutputOffScreenRT(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTOFFSCREENRT_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData);
		}

		::System::Void OutputSSAO(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTSSAO_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData);
		}

		::System::Void OutputFogTrans(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTFOGTRANS_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData);
		}

		::System::Void OutputFogScat(::UnityEngine::Rendering::CameraCaptureAction* captureAction, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_OUTPUTFOGSCAT_OFFSET))(this, captureAction, cmd, screenSize, context, renderingData);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
		}
	};
}
