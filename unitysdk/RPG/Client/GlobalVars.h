#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/HideInteractiveUIReason.h"
#include "unitysdk/RPG/Client/StartUpReasonType.h"
#include "unitysdk/System/Object.h"
class AMJCOOEKGEN;
class BCAOJMKPGOI;
class BCFPJDNFAFO;
class BEHEGJCEGIC;
class CBCEIDBNIHC;
class CHIOEBDCOAA;
class DAIHKPJPMCE;
class DEEOAMEMOFD;
class DHFGHIEPFIF;
class DNLGHEHJOCC;
class EEKGPHOPONF;
class EFGKKPOMAEM;
class FCEAMALPJPH;
class FFFOAONFDMJ;
class FFPEBJDFJDN;
class FKFPKFPHBJO;
class HBAJIJEAJDK;
class HFDGMMPMGIC;
class HGDBKOHKGBI;
class HGJGNMPOIKN;
class IDECOCBLLBC;
class IJOJFKGLIKA;
class JIAJFGCHLJE;
class KEDHGJIILLI;
class KGGIOGDDHGH;
class KHCGCOFBMDC;
class LBJLBMOOJGM;
class LFPJGOEOLNH;
class LNCKJIOBNDO;
class MKBBKAKCMCG;
class NBIOOMEPCFJ;
class NCEDGGKOMIH;
class NDEBPOONLKC;
class OAMEEKBFMHL;
class ODCPCHEIMKK;
class OLGJAPMAPHL;
class PDJCPAFHFIN;
class PEINNEOBJDA;
class PFGDFMBOOLK;
namespace InControl { class InControlInputModule; }
namespace RPG::Client { class AssetMgr; }
namespace RPG::Client { class AudioManager; }
namespace RPG::Client { class CameraManager; }
namespace RPG::Client { class ClientOnlyCommonConfig; }
namespace RPG::Client { class DialogueManager; }
namespace RPG::Client { class EffectPluginManager; }
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { class GameFlowManager; }
namespace RPG::Client { class GamePhaseManager; }
namespace RPG::Client { class GamePlayLockManager; }
namespace RPG::Client { class GlobalConfigManager; }
namespace RPG::Client { class GyroManager; }
namespace RPG::Client { class IFixGlobalExtendMemberManager; }
namespace RPG::Client { class InControlActionsManager; }
namespace RPG::Client { class InputSettingKeyConflictManager; }
namespace RPG::Client { class LoadingManager; }
namespace RPG::Client { class LocalizationManager; }
namespace RPG::Client { class LuaSystem; }
namespace RPG::Client { class ModuleManager; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class NetworkManager; }
namespace RPG::Client { class PSManager; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PlayGoManager; }
namespace RPG::Client { class PreDownloadManager; }
namespace RPG::Client { class RPGSDKAccountManager; }
namespace RPG::Client { class RenderOptionsManager; }
namespace RPG::Client { class ResolutionController; }
namespace RPG::Client { class SettingManager; }
namespace RPG::Client { class SimulateSpeedController; }
namespace RPG::Client { class TextmapDownloadManager; }
namespace RPG::Client { class TimeManager; }
namespace RPG::Client { class TimerManager; }
namespace RPG::Client { class UIManager; }
namespace RPG::Client { class VietNam18DialogContext; }
namespace RPG::GameCore { class VersionData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Version; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GLOBALVARS_ASYNCINITENTERGAMESTEP_OFFSET UNITYSDK_OFFSET(0x1C708B00)
#define RPG_CLIENT_GLOBALVARS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C705970)
#define RPG_CLIENT_GLOBALVARS_CHECKPACKAGEREINSTALL_OFFSET UNITYSDK_OFFSET(0x1C705DA0)
#define RPG_CLIENT_GLOBALVARS_CLEARHIDEINTERACTIVEUIREASONS_OFFSET UNITYSDK_OFFSET(0x1C70BEF0)
#define RPG_CLIENT_GLOBALVARS_CLEAROLDINSTALLFILES_OFFSET UNITYSDK_OFFSET(0x1C70C100)
#define RPG_CLIENT_GLOBALVARS_GETINSTALLVERSION_OFFSET UNITYSDK_OFFSET(0x1C70CC50)
#define RPG_CLIENT_GLOBALVARS_GETLASTPACKAGEVERSION_OFFSET UNITYSDK_OFFSET(0x1C70CA80)
#define RPG_CLIENT_GLOBALVARS_GET_S_BASELINEMODE_OFFSET UNITYSDK_OFFSET(0x1C70D080)
#define RPG_CLIENT_GLOBALVARS_GET_S_BATTLECLIENTONLYRANDOM_OFFSET UNITYSDK_OFFSET(0x1C70D140)
#define RPG_CLIENT_GLOBALVARS_GET_S_FPSCOUNTER_OFFSET UNITYSDK_OFFSET(0x1C70CD80)
#define RPG_CLIENT_GLOBALVARS_GET_S_HIDEINTERACTIVEUI_OFFSET UNITYSDK_OFFSET(0x1C70BE70)
#define RPG_CLIENT_GLOBALVARS_GET_S_SIMULATIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1C70CDD0)
#define RPG_CLIENT_GLOBALVARS_GET_S_SIMULATIONSPEEDREAL_OFFSET UNITYSDK_OFFSET(0x1C70CFC0)
#define RPG_CLIENT_GLOBALVARS_GET_S_SIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0x1C70CE40)
#define RPG_CLIENT_GLOBALVARS_HIDEINTERACTIVEUI_OFFSET UNITYSDK_OFFSET(0x1C70BB90)
#define RPG_CLIENT_GLOBALVARS_INITBASEANDSTARTUPSTEP_OFFSET UNITYSDK_OFFSET(0x1C708B90)
#define RPG_CLIENT_GLOBALVARS_INITBASECONFIGSTEP_OFFSET UNITYSDK_OFFSET(0x1C705B20)
#define RPG_CLIENT_GLOBALVARS_INITCONFIGMANAGER_OFFSET UNITYSDK_OFFSET(0x1C7060E0)
#define RPG_CLIENT_GLOBALVARS_INITENTERGAMESTEP_OFFSET UNITYSDK_OFFSET(0x1C708450)
#define RPG_CLIENT_GLOBALVARS_INITMOTIONMANAGER_OFFSET UNITYSDK_OFFSET(0x1C70BAB0)
#define RPG_CLIENT_GLOBALVARS_INITSTARTUPSTEP_OFFSET UNITYSDK_OFFSET(0x1C7061D0)
#define RPG_CLIENT_GLOBALVARS_ISENTITYTICKLODCHECKRENDERERVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C70C040)
#define RPG_CLIENT_GLOBALVARS_ISENTITYTICKLODOPEN_OFFSET UNITYSDK_OFFSET(0x1C70BFB0)
#define RPG_CLIENT_GLOBALVARS_REMOVETMPINSTALLVERSION_OFFSET UNITYSDK_OFFSET(0x1C70C7B0)
#define RPG_CLIENT_GLOBALVARS_SAVEINSTALLVERSIONTMP_OFFSET UNITYSDK_OFFSET(0x1C70C750)
#define RPG_CLIENT_GLOBALVARS_SAVEINSTALLVERSION_OFFSET UNITYSDK_OFFSET(0x1C70C0A0)
#define RPG_CLIENT_GLOBALVARS_SET_S_BASELINEMODE_OFFSET UNITYSDK_OFFSET(0x1C70D0C0)
#define RPG_CLIENT_GLOBALVARS_SET_S_BATTLECLIENTONLYRANDOM_OFFSET UNITYSDK_OFFSET(0x1C70D180)
#define RPG_CLIENT_GLOBALVARS_SET_S_SIMULATIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1C70CE00)
#define RPG_CLIENT_GLOBALVARS_SHADERWARMUP_OFFSET UNITYSDK_OFFSET(0x1C708C00)
#define RPG_CLIENT_GLOBALVARS_TESTERMPTY_OFFSET UNITYSDK_OFFSET(0x1C705AE0)
#define RPG_CLIENT_GLOBALVARS_UNINITGLOBALVARS_OFFSET UNITYSDK_OFFSET(0x1C708E70)
#define RPG_CLIENT_GLOBALVARS__INITDICONTAINER_OFFSET UNITYSDK_OFFSET(0x1C7082F0)
#define RPG_CLIENT_GLOBALVARS__INITUNITYGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1C707BA0)
#define RPG_CLIENT_GLOBALVARS__RELEASEGLOBALRESOURCES_OFFSET UNITYSDK_OFFSET(0x1C708DC0)
#define RPG_CLIENT_GLOBALVARS__SAVEINSTALLVERSION_OFFSET UNITYSDK_OFFSET(0x1C70C2A0)
#define RPG_CLIENT_GLOBALVARS__SHOULDCLEARPERISISTENTDIR_OFFSET UNITYSDK_OFFSET(0x1C70C830)
#define RPG_CLIENT_GLOBALVARS__UNINITUNITYGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1C70BA70)

namespace RPG::Client
{
	inline static constexpr unsigned int GlobalVars_TypeDefinitionIndex = 62676;

	class GlobalVars : public ::System::Object
	{
	public:
		static ::RPG::Client::PSManager** StaticGet_s_PSManager()
		{
			return (::RPG::Client::PSManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x11B0);
		}

		static ::RPG::Client::LoadingManager** StaticGet_s_LoadingManager()
		{
			return (::RPG::Client::LoadingManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x11B8);
		}

		static ::RPG::Client::GameFlowManager** StaticGet_s_GameFlowManager()
		{
			return (::RPG::Client::GameFlowManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x11C0);
		}

		static ::CBCEIDBNIHC** StaticGet_s_ProfilerManager()
		{
			return (::CBCEIDBNIHC**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x11C8);
		}

		static ::RPG::Client::RPGSDKAccountManager** StaticGet_s_AccountManager()
		{
			return (::RPG::Client::RPGSDKAccountManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x11D0);
		}

		static ::OLGJAPMAPHL** StaticGet_s_DynamicOptimizeCenter()
		{
			return (::OLGJAPMAPHL**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x11D8);
		}

		static ::RPG::Client::PipelineCameraEngine** StaticGet_s_PipelineCamera()
		{
			return (::RPG::Client::PipelineCameraEngine**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x11E0);
		}

		static ::ODCPCHEIMKK** StaticGet_s_MotionManager()
		{
			return (::ODCPCHEIMKK**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x11E8);
		}

		static ::RPG::Client::SimulateSpeedController** StaticGet__s_SimulationController_k__BackingField()
		{
			return (::RPG::Client::SimulateSpeedController**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x11F0);
		}

		static ::UnityEngine::Transform** StaticGet_s_UIRoot()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x11F8);
		}

		static ::UnityEngine::Canvas** StaticGet_s_Canvas3D()
		{
			return (::UnityEngine::Canvas**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1200);
		}

		static ::PEINNEOBJDA** StaticGet_s_StackCameraManager()
		{
			return (::PEINNEOBJDA**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1208);
		}

		static ::RPG::Client::GamePhaseManager** StaticGet_s_GamePhaseManager()
		{
			return (::RPG::Client::GamePhaseManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1210);
		}

		static ::RPG::Client::TimerManager** StaticGet_s_TimerManager()
		{
			return (::RPG::Client::TimerManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1218);
		}

		static ::RPG::Client::IFixGlobalExtendMemberManager** StaticGet_s_IFixGlobalExtendMemberManager()
		{
			return (::RPG::Client::IFixGlobalExtendMemberManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1220);
		}

		static ::RPG::Client::ClientOnlyCommonConfig** StaticGet_s_ClientOnlyCommonConfig()
		{
			return (::RPG::Client::ClientOnlyCommonConfig**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1228);
		}

		static ::JIAJFGCHLJE** StaticGet_s_UI3DCameraOccluder()
		{
			return (::JIAJFGCHLJE**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1230);
		}

		static ::InControl::InControlInputModule** StaticGet_s_InControlInputModule()
		{
			return (::InControl::InControlInputModule**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1238);
		}

		static ::RPG::Client::PreDownloadManager** StaticGet_s_PreDownloadManager()
		{
			return (::RPG::Client::PreDownloadManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1240);
		}

		static ::RPG::Client::CameraManager** StaticGet_s_CameraManager()
		{
			return (::RPG::Client::CameraManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1248);
		}

		static ::RPG::Client::LuaSystem** StaticGet_s_LuaSystem()
		{
			return (::RPG::Client::LuaSystem**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1250);
		}

		static ::HBAJIJEAJDK** StaticGet_s_MaterialBlockEffectManager()
		{
			return (::HBAJIJEAJDK**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1258);
		}

		static ::RPG::Client::PlayGoManager** StaticGet_s_PlayGoManager()
		{
			return (::RPG::Client::PlayGoManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1260);
		}

		static ::RPG::Client::MonoEffectManager** StaticGet_s_MonoEffectManager()
		{
			return (::RPG::Client::MonoEffectManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1268);
		}

		static ::IDECOCBLLBC** StaticGet_s_ShaderWarmupManager()
		{
			return (::IDECOCBLLBC**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1270);
		}

		static ::RPG::Client::AssetMgr** StaticGet_s_AssetMgr()
		{
			return (::RPG::Client::AssetMgr**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1278);
		}

		static ::UnityEngine::Camera** StaticGet_s_UICamera()
		{
			return (::UnityEngine::Camera**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1280);
		}

		static ::UnityEngine::GameObject** StaticGet_s_WwiseInitializerGameObject()
		{
			return (::UnityEngine::GameObject**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1288);
		}

		static ::PDJCPAFHFIN** StaticGet_s_RdrMatCacheMgr()
		{
			return (::PDJCPAFHFIN**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1290);
		}

		static ::RPG::Client::LocalizationManager** StaticGet_s_LocalizationManager()
		{
			return (::RPG::Client::LocalizationManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1298);
		}

		static ::RPG::Client::VietNam18DialogContext** StaticGet_VietNam18DialogContext()
		{
			return (::RPG::Client::VietNam18DialogContext**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x12A0);
		}

		static ::LNCKJIOBNDO** StaticGet_s_EmotionLateUpdateManager()
		{
			return (::LNCKJIOBNDO**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x12A8);
		}

		static ::UnityEngine::Transform** StaticGet_s_BillboardRoot()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x12B0);
		}

		static ::FKFPKFPHBJO** StaticGet_s_VideoManager()
		{
			return (::FKFPKFPHBJO**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x12B8);
		}

		static ::KEDHGJIILLI** StaticGet_s_CharacterEffectManager()
		{
			return (::KEDHGJIILLI**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x12C0);
		}

		static ::NCEDGGKOMIH** StaticGet_s_TimelineManager()
		{
			return (::NCEDGGKOMIH**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x12C8);
		}

		static ::PFGDFMBOOLK** StaticGet_s_MaterialGroupCbManager()
		{
			return (::PFGDFMBOOLK**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x12D0);
		}

		static ::UnityEngine::Camera** StaticGet_s_UI3DCamera()
		{
			return (::UnityEngine::Camera**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x12D8);
		}

		static ::BEHEGJCEGIC** StaticGet_s_RogueManager()
		{
			return (::BEHEGJCEGIC**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x12E0);
		}

		static ::UnityEngine::Camera** StaticGet_s_MainCamera()
		{
			return (::UnityEngine::Camera**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x12E8);
		}

		static ::RPG::GameCore::VersionData** StaticGet_s_VersionData()
		{
			return (::RPG::GameCore::VersionData**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x12F0);
		}

		static ::IJOJFKGLIKA** StaticGet_s_AsyncProcessor()
		{
			return (::IJOJFKGLIKA**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x12F8);
		}

		static ::System::Collections::Generic::HashSet_1<::RPG::Client::HideInteractiveUIReason>** StaticGet__HideInteractiveUIReasons()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::Client::HideInteractiveUIReason>**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1300);
		}

		static ::RPG::Client::GamePlayLockManager** StaticGet_s_GamePlayLockManager()
		{
			return (::RPG::Client::GamePlayLockManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1308);
		}

		static ::BCAOJMKPGOI** StaticGet_s_CustomLateUpdateManager()
		{
			return (::BCAOJMKPGOI**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1310);
		}

		static ::NBIOOMEPCFJ** StaticGet_LongPressHintDialogContext()
		{
			return (::NBIOOMEPCFJ**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1318);
		}

		static ::EEKGPHOPONF** StaticGet_BetaHintDialogContext()
		{
			return (::EEKGPHOPONF**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1320);
		}

		static ::UnityEngine::Transform** StaticGet_s_CharacterCache()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1328);
		}

		static ::DAIHKPJPMCE** StaticGet_s_CRPCameraManager()
		{
			return (::DAIHKPJPMCE**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1330);
		}

		static ::RPG::Client::TextmapDownloadManager** StaticGet_s_TextDownloadManager()
		{
			return (::RPG::Client::TextmapDownloadManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1338);
		}

		static ::EFGKKPOMAEM** StaticGet_s_ThirdPartSDKManager()
		{
			return (::EFGKKPOMAEM**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1340);
		}

		static ::RPG::Client::EnvironmentSystem** StaticGet_s_EnvironmentSystem()
		{
			return (::RPG::Client::EnvironmentSystem**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1348);
		}

		static ::MKBBKAKCMCG** StaticGet_s_AttachPointManager()
		{
			return (::MKBBKAKCMCG**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1350);
		}

		static ::HGJGNMPOIKN** StaticGet_s_MultiplayerManager()
		{
			return (::HGJGNMPOIKN**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1358);
		}

		static ::RPG::Client::NetworkManager** StaticGet_s_NetworkManager()
		{
			return (::RPG::Client::NetworkManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1360);
		}

		static ::UnityEngine::GameObject** StaticGet_s_MainGameObject()
		{
			return (::UnityEngine::GameObject**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1368);
		}

		static ::HGDBKOHKGBI** StaticGet_s_Tween()
		{
			return (::HGDBKOHKGBI**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1370);
		}

		static ::RPG::Client::UIManager** StaticGet_s_UIManager()
		{
			return (::RPG::Client::UIManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1378);
		}

		static ::LBJLBMOOJGM** StaticGet_s_DiContainer()
		{
			return (::LBJLBMOOJGM**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1380);
		}

		static ::RPG::Client::TimeManager** StaticGet_s_TimeManager()
		{
			return (::RPG::Client::TimeManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1388);
		}

		static ::UnityEngine::GameObject** StaticGet_s_EventSystemGameObject()
		{
			return (::UnityEngine::GameObject**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1390);
		}

		static ::LFPJGOEOLNH** StaticGet_s_GoPoolMgr()
		{
			return (::LFPJGOEOLNH**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1398);
		}

		static ::RPG::Client::ResolutionController** StaticGet_s_ResolutionController()
		{
			return (::RPG::Client::ResolutionController**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x13A0);
		}

		static ::HFDGMMPMGIC** StaticGet_s_LuaHotfixManager()
		{
			return (::HFDGMMPMGIC**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x13A8);
		}

		static ::RPG::Client::EffectPluginManager** StaticGet_s_EffectPluginManager()
		{
			return (::RPG::Client::EffectPluginManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x13B0);
		}

		static ::FFPEBJDFJDN** StaticGet_s_ShaderPropertyTransitionManager()
		{
			return (::FFPEBJDFJDN**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x13B8);
		}

		static ::FCEAMALPJPH** StaticGet_s_GamePlayAssetLoader()
		{
			return (::FCEAMALPJPH**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x13C0);
		}

		static ::RPG::Client::DialogueManager** StaticGet_s_DialogueManager()
		{
			return (::RPG::Client::DialogueManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x13C8);
		}

		static ::NDEBPOONLKC** StaticGet_s_CloudSupporter()
		{
			return (::NDEBPOONLKC**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x13D0);
		}

		static ::BCFPJDNFAFO** StaticGet_s_RuntimeAtlasManager()
		{
			return (::BCFPJDNFAFO**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x13D8);
		}

		static ::RPG::Client::RenderOptionsManager** StaticGet_s_RenderOptionsManager()
		{
			return (::RPG::Client::RenderOptionsManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x13E0);
		}

		static ::KHCGCOFBMDC** StaticGet_s_VirtualServerManager()
		{
			return (::KHCGCOFBMDC**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x13E8);
		}

		static ::DEEOAMEMOFD** StaticGet_s_EntityTickLodManager()
		{
			return (::DEEOAMEMOFD**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x13F0);
		}

		static ::CHIOEBDCOAA** StaticGet_s_TAMonoTickManager()
		{
			return (::CHIOEBDCOAA**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x13F8);
		}

		static ::RPG::Client::InControlActionsManager** StaticGet_s_InControlActionsManager()
		{
			return (::RPG::Client::InControlActionsManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1400);
		}

		static ::RPG::Client::GyroManager** StaticGet_s_GyroManager()
		{
			return (::RPG::Client::GyroManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1408);
		}

		static ::OAMEEKBFMHL** StaticGet_s_IFixPatchManager()
		{
			return (::OAMEEKBFMHL**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1410);
		}

		static ::RPG::Client::InputSettingKeyConflictManager** StaticGet_s_InputSettingKeyConflictManager()
		{
			return (::RPG::Client::InputSettingKeyConflictManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1418);
		}

		static ::RPG::Client::GlobalConfigManager** StaticGet_s_ConfigManager()
		{
			return (::RPG::Client::GlobalConfigManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1420);
		}

		static ::JIAJFGCHLJE** StaticGet_s_MainCameraOccluder()
		{
			return (::JIAJFGCHLJE**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1428);
		}

		static ::DHFGHIEPFIF** StaticGet_s_PhaseModeManager()
		{
			return (::DHFGHIEPFIF**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1430);
		}

		static ::RPG::Client::SettingManager** StaticGet_s_SettingManager()
		{
			return (::RPG::Client::SettingManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1438);
		}

		static ::UnityEngine::Canvas** StaticGet_s_PageCanvas()
		{
			return (::UnityEngine::Canvas**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1440);
		}

		static ::UnityEngine::Transform** StaticGet_s_UI3DRoot()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1448);
		}

		static ::RPG::Client::ModuleManager** StaticGet_s_ModuleManager()
		{
			return (::RPG::Client::ModuleManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1450);
		}

		static ::UnityEngine::Transform** StaticGet_s_UICache()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1458);
		}

		static ::FFFOAONFDMJ** StaticGet_s_ThreadSchedulerManager()
		{
			return (::FFFOAONFDMJ**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1460);
		}

		static ::KGGIOGDDHGH** StaticGet_DebugInfoWidgetContext()
		{
			return (::KGGIOGDDHGH**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1468);
		}

		static ::UnityEngine::GameObject** StaticGet_s_EasytouchGameObject()
		{
			return (::UnityEngine::GameObject**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1470);
		}

		static ::AMJCOOEKGEN** StaticGet_s_FollowPointMappingManager()
		{
			return (::AMJCOOEKGEN**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1478);
		}

		static ::RPG::Client::AudioManager** StaticGet_s_AudioManager()
		{
			return (::RPG::Client::AudioManager**)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x1480);
		}

		static ::System::Boolean* StaticGet_s_OpenEntityTickLodCheckRendererVisible()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x710);
		}

		static ::System::Boolean* StaticGet_s_Inited()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x711);
		}

		static ::System::Boolean* StaticGet_s_OpenEntityTickLod()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x712);
		}

		static ::System::Boolean* StaticGet_s_UseLogicFrame()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x713);
		}

		static ::System::Single* StaticGet_s_FirstUIDisplayedTimestamp()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x714);
		}

		static ::System::Single* StaticGet_s_LogicFrameInterval()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x718);
		}

		static ::System::Int32* StaticGet__DebugRandomCounter()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x71C);
		}

		static ::System::Int32* StaticGet_s_LogicFrameRate()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x720);
		}

		static ::System::Single* StaticGet_s_LogoUIDisplayedTimestamp()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x724);
		}

		static ::System::Int32* StaticGet_s_CustomUpdatePreloadTimeMs()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x728);
		}

		static ::System::Boolean* StaticGet_s_OpenEntityTickLodByGM()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x72C);
		}

		static ::System::Boolean* StaticGet_s_OpenEntityTickBalance()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x72D);
		}

		static ::System::Boolean* StaticGet__s_BattleClientOnlyRandom_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x72E);
		}

		static ::System::Boolean* StaticGet__BaselineMode()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x72F);
		}

		static ::RPG::Client::StartUpReasonType* StaticGet_StartUpReasonType()
		{
			return (::RPG::Client::StartUpReasonType*)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x730);
		}

		static ::System::Boolean* StaticGet_s_ShowLevelSelectUI()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x734);
		}

		static ::System::Boolean* StaticGet_s_UseMapRotation()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x735);
		}

		static ::System::Boolean* StaticGet_s_ReinstallPackage()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "GlobalVars")->GetStaticField(0x736);
		}

		// static const ::System::String* installVersionFileName; // 0x0
		// static const ::System::String* installVersionTmpFileName; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_CCTOR_OFFSET))();
		}

		static ::System::Void TestERmpty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_TESTERMPTY_OFFSET))();
		}

		static ::System::Void InitBaseConfigStep()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_INITBASECONFIGSTEP_OFFSET))();
		}

		static ::System::Void InitConfigManager()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_INITCONFIGMANAGER_OFFSET))();
		}

		static ::System::Void InitStartupStep()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_INITSTARTUPSTEP_OFFSET))();
		}

		static ::System::Void InitEnterGameStep(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_INITENTERGAMESTEP_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* AsyncInitEnterGameStep(::System::Action* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_ASYNCINITENTERGAMESTEP_OFFSET))(a1);
		}

		static ::System::Void InitBaseAndStartupStep()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_INITBASEANDSTARTUPSTEP_OFFSET))();
		}

		static ::System::Void ShaderWarmup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_SHADERWARMUP_OFFSET))();
		}

		static ::System::Void _ReleaseGlobalResources()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS__RELEASEGLOBALRESOURCES_OFFSET))();
		}

		static ::System::Void UninitGlobalVars(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_UNINITGLOBALVARS_OFFSET))(a1);
		}

		static ::System::Void InitMotionManager()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_INITMOTIONMANAGER_OFFSET))();
		}

		static ::System::Void HideInteractiveUI(::System::Boolean a1, ::RPG::Client::HideInteractiveUIReason a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::RPG::Client::HideInteractiveUIReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_HIDEINTERACTIVEUI_OFFSET))(a1, a2);
		}

		static ::System::Void ClearHideInteractiveUIReasons()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_CLEARHIDEINTERACTIVEUIREASONS_OFFSET))();
		}

		static ::System::Boolean IsEntityTickLodOpen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_ISENTITYTICKLODOPEN_OFFSET))();
		}

		static ::System::Boolean IsEntityTickLodCheckRendererVisible()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_ISENTITYTICKLODCHECKRENDERERVISIBLE_OFFSET))();
		}

		static ::System::Void _InitUnityGameObject()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS__INITUNITYGAMEOBJECT_OFFSET))();
		}

		static ::System::Void _UnInitUnityGameObject(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS__UNINITUNITYGAMEOBJECT_OFFSET))(a1);
		}

		static ::System::Void CheckPackageReinstall()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_CHECKPACKAGEREINSTALL_OFFSET))();
		}

		static ::System::String* SaveInstallVersion(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_SAVEINSTALLVERSION_OFFSET))(a1);
		}

		static ::System::String* SaveInstallVersionTmp(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_SAVEINSTALLVERSIONTMP_OFFSET))(a1);
		}

		static ::System::String* _SaveInstallVersion(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS__SAVEINSTALLVERSION_OFFSET))(a1, a2);
		}

		static ::System::Void RemoveTmpInstallVersion(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_REMOVETMPINSTALLVERSION_OFFSET))(a1);
		}

		static ::System::Boolean _ShouldClearPerisistentDir()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS__SHOULDCLEARPERISISTENTDIR_OFFSET))();
		}

		static ::System::Void ClearOldInstallFiles()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_CLEAROLDINSTALLFILES_OFFSET))();
		}

		static ::System::Version* GetLastPackageVersion()
		{
			return ((::System::Version*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_GETLASTPACKAGEVERSION_OFFSET))();
		}

		static ::System::String* GetInstallVersion()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_GETINSTALLVERSION_OFFSET))();
		}

		static ::System::Void _InitDiContainer(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS__INITDICONTAINER_OFFSET))(a1);
		}

		static ::DNLGHEHJOCC* get_s_FpsCounter()
		{
			return ((::DNLGHEHJOCC*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_GET_S_FPSCOUNTER_OFFSET))();
		}

		static ::RPG::Client::SimulateSpeedController* get_s_SimulationController()
		{
			return ((::RPG::Client::SimulateSpeedController*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_GET_S_SIMULATIONCONTROLLER_OFFSET))();
		}

		static ::System::Void set_s_SimulationController(::RPG::Client::SimulateSpeedController* a1)
		{
			return ((::System::Void(*)(::RPG::Client::SimulateSpeedController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_SET_S_SIMULATIONCONTROLLER_OFFSET))(a1);
		}

		static ::System::Single get_s_SimulationSpeed()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_GET_S_SIMULATIONSPEED_OFFSET))();
		}

		static ::System::Single get_s_SimulationSpeedReal()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_GET_S_SIMULATIONSPEEDREAL_OFFSET))();
		}

		static ::System::Boolean get_s_HideInteractiveUI()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_GET_S_HIDEINTERACTIVEUI_OFFSET))();
		}

		static ::System::Boolean get_s_BaselineMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_GET_S_BASELINEMODE_OFFSET))();
		}

		static ::System::Void set_s_BaselineMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_SET_S_BASELINEMODE_OFFSET))(a1);
		}

		static ::System::Boolean get_s_BattleClientOnlyRandom()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_GET_S_BATTLECLIENTONLYRANDOM_OFFSET))();
		}

		static ::System::Void set_s_BattleClientOnlyRandom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_SET_S_BATTLECLIENTONLYRANDOM_OFFSET))(a1);
		}

	};
}
