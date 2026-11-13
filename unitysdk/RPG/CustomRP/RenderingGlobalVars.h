#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/BlurParam.h"
#include "unitysdk/RPG/CustomRP/EObjectFeature.h"
#include "unitysdk/RPG/CustomRP/EPlaneReflectionMode.h"
#include "unitysdk/RPG/CustomRP/EProbeResOverride.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/CRPRenderObjectFlag.h"
#include "unitysdk/UnityEngine/SceneManagement/LoadSceneMode.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/PassTagID.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Rendering/CRPActor.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"
#include "unitysdk/UnityEngine/Vector3.h"
class PlaneReflectionProxy;
namespace RPG::CustomRP { class AvatarEffectInfo; }
namespace RPG::CustomRP { class BlackboardMgr; }
namespace RPG::CustomRP { class IAmbientVolumne; }
namespace RPG::CustomRP { class IEngineEnvSystem; }
namespace RPG::CustomRP { class IPlaneReflection; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Behaviour; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering { class IRPData; }

#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ADDACTOR_OFFSET UNITYSDK_OFFSET(0x19906F50)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ADDAMBIENTVOLUMNE_OFFSET UNITYSDK_OFFSET(0x19907360)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ADDFLAG_OFFSET UNITYSDK_OFFSET(0x19907130)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ATTACHRENDERS_OFFSET UNITYSDK_OFFSET(0x19907210)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_CCTOR_OFFSET UNITYSDK_OFFSET(0x199061E0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_CHECKSPRBATCHOPT_OFFSET UNITYSDK_OFFSET(0x199061C0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_CLEANUPSHADOWCACHE_OFFSET UNITYSDK_OFFSET(0x19907640)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_DECDITHER_OFFSET UNITYSDK_OFFSET(0x19907540)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ENDUIPP_OFFSET UNITYSDK_OFFSET(0x19907960)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_FORCEUPDATESCENESHADOW_OFFSET UNITYSDK_OFFSET(0x19907650)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_GETCAMERAVERISON_OFFSET UNITYSDK_OFFSET(0x199075B0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_SHADOWCENTERGO_OFFSET UNITYSDK_OFFSET(0x199079B0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_USEMPB_OFFSET UNITYSDK_OFFSET(0x19907AA0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_USESRPBATCH_OFFSET UNITYSDK_OFFSET(0x19906E40)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_VALIDLOCALREFLECTION_OFFSET UNITYSDK_OFFSET(0x19907B10)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_HIDEACTOR_OFFSET UNITYSDK_OFFSET(0x199070E0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_INCDITHER_OFFSET UNITYSDK_OFFSET(0x19907510)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_INCREASECAMERAVERSION_OFFSET UNITYSDK_OFFSET(0x199075E0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ISFORCECSMPERFRAME_OFFSET UNITYSDK_OFFSET(0x19907A40)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONCHANGEENV_OFFSET UNITYSDK_OFFSET(0x19906E50)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONENTERSCENE_OFFSET UNITYSDK_OFFSET(0x19906950)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONLEAVESCENE_OFFSET UNITYSDK_OFFSET(0x19906A20)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONQUIT_OFFSET UNITYSDK_OFFSET(0x19906F20)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_QUERYACTOR_OFFSET UNITYSDK_OFFSET(0x19907350)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REFRESHACTORRENDER_OFFSET UNITYSDK_OFFSET(0x19907180)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REFRESHACTOR_OFFSET UNITYSDK_OFFSET(0x19907150)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REGISTERCRPDATA_OFFSET UNITYSDK_OFFSET(0x19907C60)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEABOVEOFFSET_OFFSET UNITYSDK_OFFSET(0x199072F0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEACTOR_OFFSET UNITYSDK_OFFSET(0x19907070)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEAMBIENTVOLUMNE_OFFSET UNITYSDK_OFFSET(0x19907460)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEFLAG_OFFSET UNITYSDK_OFFSET(0x19907140)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETABOVEOFFSET_OFFSET UNITYSDK_OFFSET(0x19907020)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETCACHEPOSITION_OFFSET UNITYSDK_OFFSET(0x199072A0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETENABLEINDOORCHARACTERSHADOW_OFFSET UNITYSDK_OFFSET(0x19907720)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETOBJLOCALLIGHT_OFFSET UNITYSDK_OFFSET(0x19907330)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETSHADOWPROBEBLEND_OFFSET UNITYSDK_OFFSET(0x19907610)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETUSEMPB_OFFSET UNITYSDK_OFFSET(0x19907AE0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SET_SHADOWCENTERGO_OFFSET UNITYSDK_OFFSET(0x199079E0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_STARTUIPP_OFFSET UNITYSDK_OFFSET(0x19907750)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_UNREGISTERCRPDATA_OFFSET UNITYSDK_OFFSET(0x19907EA0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_UPDATEALLCRPDATA_OFFSET UNITYSDK_OFFSET(0x19907F10)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS__CLEARCRPDATA_OFFSET UNITYSDK_OFFSET(0x19906D10)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS__INIT_OFFSET UNITYSDK_OFFSET(0x199061B0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS__ONLEAVESCENE_OFFSET UNITYSDK_OFFSET(0x199061D0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS__ONSCENELOADED_OFFSET UNITYSDK_OFFSET(0x19908200)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS__ONSCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0x19908230)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RenderingGlobalVars_TypeDefinitionIndex = 38571;

	class RenderingGlobalVars : public ::System::Object
	{
	public:
		static ::UnityEngine::PassTagID* StaticGet_CustomForwardOpaque()
		{
			return (::UnityEngine::PassTagID*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0xD2F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Behaviour*, ::UnityEngine::Rendering::IRPData*>** StaticGet__CRPDataCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Behaviour*, ::UnityEngine::Rendering::IRPData*>**)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0xD300);
		}

		static ::RPG::CustomRP::AvatarEffectInfo** StaticGet_AvatarEffectsHalfRes()
		{
			return (::RPG::CustomRP::AvatarEffectInfo**)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0xD308);
		}

		static ::UnityEngine::PassTagID* StaticGet__Scene_Lux_Emission_()
		{
			return (::UnityEngine::PassTagID*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0xD310);
		}

		static ::UnityEngine::PassTagID* StaticGet_LightingGBufferEyeHair()
		{
			return (::UnityEngine::PassTagID*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0xD320);
		}

		static ::PlaneReflectionProxy** StaticGet_PlaneReflectionProxy()
		{
			return (::PlaneReflectionProxy**)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0xD330);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Behaviour*, ::UnityEngine::Rendering::IRPData*>** StaticGet__CRPDisableDataCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Behaviour*, ::UnityEngine::Rendering::IRPData*>**)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0xD338);
		}

		static ::UnityEngine::GameObject** StaticGet__shadowCenterGo()
		{
			return (::UnityEngine::GameObject**)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0xD340);
		}

		static ::RPG::CustomRP::IEngineEnvSystem** StaticGet_engienEnvSystem()
		{
			return (::RPG::CustomRP::IEngineEnvSystem**)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0xD348);
		}

		static ::UnityEngine::PassTagID* StaticGet_CustomRPTransparent2()
		{
			return (::UnityEngine::PassTagID*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0xD350);
		}

		static ::UnityEngine::PassTagID* StaticGet_ForwardEmission()
		{
			return (::UnityEngine::PassTagID*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0xD360);
		}

		static ::UnityEngine::RenderTexture** StaticGet__UIPPRT()
		{
			return (::UnityEngine::RenderTexture**)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0xD370);
		}

		static ::RPG::CustomRP::AvatarEffectInfo** StaticGet_AvatarEffects()
		{
			return (::RPG::CustomRP::AvatarEffectInfo**)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0xD378);
		}

		static ::UnityEngine::PassTagID* StaticGet_CustomRPTransparent()
		{
			return (::UnityEngine::PassTagID*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0xD380);
		}

		static ::Il2CppArray<::UnityEngine::Matrix4x4>** StaticGet_capsules()
		{
			return (::Il2CppArray<::UnityEngine::Matrix4x4>**)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0xD390);
		}

		static ::System::Collections::Generic::List_1<::RPG::CustomRP::IPlaneReflection*>** StaticGet_localReflection()
		{
			return (::System::Collections::Generic::List_1<::RPG::CustomRP::IPlaneReflection*>**)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0xD398);
		}

		static ::RPG::CustomRP::BlackboardMgr** StaticGet_blackboardMgr()
		{
			return (::RPG::CustomRP::BlackboardMgr**)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0xD3A0);
		}

		static ::System::UInt32* StaticGet_ExclusiveShadowCasterRenderingLayerMask()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C00);
		}

		static ::System::Boolean* StaticGet_EnableSkipDraw()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C04);
		}

		static ::System::Boolean* StaticGet_RTSupported_ARGBFloat()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C05);
		}

		static ::System::Boolean* StaticGet_EnableSSR()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C06);
		}

		static ::System::Boolean* StaticGet_WaterMarkEnable()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C07);
		}

		static ::System::UInt32* StaticGet_MotionVectorsRenderingLayerMask()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C08);
		}

		static ::System::Int32* StaticGet_DisableUpdate()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C0C);
		}

		static ::System::UInt32* StaticGet_AdditionalReflectionCasterRLM()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C10);
		}

		static ::System::Single* StaticGet_ignoreMainLightLimit()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C14);
		}

		static ::System::Int32* StaticGet_Bounds_Upd_Frequecy()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C18);
		}

		static ::System::UInt32* StaticGet_DefaultRenderingLayerMask()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C1C);
		}

		static ::System::Int32* StaticGet_StencilMonsterStart()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C20);
		}

		static ::System::Int32* StaticGet_StencilCharacterStart()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C24);
		}

		static ::System::Boolean* StaticGet_FlushEnvCmdNoMainCamera()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C28);
		}

		static ::System::Boolean* StaticGet__UseMPB()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C29);
		}

		static ::System::Boolean* StaticGet_MaskCSMBlend()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C2A);
		}

		static ::System::Boolean* StaticGet_EnableViewportMask()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C2B);
		}

		static ::System::Int32* StaticGet_CharacterDefaultStencil()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C2C);
		}

		static ::System::UInt32* StaticGet_ShadowCasterRenderingLayerMask()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C30);
		}

		static ::System::Int32* StaticGet_capsuleCount()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C34);
		}

		static ::System::Int32* StaticGet_StoryCharacterCount()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C38);
		}

		static ::RPG::CustomRP::EPlaneReflectionMode* StaticGet_PlaneReflectionMode()
		{
			return (::RPG::CustomRP::EPlaneReflectionMode*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C3C);
		}

		static ::UnityEngine::Vector4* StaticGet_capsuleColor()
		{
			return (::UnityEngine::Vector4*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C40);
		}

		static ::System::Boolean* StaticGet_ForwardUpdateShadow()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C50);
		}

		static ::System::Boolean* StaticGet_ForceNoCSMBlend()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C51);
		}

		static ::System::Boolean* StaticGet_EnableSkillRadial()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C52);
		}

		static ::System::Boolean* StaticGet_EnablePostProcessing()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C53);
		}

		static ::UnityEngine::Color* StaticGet_IndoorSceneLightColor()
		{
			return (::UnityEngine::Color*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C54);
		}

		static ::System::UInt32* StaticGet_ReflectorRenderingLayerMask()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C64);
		}

		static ::System::UInt32* StaticGet_LocalShadowCasterRenderingLayerMask()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C68);
		}

		static ::RPG::CustomRP::BlurParam* StaticGet_PlaneBlurParam()
		{
			return (::RPG::CustomRP::BlurParam*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C6C);
		}

		static ::System::Boolean* StaticGet_EnableDetachable()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C74);
		}

		static ::System::Boolean* StaticGet_RTSupported_R10G11B11UF()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C75);
		}

		static ::System::Boolean* StaticGet_AlwaysUpdateReflection()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C76);
		}

		static ::System::Boolean* StaticGet_DrawOpaqueObjects()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C77);
		}

		static ::System::UInt32* StaticGet_TransparentPreDapthLayerMask()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C78);
		}

		static ::System::UInt32* StaticGet_ReflectorCasterRenderingLayerMask()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C7C);
		}

		static ::System::UInt32* StaticGet_DynamicShadowRenderingLayerMask()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C80);
		}

		static ::System::Int32* StaticGet_CharacterDitherCounter()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C84);
		}

		static ::System::Boolean* StaticGet_RTSupported_ARGBHalf()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C88);
		}

		static ::System::Boolean* StaticGet_DebugNewResolutionConfig()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C89);
		}

		static ::System::Boolean* StaticGet_EnableIndoorCharacterShadow()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C8A);
		}

		static ::System::Boolean* StaticGet_Enable_Update_Bounds()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C8B);
		}

		static ::System::UInt32* StaticGet_DisableCullingRenderingLayerMask()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C8C);
		}

		static ::System::UInt32* StaticGet_SSRReflactorRenderingLayerMask()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C90);
		}

		static ::System::Int32* StaticGet_DisableLocalMainLight()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C94);
		}

		static ::System::Single* StaticGet_PerObjectShadowHighQulityRange()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C98);
		}

		static ::System::UInt32* StaticGet_PreDepthAlphaTestLayerMask()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2C9C);
		}

		static ::System::Boolean* StaticGet_RTSupported_R10G10B10A2()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CA0);
		}

		static ::System::Boolean* StaticGet_capsuleAOUseHizMip()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CA1);
		}

		static ::System::Boolean* StaticGet_LockShadowCenterGo()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CA2);
		}

		static ::System::Boolean* StaticGet_EnableShadowProbeBlend()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CA3);
		}

		static ::System::Int32* StaticGet__LastLightLevel()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CA4);
		}

		static ::System::UInt32* StaticGet_AddtionalDepthRenderingLayerMask()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CA8);
		}

		static ::System::Boolean* StaticGet_DrawOutline()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CAC);
		}

		static ::System::Boolean* StaticGet_DebugDisableVSM()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CAD);
		}

		static ::System::Boolean* StaticGet_DebugForceCSMPerFrame()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CAE);
		}

		static ::System::Boolean* StaticGet_needForceUpdateEnv()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CAF);
		}

		static ::System::Single* StaticGet_PlanarReflectionRTScale()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CB0);
		}

		static ::System::UInt32* StaticGet_ShadowReceiverRenderingLayerMask()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CB4);
		}

		static ::System::Boolean* StaticGet_DisableLocalLightLerp()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CB8);
		}

		static ::System::Boolean* StaticGet_DisableLowQualityEyeHairStencil()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CB9);
		}

		static ::System::Boolean* StaticGet_DrawRefectorPass()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CBA);
		}

		static ::System::Boolean* StaticGet_IsStoryMode()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CBB);
		}

		static ::System::Int32* StaticGet_CameraChangedVersion()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CBC);
		}

		static ::System::UInt32* StaticGet_AvatarEffectPropExRenderingLayerMask()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CC0);
		}

		static ::RPG::CustomRP::EProbeResOverride* StaticGet_ProbeResOverride()
		{
			return (::RPG::CustomRP::EProbeResOverride*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CC4);
		}

		static ::System::Int32* StaticGet_AdvCharaStencilFace()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CC8);
		}

		static ::System::Boolean* StaticGet_DeferProbe()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CCC);
		}

		static ::System::Boolean* StaticGet_OnePassShadowOnlyResolve()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CCD);
		}

		static ::System::Boolean* StaticGet_CSMBlend()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CCE);
		}

		static ::System::Boolean* StaticGet_DisableMainCamera()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CCF);
		}

		static ::System::Boolean* StaticGet_DisablePOSMOpt()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CD0);
		}

		static ::System::Boolean* StaticGet_RenderAddLight()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CD1);
		}

		static ::System::Boolean* StaticGet_DrawTransparentObjects()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CD2);
		}

		static ::System::Boolean* StaticGet_IsUnLimitShadowCount()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RenderingGlobalVars")->GetStaticField(0x2CD3);
		}

		// static const ::System::Object PROBE_OFFSET_Y; // 0x0
		// static const ::System::Object BattleShadowHightQulityRange; // 0x0
		// static const ::System::Object AdventureShadowHightQulityRange; // 0x0
		// static const ::System::Object StoryShadowHightQulityRange; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_CCTOR_OFFSET))();
		}

		static ::System::Void _Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS__INIT_OFFSET))();
		}

		static ::System::Void CheckSPRBatchOpt()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_CHECKSPRBATCHOPT_OFFSET))();
		}

		static ::System::Void _OnLeaveScene()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS__ONLEAVESCENE_OFFSET))();
		}

		static ::System::Void OnEnterScene()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONENTERSCENE_OFFSET))();
		}

		static ::System::Void OnLeaveScene()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONLEAVESCENE_OFFSET))();
		}

		static ::System::Void OnChangeEnv()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONCHANGEENV_OFFSET))();
		}

		static ::System::Void OnQuit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONQUIT_OFFSET))();
		}

		static ::System::Void AddActor(::UnityEngine::GameObject* a1, ::RPG::CustomRP::EObjectFeature a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::CustomRP::EObjectFeature, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ADDACTOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RemoveActor(::UnityEngine::GameObject* a1, ::RPG::CustomRP::EObjectFeature a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::CustomRP::EObjectFeature))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEACTOR_OFFSET))(a1, a2);
		}

		static ::System::Void HideActor(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_HIDEACTOR_OFFSET))(a1, a2);
		}

		static ::System::Void RefreshActor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_REFRESHACTOR_OFFSET))(a1);
		}

		static ::System::Void RefreshActorRender(::UnityEngine::GameObject* a1, ::UnityEngine::Renderer* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_REFRESHACTORRENDER_OFFSET))(a1, a2);
		}

		static ::System::Void AttachRenders(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ATTACHRENDERS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetCachePosition(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETCACHEPOSITION_OFFSET))(a1, a2);
		}

		static ::System::Void SetAboveOffset(::UnityEngine::GameObject* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETABOVEOFFSET_OFFSET))(a1, a2);
		}

		static ::System::Void RemoveAboveOffset(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEABOVEOFFSET_OFFSET))(a1);
		}

		static ::System::Void AddFlag(::UnityEngine::GameObject* a1, ::UnityEngine::Rendering::CRPRenderObjectFlag a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Rendering::CRPRenderObjectFlag))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ADDFLAG_OFFSET))(a1, a2);
		}

		static ::System::Void RemoveFlag(::UnityEngine::GameObject* a1, ::UnityEngine::Rendering::CRPRenderObjectFlag a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Rendering::CRPRenderObjectFlag))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEFLAG_OFFSET))(a1, a2);
		}

		static ::System::Void SetObjLocalLight(::UnityEngine::GameObject* a1, ::UnityEngine::Light* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETOBJLOCALLIGHT_OFFSET))(a1, a2);
		}

		static ::System::Boolean QueryActor(::UnityEngine::GameObject* a1, ::UnityEngine::Rendering::CRPActor a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::UnityEngine::Rendering::CRPActor))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_QUERYACTOR_OFFSET))(a1, a2);
		}

		static ::System::Void AddAmbientVolumne(::RPG::CustomRP::IAmbientVolumne* a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::IAmbientVolumne*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ADDAMBIENTVOLUMNE_OFFSET))(a1);
		}

		static ::System::Void RemoveAmbientVolumne(::RPG::CustomRP::IAmbientVolumne* a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::IAmbientVolumne*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEAMBIENTVOLUMNE_OFFSET))(a1);
		}

		static ::System::Void IncDither()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_INCDITHER_OFFSET))();
		}

		static ::System::Void DecDither()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_DECDITHER_OFFSET))();
		}

		static ::System::Int32 GetCameraVerison()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_GETCAMERAVERISON_OFFSET))();
		}

		static ::System::Void IncreaseCameraVersion()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_INCREASECAMERAVERSION_OFFSET))();
		}

		static ::System::Void SetShadowProbeBlend(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETSHADOWPROBEBLEND_OFFSET))(a1);
		}

		static ::System::Void CleanupShadowCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_CLEANUPSHADOWCACHE_OFFSET))();
		}

		static ::System::Void ForceUpdateSceneShadow()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_FORCEUPDATESCENESHADOW_OFFSET))();
		}

		static ::System::Void SetEnableIndoorCharacterShadow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETENABLEINDOORCHARACTERSHADOW_OFFSET))(a1);
		}

		static ::UnityEngine::RenderTexture* StartUIPP()
		{
			return ((::UnityEngine::RenderTexture*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_STARTUIPP_OFFSET))();
		}

		static ::System::Void EndUIPP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ENDUIPP_OFFSET))();
		}

		static ::UnityEngine::GameObject* get_ShadowCenterGo()
		{
			return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_SHADOWCENTERGO_OFFSET))();
		}

		static ::System::Void set_ShadowCenterGo(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_SET_SHADOWCENTERGO_OFFSET))(a1);
		}

		static ::System::Boolean IsForceCSMPerFrame()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ISFORCECSMPERFRAME_OFFSET))();
		}

		static ::System::Boolean get_UseSRPBatch()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_USESRPBATCH_OFFSET))();
		}

		static ::System::Boolean get_UseMPB()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_USEMPB_OFFSET))();
		}

		static ::System::Void SetUseMPB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETUSEMPB_OFFSET))(a1);
		}

		static ::RPG::CustomRP::IPlaneReflection* get_validLocalReflection()
		{
			return ((::RPG::CustomRP::IPlaneReflection*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_VALIDLOCALREFLECTION_OFFSET))();
		}

		static ::System::Void RegisterCRPData(::UnityEngine::Behaviour* a1, ::UnityEngine::Rendering::IRPData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Behaviour*, ::UnityEngine::Rendering::IRPData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_REGISTERCRPDATA_OFFSET))(a1, a2);
		}

		static ::System::Void UnRegisterCRPData(::UnityEngine::Behaviour* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Behaviour*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_UNREGISTERCRPDATA_OFFSET))(a1);
		}

		static ::System::Void UpdateAllCRPData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_UPDATEALLCRPDATA_OFFSET))();
		}

		static ::System::Void _ClearCRPData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS__CLEARCRPDATA_OFFSET))();
		}

		static ::System::Void _OnSceneLoaded(::UnityEngine::SceneManagement::Scene a1, ::UnityEngine::SceneManagement::LoadSceneMode a2)
		{
			return ((::System::Void(*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS__ONSCENELOADED_OFFSET))(a1, a2);
		}

		static ::System::Void _OnSceneUnloaded(::UnityEngine::SceneManagement::Scene a1)
		{
			return ((::System::Void(*)(::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS__ONSCENEUNLOADED_OFFSET))(a1);
		}

	};
}
