#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCmdSlot.h"
#include "unitysdk/RPG/CustomRP/CRPPipelineBase.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/RPG/CustomRP/ReflectionRenderData.h"
#include "unitysdk/UnityEngine/Rendering/AOQuality.h"
#include "unitysdk/UnityEngine/Rendering/AddCmdType.h"
#include "unitysdk/UnityEngine/Rendering/AmbientVolumneData.h"
#include "unitysdk/UnityEngine/Rendering/CRPTestConfig.h"
#include "unitysdk/UnityEngine/Rendering/CRPipelineAsset.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsDeviceType.h"
#include "unitysdk/UnityEngine/Rendering/PassPos.h"
#include "unitysdk/UnityEngine/Rendering/ReflectionInfo.h"
#include "unitysdk/UnityEngine/Rendering/ShadowRuntimeSettings.h"
#include "unitysdk/UnityEngine/Rendering/VsmSettings.h"
#include "unitysdk/UnityEngine/DeformationSetting.h"
#include "unitysdk/UnityEngine/RPGGrassSetting.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Rendering/LightLodConfig.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
class ICmdExecuteCb;
namespace RPG::CustomRP { class AvatarEffectHelper; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_LocalLightLOD; }
namespace RPG::CustomRP { class CRPRendererData; }
namespace RPG::CustomRP { class CapsuleAOPass; }
namespace RPG::CustomRP { class CapturePostProcessPass; }
namespace RPG::CustomRP { class CustomPostProcessPass2; }
namespace RPG::CustomRP { class CustomRenderPipelineAsset; }
namespace RPG::CustomRP { class DLSSPass; }
namespace RPG::CustomRP { class RPGAmbientOcclusion; }
namespace RPG::CustomRP { class RPGTemporalAntialiasing; }
namespace RPG::CustomRP { class SWRTPass; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class VolumeStack; }

#define RPG_CUSTOMRP_CPPPIPELINE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1C7810)
#define RPG_CUSTOMRP_CPPPIPELINE_CHECKUAVREAD_OFFSET UNITYSDK_OFFSET(0x1A1C0860)
#define RPG_CUSTOMRP_CPPPIPELINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A1B85B0)
#define RPG_CUSTOMRP_CPPPIPELINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A1BDE50)
#define RPG_CUSTOMRP_CPPPIPELINE_FORWARDUPDATE_OFFSET UNITYSDK_OFFSET(0x1A1BEFC0)
#define RPG_CUSTOMRP_CPPPIPELINE_GETCMDCB_OFFSET UNITYSDK_OFFSET(0x1A1C4A30)
#define RPG_CUSTOMRP_CPPPIPELINE_ISOFFSCREENCAMERA_OFFSET UNITYSDK_OFFSET(0x1A1C0820)
#define RPG_CUSTOMRP_CPPPIPELINE_ONCHANGEENV_OFFSET UNITYSDK_OFFSET(0x1A1BE880)
#define RPG_CUSTOMRP_CPPPIPELINE_ONENTERSCENE_OFFSET UNITYSDK_OFFSET(0x1A1BE870)
#define RPG_CUSTOMRP_CPPPIPELINE_PREPARE_OFFSET UNITYSDK_OFFSET(0x1A1BE450)
#define RPG_CUSTOMRP_CPPPIPELINE_REGISTCMDCB_OFFSET UNITYSDK_OFFSET(0x1A1C4230)
#define RPG_CUSTOMRP_CPPPIPELINE_RENDER_OFFSET UNITYSDK_OFFSET(0x1A1BE440)
#define RPG_CUSTOMRP_CPPPIPELINE_UNREGISTCMDCB_OFFSET UNITYSDK_OFFSET(0x1A1C46A0)
#define RPG_CUSTOMRP_CPPPIPELINE_UPDATEGLOBALAMBIENT_OFFSET UNITYSDK_OFFSET(0x1A1C1B70)
#define RPG_CUSTOMRP_CPPPIPELINE_UPDATEOPAQUECOPY_OFFSET UNITYSDK_OFFSET(0x1A1BEEE0)
#define RPG_CUSTOMRP_CPPPIPELINE__CLEANCMD_OFFSET UNITYSDK_OFFSET(0x1A1BEBD0)
#define RPG_CUSTOMRP_CPPPIPELINE__CONVERTAOQUALITY_OFFSET UNITYSDK_OFFSET(0x1A1C1320)
#define RPG_CUSTOMRP_CPPPIPELINE__INITCMD_1_OFFSET UNITYSDK_OFFSET(0x1A1BD660)
#define RPG_CUSTOMRP_CPPPIPELINE__INITCMD_OFFSET UNITYSDK_OFFSET(0x1A1C4C90)
#define RPG_CUSTOMRP_CPPPIPELINE__POSTUPDATE_OFFSET UNITYSDK_OFFSET(0x1A1BCE30)
#define RPG_CUSTOMRP_CPPPIPELINE__PREUPDATE_OFFSET UNITYSDK_OFFSET(0x1A1BE5B0)
#define RPG_CUSTOMRP_CPPPIPELINE__SETCMDSLOT_OFFSET UNITYSDK_OFFSET(0x1A1C4D30)
#define RPG_CUSTOMRP_CPPPIPELINE__SETLIGHTLOD_OFFSET UNITYSDK_OFFSET(0x1A1C0830)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEADAPTIVETESSELLATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A1C2F10)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEAFTEROPQAUEPASS_OFFSET UNITYSDK_OFFSET(0x1A1C5000)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEAO_OFFSET UNITYSDK_OFFSET(0x1A1C1330)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEASTRAFX_OFFSET UNITYSDK_OFFSET(0x1A1C2430)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEBEFOREPREPAREPASS_OFFSET UNITYSDK_OFFSET(0x1A1C4D70)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATECAPSULEAOPASS_OFFSET UNITYSDK_OFFSET(0x1A1C4F10)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATECAPTUREPP_OFFSET UNITYSDK_OFFSET(0x1A1C5D50)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATECAPTURE_OFFSET UNITYSDK_OFFSET(0x1A1C0F10)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATECHAR_OFFSET UNITYSDK_OFFSET(0x1A1C2A00)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATECMD_OFFSET UNITYSDK_OFFSET(0x1A1C0F30)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEDEBUG_OFFSET UNITYSDK_OFFSET(0x1A1BE860)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEDEFORMATIONSETTING_OFFSET UNITYSDK_OFFSET(0x1A1C3380)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEDLSS_OFFSET UNITYSDK_OFFSET(0x1A1C5140)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEFLAGS_OFFSET UNITYSDK_OFFSET(0x1A1C3F60)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEGLOBALSDF_OFFSET UNITYSDK_OFFSET(0x1A1C2F90)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEGPUTYPE_OFFSET UNITYSDK_OFFSET(0x1A1BA580)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEGRASSCONFIG_OFFSET UNITYSDK_OFFSET(0x1A1C2FC0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEHIZ_OFFSET UNITYSDK_OFFSET(0x1A1C3EE0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATELEGECY_OFFSET UNITYSDK_OFFSET(0x1A1C4210)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATELIGHTING_OFFSET UNITYSDK_OFFSET(0x1A1C2720)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEPOSTCMD_OFFSET UNITYSDK_OFFSET(0x1A1C12C0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEPP_OFFSET UNITYSDK_OFFSET(0x1A1C57B0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEPROBE_OFFSET UNITYSDK_OFFSET(0x1A1C1A80)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEREFLECTION_OFFSET UNITYSDK_OFFSET(0x1A1BFE60)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEREFRACTION_OFFSET UNITYSDK_OFFSET(0x1A1C29E0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATESHADOWEXT_OFFSET UNITYSDK_OFFSET(0x1A1C28A0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATESHADOW_OFFSET UNITYSDK_OFFSET(0x1A1BF170)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATESSR_OFFSET UNITYSDK_OFFSET(0x1A1C2470)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATESTATICDATA_OFFSET UNITYSDK_OFFSET(0x1A1BA700)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATESWRTPASS_OFFSET UNITYSDK_OFFSET(0x1A1C4FB0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATETAA_OFFSET UNITYSDK_OFFSET(0x1A1C2060)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATETESTCONFIG_OFFSET UNITYSDK_OFFSET(0x1A1BD5B0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATETRANSPARENTPASS_OFFSET UNITYSDK_OFFSET(0x1A1C5010)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEUI_OFFSET UNITYSDK_OFFSET(0x1A1C36A0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICCLOUDSPHERE_OFFSET UNITYSDK_OFFSET(0x1A1C2B20)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICCLOUD_OFFSET UNITYSDK_OFFSET(0x1A1C2AD0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0x1A1C2B70)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICLIGHT_OFFSET UNITYSDK_OFFSET(0x1A1C2E40)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOXELIRRADIANCECACHESETTINGS_OFFSET UNITYSDK_OFFSET(0x1A1C2EA0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEVRS_OFFSET UNITYSDK_OFFSET(0x1A1C4220)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEWATER_OFFSET UNITYSDK_OFFSET(0x1A1C26B0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATE_OFFSET UNITYSDK_OFFSET(0x1A1BE620)
#define RPG_CUSTOMRP_CPPPIPELINE___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1A1C79C0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CPPPipeline_TypeDefinitionIndex = 38462;

	class CPPPipeline : public ::RPG::CustomRP::CRPPipelineBase
	{
	public:
		::RPG::CustomRP::CapsuleAOPass* _CapsuleAOPass; // 0x20
		::UnityEngine::Rendering::ShadowRuntimeSettings _ShadowSettings; // 0x28
		::UnityEngine::Rendering::CommandBuffer* _EnvCmd; // 0x1B8
		::UnityEngine::Rendering::VsmSettings _VsmSettings; // 0x1C0
		::UnityEngine::Rendering::CommandBuffer* _AfterHiZCmd; // 0x220
		::RPG::CustomRP::CapturePostProcessPass* _CapturePPPass; // 0x228
		::UnityEngine::Rendering::CommandBuffer* _BeforeUberCmd; // 0x230
		::UnityEngine::Rendering::CommandBuffer* _CapturePPCmd; // 0x238
		::UnityEngine::Rendering::VolumeStack* _StackRef; // 0x240
		::UnityEngine::Rendering::CommandBuffer* _UIPPCmd; // 0x248
		::UnityEngine::Rendering::CommandBuffer* _AfterTransparentCmd; // 0x250
		::UnityEngine::Rendering::CommandBuffer* _ReflectionCmd; // 0x258
		::Il2CppArray<::System::Object*>* _CmdCb; // 0x260
		::RPG::CustomRP::DLSSPass* _DLSSPass; // 0x268
		::RPG::CustomRP::RPGTemporalAntialiasing* _taaSetting; // 0x270
		::UnityEngine::Rendering::CommandBuffer* _AfterGBufferCmd; // 0x278
		::UnityEngine::Rendering::CommandBuffer* _AfterOpqaueCmd; // 0x280
		::RPG::CustomRP::RPGAmbientOcclusion* _aoSetting; // 0x288
		::RPG::CustomRP::SWRTPass* _SWRTPass; // 0x290
		::UnityEngine::Rendering::CommandBuffer* _BeforeTransparentCmd; // 0x298
		::RPG::CustomRP::AvatarEffectHelper* _AvatarBeforeTransparentRender; // 0x2A0
		::RPG::CustomRP::CRPRendererData* _DataRef; // 0x2A8
		::RPG::CustomRP::AvatarEffectHelper* _AvatarRender; // 0x2B0
		::UnityEngine::Rendering::CommandBuffer* _BeforeTAACmd; // 0x2B8
		::RPG::CustomRP::CustomPostProcessPass2* _PostProcessPass; // 0x2C0
		::UnityEngine::Rendering::CommandBuffer* _AfterDepthCopyCmd; // 0x2C8
		::RPG::CustomRP::ReflectionRenderData _ReflectionData; // 0x2D0
		::UnityEngine::Rendering::CommandBuffer* _PostProcessCmd; // 0x360
		::UnityEngine::Rendering::CRPipelineAsset _InternalAsset; // 0x368
		::UnityEngine::Rendering::GraphicsDeviceType _DeviceType; // 0x9A8
		::System::Byte _padding0[0x4];
		::UnityEngine::Rendering::CRPTestConfig _TestConfig; // 0x9B0
		::System::Boolean _HasPP; // 0x9B8
		::System::Boolean _IsOffscreenCamera; // 0x9B9
		::System::Byte _padding1[0x2];
		::System::Int32 _ui3dCullingMask; // 0x9BC
		::System::Single _RenderScale; // 0x9C0
		::System::Int32 componentCachedVersion; // 0x9C4
		::UnityEngine::Rendering::AmbientVolumneData _GlobalAmbientData; // 0x9C8
		::UnityEngine::Rendering::ReflectionInfo _ReflectionInfo; // 0xA38
		::UnityEngine::DeformationSetting _DeformationSetting; // 0xA7C
		::UnityEngine::RPGGrassSetting _GrassSetting; // 0xAA8
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet__CSMUpdate0()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)UnitySDK::FromName("RPG.CustomRP", "CPPPipeline")->GetStaticField(0x20AE0);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet__CSMUpdate1()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)UnitySDK::FromName("RPG.CustomRP", "CPPPipeline")->GetStaticField(0x20AE8);
		}

		static ::System::Boolean* StaticGet_UAVCanReadWriteMultipleMipsOnSameTexture()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "CPPPipeline")->GetStaticField(0x70C0);
		}

		static ::System::Boolean* StaticGet_CheckUAVReadDone()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "CPPPipeline")->GetStaticField(0x70C1);
		}

		::System::Void _ctor(::RPG::CustomRP::CustomRenderPipelineAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomRenderPipelineAsset*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_CCTOR_OFFSET))();
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Render(::UnityEngine::Rendering::ScriptableRenderContext a1, ::Il2CppArray<::UnityEngine::Camera*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::Il2CppArray<::UnityEngine::Camera*>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_RENDER_OFFSET))(this, a1, a2);
		}

		::System::Void Prepare(::UnityEngine::Camera* a1, ::UnityEngine::Rendering::CRPMainCameraDesc a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_PREPARE_OFFSET))(this, a1, a2);
		}

		::System::Void OnEnterScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_ONENTERSCENE_OFFSET))(this);
		}

		::System::Void OnChangeEnv(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_ONCHANGEENV_OFFSET))(this, a1);
		}

		static ::System::Void UpdateOpaqueCopy(::RPG::CustomRP::CRPGraphicsSettingsData* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::CustomRP::CRPGraphicsSettingsData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_UPDATEOPAQUECOPY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ForwardUpdate(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_FORWARDUPDATE_OFFSET))(a1);
		}

		::System::Boolean IsOffscreenCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_ISOFFSCREENCAMERA_OFFSET))(this);
		}

		::System::Void _SetLightLod(::UnityEngine::Rendering::LightLodConfig a1, ::RPG::CustomRP::CRPGraphicsSettingsData_LocalLightLOD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::LightLodConfig, ::RPG::CustomRP::CRPGraphicsSettingsData_LocalLightLOD*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__SETLIGHTLOD_OFFSET))(this, a1, a2);
		}

		::System::Void CheckUAVRead(::RPG::CustomRP::CRPRendererData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPRendererData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_CHECKUAVREAD_OFFSET))(this, a1);
		}

		::System::Void _UpdateStaticData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATESTATICDATA_OFFSET))(this);
		}

		::System::Void _PreUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__PREUPDATE_OFFSET))(this);
		}

		::System::Void _UpdateReflection(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEREFLECTION_OFFSET))(this, a1);
		}

		::System::Void _UpdateCapture(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATECAPTURE_OFFSET))(this, a1);
		}

		::System::Void _Update(::UnityEngine::Camera* a1, ::UnityEngine::Rendering::CRPMainCameraDesc a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::AOQuality _ConvertAOQuality(::RPG::CustomRP::Quality a1)
		{
			return ((::UnityEngine::Rendering::AOQuality(*)(::PVOID, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__CONVERTAOQUALITY_OFFSET))(this, a1);
		}

		::System::Void _UpdateAO(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEAO_OFFSET))(this, a1);
		}

		::System::Void _UpdateProbe(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEPROBE_OFFSET))(this, a1);
		}

		::System::Void UpdateGlobalAmbient(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_UPDATEGLOBALAMBIENT_OFFSET))(this, a1);
		}

		::System::Void _UpdateTAA(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATETAA_OFFSET))(this, a1);
		}

		::System::Void _UpdateAstraFX(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEASTRAFX_OFFSET))(this, a1);
		}

		::System::Void _UpdateSSR(::RPG::CustomRP::CRPGraphicsSettingsData* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATESSR_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateWater(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEWATER_OFFSET))(this, a1);
		}

		::System::Void _UpdateLighting(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATELIGHTING_OFFSET))(this, a1);
		}

		static ::System::Void _UpdateShadow(::RPG::CustomRP::CRPGraphicsSettingsData* a1, ::UnityEngine::Rendering::ShadowRuntimeSettings a2, ::UnityEngine::Rendering::VsmSettings a3)
		{
			return ((::System::Void(*)(::RPG::CustomRP::CRPGraphicsSettingsData*, ::UnityEngine::Rendering::ShadowRuntimeSettings, ::UnityEngine::Rendering::VsmSettings))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATESHADOW_OFFSET))(a1, a2, a3);
		}

		::System::Void _UpdateShadowExt(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATESHADOWEXT_OFFSET))(this, a1);
		}

		::System::Void _UpdateRefraction(::RPG::CustomRP::CRPGraphicsSettingsData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEREFRACTION_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateChar(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATECHAR_OFFSET))(this, a1);
		}

		::System::Void _UpdateVolumetricCloud(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICCLOUD_OFFSET))(this, a1);
		}

		::System::Void _UpdateVolumetricCloudSphere(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICCLOUDSPHERE_OFFSET))(this, a1);
		}

		::System::Void _UpdateVolumetricFog(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICFOG_OFFSET))(this, a1);
		}

		::System::Void _UpdateVolumetricLight(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICLIGHT_OFFSET))(this, a1);
		}

		::System::Void _UpdateVoxelIrradianceCacheSettings(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOXELIRRADIANCECACHESETTINGS_OFFSET))(this, a1);
		}

		::System::Void _UpdateAdaptiveTessellationSettings(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEADAPTIVETESSELLATIONSETTINGS_OFFSET))(this, a1);
		}

		::System::Void _UpdateGlobalSDF(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEGLOBALSDF_OFFSET))(this, a1);
		}

		::System::Void _UpdateGrassConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEGRASSCONFIG_OFFSET))(this);
		}

		::System::Void _UpdateDeformationSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEDEFORMATIONSETTING_OFFSET))(this);
		}

		::System::Void _UpdateUI(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEUI_OFFSET))(this, a1);
		}

		::System::Void _UpdateHiZ(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEHIZ_OFFSET))(this, a1);
		}

		::System::Void _UpdateGPUType(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEGPUTYPE_OFFSET))(this, a1);
		}

		::System::Void _UpdateFlags(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEFLAGS_OFFSET))(this, a1);
		}

		::System::Void _PostUpdate(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__POSTUPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateLegecy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATELEGECY_OFFSET))(this);
		}

		::System::Void _UpdateTestConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATETESTCONFIG_OFFSET))(this);
		}

		::System::Void _UpdateVRS(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEVRS_OFFSET))(this, a1);
		}

		::System::Void _UpdateDebug(::UnityEngine::Rendering::CRPMainCameraDesc a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPMainCameraDesc))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEDEBUG_OFFSET))(this, a1);
		}

		static ::System::Void RegistCmdCb(::PipelineCmdSlot a1, ::ICmdExecuteCb* a2)
		{
			return ((::System::Void(*)(::PipelineCmdSlot, ::ICmdExecuteCb*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_REGISTCMDCB_OFFSET))(a1, a2);
		}

		static ::System::Void UnRegistCmdCb(::PipelineCmdSlot a1, ::ICmdExecuteCb* a2)
		{
			return ((::System::Void(*)(::PipelineCmdSlot, ::ICmdExecuteCb*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_UNREGISTCMDCB_OFFSET))(a1, a2);
		}

		static ::ICmdExecuteCb* GetCmdCb(::PipelineCmdSlot a1, ::System::Int32 a2)
		{
			return ((::ICmdExecuteCb*(*)(::PipelineCmdSlot, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_GETCMDCB_OFFSET))(a1, a2);
		}

		::System::Void _InitCmd(::System::Int32 a1, ::UnityEngine::Rendering::PassPos a2, ::System::Int32 a3, ::UnityEngine::Rendering::AddCmdType a4, ::UnityEngine::Rendering::CommandBuffer* a5, ::System::String* a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::PassPos, ::System::Int32, ::UnityEngine::Rendering::AddCmdType, ::UnityEngine::Rendering::CommandBuffer*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__INITCMD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void _SetCmdSlot(::PipelineCmdSlot a1, ::UnityEngine::Rendering::CommandBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCmdSlot, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__SETCMDSLOT_OFFSET))(this, a1, a2);
		}

		::System::Void _InitCmd_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__INITCMD_1_OFFSET))(this);
		}

		::System::Void _CleanCmd(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__CLEANCMD_OFFSET))(this, a1);
		}

		::System::Void _UpdateCmd(::UnityEngine::Camera* a1, ::UnityEngine::Rendering::CRPMainCameraDesc a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATECMD_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdatePostCmd(::UnityEngine::Camera* a1, ::UnityEngine::Rendering::CRPMainCameraDesc a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEPOSTCMD_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateBeforePreparePass(::UnityEngine::Rendering::CRPMainCameraDesc a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPMainCameraDesc))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEBEFOREPREPAREPASS_OFFSET))(this, a1);
		}

		::System::Void _UpdateCapsuleAOPass(::UnityEngine::Camera* a1, ::UnityEngine::Rendering::CRPMainCameraDesc a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATECAPSULEAOPASS_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateSWRTPass(::UnityEngine::Camera* a1, ::UnityEngine::Rendering::CRPMainCameraDesc a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATESWRTPASS_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateAfterOpqauePass(::UnityEngine::Rendering::CRPMainCameraDesc a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPMainCameraDesc))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEAFTEROPQAUEPASS_OFFSET))(this, a1);
		}

		::System::Void _UpdateTransparentPass(::UnityEngine::Rendering::CRPMainCameraDesc a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPMainCameraDesc))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATETRANSPARENTPASS_OFFSET))(this, a1);
		}

		::System::Void _UpdateDLSS(::UnityEngine::Camera* a1, ::UnityEngine::Rendering::CRPMainCameraDesc a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEDLSS_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdatePP(::UnityEngine::Camera* a1, ::UnityEngine::Rendering::CRPMainCameraDesc a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEPP_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateCapturePP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATECAPTUREPP_OFFSET))(this);
		}

		::System::Void __ctor_b__0_0(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE___CTOR_B__0_0_OFFSET))(this, a1);
		}

	};
}
