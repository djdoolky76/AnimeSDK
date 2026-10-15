#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EnumEnterPerformanceResult.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GMEFBLGIECD.h"
#include "unitysdk/System/Guid.h"
class ANECGBMKMBC;
class ANHMHFHBAAH;
class DGDCNMMBMKA;
class EDCLCCGGLBI;
class EDPHMDDGGGL;
class EEFGGFIGMCK;
class FIFFPFPIEDN;
class FOBHMADMEDF;
class GELIALJDFBL;
class GPLMEFBGGGM;
class HEGNCFJPJJI;
class HIIFJAIAHJN;
class HNIJBNICJFI;
class IDMANGCKPFO;
class IKKJJHHENJB;
class IKLIHOEDGBE;
class KCOAIPGGMGJ;
class LPDICFCDFCF;
class LPJDKKLHKCF;
class MFFGCMFIFNA;
class NIMAGPGFJFF;
class OBAPBPBNNHP;
class PHBPBBJDFIH;
class PONPHFBLNEA;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class CutsceneCacheInitParams; }
namespace RPG::Client { class DebateManager; }
namespace RPG::Client::Billboard { class BillboardNotifyParam; }
namespace RPG::GameCore { class CreateCharacter; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelPerformanceInitialize; }
namespace RPG::GameCore { class PerformanceBgImagePanelContainerConfig; }
namespace RPG::GameCore { class PerformanceCommonConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPerformance; }
namespace System { class Action; }
namespace System { class IDisposable; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PERFORMANCEMANAGER_ADDPERFORMANCEBYINITIALIZETASK_OFFSET UNITYSDK_OFFSET(0xDA9F5A0)
#define RPG_CLIENT_PERFORMANCEMANAGER_ADDPERFORMANCEBYTRIGGERTASK_OFFSET UNITYSDK_OFFSET(0xDA9EFA0)
#define RPG_CLIENT_PERFORMANCEMANAGER_ADDTIMELINEID_OFFSET UNITYSDK_OFFSET(0xDAA0830)
#define RPG_CLIENT_PERFORMANCEMANAGER_BLOCKPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xDA9FDB0)
#define RPG_CLIENT_PERFORMANCEMANAGER_CACHEDATA_OFFSET UNITYSDK_OFFSET(0xDA9E180)
#define RPG_CLIENT_PERFORMANCEMANAGER_CACHENEWPERFORMANCESKIP_OFFSET UNITYSDK_OFFSET(0xDA9C430)
#define RPG_CLIENT_PERFORMANCEMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0xDAA2490)
#define RPG_CLIENT_PERFORMANCEMANAGER_CHECKINPERFORMANCESHOWUI_OFFSET UNITYSDK_OFFSET(0xDA9E090)
#define RPG_CLIENT_PERFORMANCEMANAGER_CLEARSPECIALVISIONONEND_OFFSET UNITYSDK_OFFSET(0xDAA11A0)
#define RPG_CLIENT_PERFORMANCEMANAGER_CLEARSPECIALVISIONONSTART_OFFSET UNITYSDK_OFFSET(0xDAA1110)
#define RPG_CLIENT_PERFORMANCEMANAGER_CLOSESPECIALVISION_OFFSET UNITYSDK_OFFSET(0xDAA1080)
#define RPG_CLIENT_PERFORMANCEMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xDA9BA50)
#define RPG_CLIENT_PERFORMANCEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA9CA40)
#define RPG_CLIENT_PERFORMANCEMANAGER_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xDA9E030)
#define RPG_CLIENT_PERFORMANCEMANAGER_ENTERGACHA_OFFSET UNITYSDK_OFFSET(0xDA9FE20)
#define RPG_CLIENT_PERFORMANCEMANAGER_ENTERPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xDA9E500)
#define RPG_CLIENT_PERFORMANCEMANAGER_EXITGACHA_OFFSET UNITYSDK_OFFSET(0xDA9FE70)
#define RPG_CLIENT_PERFORMANCEMANAGER_EXITPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xDA9EA90)
#define RPG_CLIENT_PERFORMANCEMANAGER_FINDCREATECHARACTERBYUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xDAA23E0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETBUBBLENOTIFYPARAM_OFFSET UNITYSDK_OFFSET(0xDAA1340)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETCHARACTERSTORYLIGHTMANAGER_OFFSET UNITYSDK_OFFSET(0xDAA0380)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETCONVINCEMANAGER_OFFSET UNITYSDK_OFFSET(0xDAA0340)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETDEBATEMANAGER_OFFSET UNITYSDK_OFFSET(0xDAA02F0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETPAGETRANSITIONSYSTEM_OFFSET UNITYSDK_OFFSET(0xDAA0250)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCEADVENTITYVISIBLEMANAGER_OFFSET UNITYSDK_OFFSET(0xDAA01B0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCECAMERAMANAGER_OFFSET UNITYSDK_OFFSET(0xDA9FFB0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCECOLORGRADINGMASKMANAGER_OFFSET UNITYSDK_OFFSET(0xDAA00D0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCECRPCAMERAMANAGER_OFFSET UNITYSDK_OFFSET(0xDA9FFF0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCEEFFECTMANAGER_OFFSET UNITYSDK_OFFSET(0xDA9FF70)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCELOADER_OFFSET UNITYSDK_OFFSET(0xDAA0420)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCENULLREGIONMANAGER_OFFSET UNITYSDK_OFFSET(0xDAA0080)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCESHADOWMANAGER_OFFSET UNITYSDK_OFFSET(0xDAA0120)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCESHIFTMANAGER_OFFSET UNITYSDK_OFFSET(0xDAA03D0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCESTENCILMANAGER_OFFSET UNITYSDK_OFFSET(0xDAA0160)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCESTREAMINGMANAGER_OFFSET UNITYSDK_OFFSET(0xDAA0030)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETSKIPPACKMANAGER_OFFSET UNITYSDK_OFFSET(0xDAA0200)
#define RPG_CLIENT_PERFORMANCEMANAGER_GETSTORYPLAYERSWITCHER_OFFSET UNITYSDK_OFFSET(0xDAA02A0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_BGIMAGEPANELCONTAINERCONFIG_OFFSET UNITYSDK_OFFSET(0xDAA1F50)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xDAA1F30)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEGUID_OFFSET UNITYSDK_OFFSET(0xDAA2370)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEHASENDBLACKTEXT_OFFSET UNITYSDK_OFFSET(0xDAA21B0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEHASENDBLACK_OFFSET UNITYSDK_OFFSET(0xDAA2150)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEHASENDCRACK_OFFSET UNITYSDK_OFFSET(0xDAA2210)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEID_OFFSET UNITYSDK_OFFSET(0xDAA1FF0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEISCHANGEPLAYER_OFFSET UNITYSDK_OFFSET(0xDAA2070)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEOWNERGROUPID_OFFSET UNITYSDK_OFFSET(0xDAA2270)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCERESULTVALUE_OFFSET UNITYSDK_OFFSET(0xDAA20F0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCETYPE_OFFSET UNITYSDK_OFFSET(0xDAA0C30)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_HASWAITINGINSTANCE_OFFSET UNITYSDK_OFFSET(0xDAA1F90)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_ISCURRENT_C_DS_OFFSET UNITYSDK_OFFSET(0xDAA22D0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_ISINGACHA_OFFSET UNITYSDK_OFFSET(0xDAA1F10)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_ISINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xDAA1EF0)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_ISWAITINGCLEARAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0xDAA1F70)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_NEWPERFORMANCESKIP_OFFSET UNITYSDK_OFFSET(0xDAA2450)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_NEWSKIPEXCLUDEIDS_OFFSET UNITYSDK_OFFSET(0xDAA2470)
#define RPG_CLIENT_PERFORMANCEMANAGER_GET_RESERVEPARAMETERSCONFIG_OFFSET UNITYSDK_OFFSET(0xDAA1ED0)
#define RPG_CLIENT_PERFORMANCEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xDA9DE90)
#define RPG_CLIENT_PERFORMANCEMANAGER_MUTESTAGEPROPFORSTORY_OFFSET UNITYSDK_OFFSET(0xDAA04D0)
#define RPG_CLIENT_PERFORMANCEMANAGER_NEEDSHOWTALKUI_OFFSET UNITYSDK_OFFSET(0xDA9E130)
#define RPG_CLIENT_PERFORMANCEMANAGER_ONPLAYSIMPLETALKBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xDAA0690)
#define RPG_CLIENT_PERFORMANCEMANAGER_ON_PERFORMANCETIMESCALELOCKTARGET_LOCK_OFFSET UNITYSDK_OFFSET(0xDAA0900)
#define RPG_CLIENT_PERFORMANCEMANAGER_ON_PERFORMANCETIMESCALELOCKTARGET_UNLOCK_OFFSET UNITYSDK_OFFSET(0xDAA0CB0)
#define RPG_CLIENT_PERFORMANCEMANAGER_OPENSPECIALVISION_OFFSET UNITYSDK_OFFSET(0xDAA0F10)
#define RPG_CLIENT_PERFORMANCEMANAGER_POSTAUDIOINCURRENTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xDAA0470)
#define RPG_CLIENT_PERFORMANCEMANAGER_PRELOADCUTSCENE_OFFSET UNITYSDK_OFFSET(0xDAA0560)
#define RPG_CLIENT_PERFORMANCEMANAGER_RELEASECUTSCENEPRELOAD_OFFSET UNITYSDK_OFFSET(0xDAA0620)
#define RPG_CLIENT_PERFORMANCEMANAGER_REMOVEINSTANCE_OFFSET UNITYSDK_OFFSET(0xDA9F9D0)
#define RPG_CLIENT_PERFORMANCEMANAGER_REMOVETIMELINEID_OFFSET UNITYSDK_OFFSET(0xDAA08A0)
#define RPG_CLIENT_PERFORMANCEMANAGER_SETSIMPLETALKTARGETBEHAVIORMANAGERENABLE_OFFSET UNITYSDK_OFFSET(0xDA9FEE0)
#define RPG_CLIENT_PERFORMANCEMANAGER_SET_BGIMAGEPANELCONTAINERCONFIG_OFFSET UNITYSDK_OFFSET(0xDAA1F60)
#define RPG_CLIENT_PERFORMANCEMANAGER_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xDAA1F40)
#define RPG_CLIENT_PERFORMANCEMANAGER_SET_ISINGACHA_OFFSET UNITYSDK_OFFSET(0xDAA1F20)
#define RPG_CLIENT_PERFORMANCEMANAGER_SET_ISINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xDAA1F00)
#define RPG_CLIENT_PERFORMANCEMANAGER_SET_ISWAITINGCLEARAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0xDAA1F80)
#define RPG_CLIENT_PERFORMANCEMANAGER_SET_NEWPERFORMANCESKIP_OFFSET UNITYSDK_OFFSET(0xDAA2460)
#define RPG_CLIENT_PERFORMANCEMANAGER_SET_NEWSKIPEXCLUDEIDS_OFFSET UNITYSDK_OFFSET(0xDAA2480)
#define RPG_CLIENT_PERFORMANCEMANAGER_SET_RESERVEPARAMETERSCONFIG_OFFSET UNITYSDK_OFFSET(0xDAA1EE0)
#define RPG_CLIENT_PERFORMANCEMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xDA9D830)
#define RPG_CLIENT_PERFORMANCEMANAGER_USENEWSKIP_OFFSET UNITYSDK_OFFSET(0xDAA12D0)
#define RPG_CLIENT_PERFORMANCEMANAGER__DISPOSEPAUSETOAST_OFFSET UNITYSDK_OFFSET(0xDA9D6D0)
#define RPG_CLIENT_PERFORMANCEMANAGER__GETCURRENTTIMELINETIME_OFFSET UNITYSDK_OFFSET(0xDAA06E0)
#define RPG_CLIENT_PERFORMANCEMANAGER__LOADCONFIG_OFFSET UNITYSDK_OFFSET(0xDA9C930)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0xDAA1750)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYHIDEALLDSACTORSEXCEPTINLIST_OFFSET UNITYSDK_OFFSET(0xDAA17B0)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYOVERRIDEENDTRANSFERCOLOR_OFFSET UNITYSDK_OFFSET(0xDAA1AB0)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYOVERRIDEENDTRANSFERTYPE_OFFSET UNITYSDK_OFFSET(0xDAA1B10)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYOVERRIDEPERFORMANCEENDCRACK_OFFSET UNITYSDK_OFFSET(0xDAA1990)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYOVERRIDEPERFORMANCEENDCUSTOMSRCTRF_OFFSET UNITYSDK_OFFSET(0xDAA1A50)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYOVERRIDEPERFORMANCEENDSCREENCUT_OFFSET UNITYSDK_OFFSET(0xDAA19F0)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYPERFORMANCEACTORSFOLLOWPLATFORMMOVE_OFFSET UNITYSDK_OFFSET(0xDAA1870)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYPERFORMANCEDYNAMICLOADCHARACTER_OFFSET UNITYSDK_OFFSET(0xDAA1810)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYPLAYERTRANSFERTOFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xDAA1C90)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYPLAYSCREENTRANSFERFINISH_OFFSET UNITYSDK_OFFSET(0xDAA1BD0)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYSCREENTRANSFERTEXTDISABLE_OFFSET UNITYSDK_OFFSET(0xDAA1C30)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYSETPERFORMANCEENDTEXT_OFFSET UNITYSDK_OFFSET(0xDAA1930)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYSETPERFORMANCEEXTENDENDBLACK_OFFSET UNITYSDK_OFFSET(0xDAA18D0)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYSETPERFORMANCERESULT_OFFSET UNITYSDK_OFFSET(0xDAA1B70)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYSHOWTALKUIFINISH_OFFSET UNITYSDK_OFFSET(0xDAA1610)
#define RPG_CLIENT_PERFORMANCEMANAGER__ONPRELOADCUTSCENE_OFFSET UNITYSDK_OFFSET(0xDAA1580)
#define RPG_CLIENT_PERFORMANCEMANAGER__PAUSETOAST_OFFSET UNITYSDK_OFFSET(0xDA9E800)
#define RPG_CLIENT_PERFORMANCEMANAGER__PERFORMANCESTATEEND_OFFSET UNITYSDK_OFFSET(0xDA9EDB0)
#define RPG_CLIENT_PERFORMANCEMANAGER__PERFORMANCESTATESTART_OFFSET UNITYSDK_OFFSET(0xDA9E950)
#define RPG_CLIENT_PERFORMANCEMANAGER__REGIST_OFFSET UNITYSDK_OFFSET(0xDA9C4A0)
#define RPG_CLIENT_PERFORMANCEMANAGER__RESETTIMELINEID_OFFSET UNITYSDK_OFFSET(0xDA9E9F0)
#define RPG_CLIENT_PERFORMANCEMANAGER__SENDNOTIFYTOINSTANCE_OFFSET UNITYSDK_OFFSET(0xDAA1670)
#define RPG_CLIENT_PERFORMANCEMANAGER__SENDPAUSETOAST_OFFSET UNITYSDK_OFFSET(0xDAA1E30)
#define RPG_CLIENT_PERFORMANCEMANAGER__SETCOLLISIONANDDITHERENABLE_OFFSET UNITYSDK_OFFSET(0xDA9E720)
#define RPG_CLIENT_PERFORMANCEMANAGER__STOPPLAYINGTIMELINE_OFFSET UNITYSDK_OFFSET(0xDA9EE50)
#define RPG_CLIENT_PERFORMANCEMANAGER__TICKCACHENEWPERFORMANCESKIP_OFFSET UNITYSDK_OFFSET(0xDA9DB30)
#define RPG_CLIENT_PERFORMANCEMANAGER__TICKCURRENTINSTANCE_OFFSET UNITYSDK_OFFSET(0xDAA1CF0)
#define RPG_CLIENT_PERFORMANCEMANAGER__TICKINSTANCES_OFFSET UNITYSDK_OFFSET(0xDA9DCE0)
#define RPG_CLIENT_PERFORMANCEMANAGER__TICKNOWAITINSTANCE_OFFSET UNITYSDK_OFFSET(0xDAA1D70)
#define RPG_CLIENT_PERFORMANCEMANAGER__TICKPAUSETOAST_OFFSET UNITYSDK_OFFSET(0xDA9DD90)
#define RPG_CLIENT_PERFORMANCEMANAGER__TICKWAITINGINSTANCES_OFFSET UNITYSDK_OFFSET(0xDA9F180)
#define RPG_CLIENT_PERFORMANCEMANAGER__UNREGIST_OFFSET UNITYSDK_OFFSET(0xDA9D240)

namespace RPG::Client
{
	inline static constexpr unsigned int PerformanceManager_TypeDefinitionIndex = 60730;

	class PerformanceManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* _PlayingTimelineID; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _NewSkipExcludeIds_k__BackingField; // 0x18
		::RPG::Client::AdventurePhase* _adventurePhase; // 0x20
		::HNIJBNICJFI* _ShadowManager; // 0x28
		::System::Collections::Generic::List_1<::EDPHMDDGGGL*>* _NoWaitInstances; // 0x30
		::MFFGCMFIFNA* _CRPCameraManager; // 0x38
		::RPG::Client::Billboard::BillboardNotifyParam* _BubbleNotifyParam; // 0x40
		::RPG::GameCore::PerformanceCommonConfig* _Config_k__BackingField; // 0x48
		::RPG::GameCore::PerformanceBgImagePanelContainerConfig* _BgImagePanelContainerConfig_k__BackingField; // 0x50
		::DGDCNMMBMKA* _EffectManager; // 0x58
		::KCOAIPGGMGJ* _ConvinceManager; // 0x60
		::PHBPBBJDFIH* _CameraManager; // 0x68
		::LPJDKKLHKCF* _EnterChecker; // 0x70
		::HEGNCFJPJJI* _TargetBehaviorManager; // 0x78
		::EDPHMDDGGGL* _CurrentInstance; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::IDisposable*>* _runtimeCaches; // 0x88
		::ANHMHFHBAAH* _ReserveParametersConfig_k__BackingField; // 0x90
		::IKLIHOEDGBE* _ColorGradingMaskManager; // 0x98
		::ANECGBMKMBC* _SkipPackManager; // 0xA0
		::PONPHFBLNEA* _SpecialVisionEffect; // 0xA8
		::LPDICFCDFCF* _StreamingManager; // 0xB0
		::FIFFPFPIEDN* _PerformanceLoader; // 0xB8
		::EEFGGFIGMCK* _CharacterStoryLightManager; // 0xC0
		::IDMANGCKPFO* _NullRegionManager; // 0xC8
		::FOBHMADMEDF* _PageTransitionSystem; // 0xD0
		::RPG::Client::DebateManager* _DebateManager; // 0xD8
		::GPLMEFBGGGM* _StoryPlayerSwitcher; // 0xE0
		::Il2CppArray<::System::String*>* PERFORMANCE_IGNORE_PAGE_NAMES; // 0xE8
		::IKKJJHHENJB* _StencilManager; // 0xF0
		::OBAPBPBNNHP* _ShiftManager; // 0xF8
		::EDCLCCGGLBI* _AdvEntityVisibleManager; // 0x100
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _CacheNewSkipExcludeIds; // 0x108
		::System::Collections::Generic::List_1<::EDPHMDDGGGL*>* _WaitingInstances; // 0x110
		::System::Double _PlaySimpleTalkStartTime; // 0x118
		::System::Int32 _CacheCmdWaitTick; // 0x120
		::System::Boolean _IsWaitingClearAudioState_k__BackingField; // 0x124
		::System::Nullable_1<::System::Boolean> _CacheNewPerformanceSkip; // 0x125
		::System::Boolean _NewPerformanceSkip_k__BackingField; // 0x127
		::System::Int32 _CurrentTimelineID; // 0x128
		::System::Boolean _IsPauseLock; // 0x12C
		::System::Boolean _IsInGacha_k__BackingField; // 0x12D
		::System::Nullable_1<::System::Boolean> _CacheCmdPauseToast; // 0x12E
		::System::Boolean _IsInPerformance_k__BackingField; // 0x130
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ELevelPerformanceType _PauseLockPerformanceType; // 0x134
		static ::System::String** StaticGet_PERFORMANCE_PAGE_NAME()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "PerformanceManager")->GetStaticField(0x13830);
		}

		static ::System::Boolean* StaticGet__HasInitPrefs()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "PerformanceManager")->GetStaticField(0x4440);
		}

		::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void CheckInPerformanceShowUI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_CHECKINPERFORMANCESHOWUI_OFFSET))(this, a1);
		}

		::System::Boolean NeedShowTalkUI(::RPG::GameCore::ELevelPerformanceType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_NEEDSHOWTALKUI_OFFSET))(this, a1);
		}

		::System::Void CacheData(::NIMAGPGFJFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIMAGPGFJFF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_CACHEDATA_OFFSET))(this, a1);
		}

		::System::Void EnterPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_ENTERPERFORMANCE_OFFSET))(this);
		}

		::System::Void ExitPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_EXITPERFORMANCE_OFFSET))(this);
		}

		::System::Void _PerformanceStateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__PERFORMANCESTATESTART_OFFSET))(this);
		}

		::System::Void _PerformanceStateEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__PERFORMANCESTATEEND_OFFSET))(this);
		}

		::System::Guid AddPerformanceByTriggerTask(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPerformance* a2, ::System::Action_1<::GMEFBLGIECD>* a3, ::System::Action* a4, ::GELIALJDFBL* a5)
		{
			return ((::System::Guid(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPerformance*, ::System::Action_1<::GMEFBLGIECD>*, ::System::Action*, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_ADDPERFORMANCEBYTRIGGERTASK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Guid AddPerformanceByInitializeTask(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LevelPerformanceInitialize* a2, ::System::Action_1<::System::Boolean>* a3)
		{
			return ((::System::Guid(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LevelPerformanceInitialize*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_ADDPERFORMANCEBYINITIALIZETASK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveInstance(::System::Guid a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_REMOVEINSTANCE_OFFSET))(this, a1, a2);
		}

		::System::Void BlockPerformance(::RPG::Client::EnumEnterPerformanceResult a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EnumEnterPerformanceResult, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_BLOCKPERFORMANCE_OFFSET))(this, a1, a2);
		}

		::System::Void EnterGacha()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_ENTERGACHA_OFFSET))(this);
		}

		::System::Void ExitGacha()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_EXITGACHA_OFFSET))(this);
		}

		::System::Void SetSimpleTalkTargetBehaviorManagerEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_SETSIMPLETALKTARGETBEHAVIORMANAGERENABLE_OFFSET))(this, a1);
		}

		::DGDCNMMBMKA* GetPerformanceEffectManager()
		{
			return ((::DGDCNMMBMKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCEEFFECTMANAGER_OFFSET))(this);
		}

		::PHBPBBJDFIH* GetPerformanceCameraManager()
		{
			return ((::PHBPBBJDFIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCECAMERAMANAGER_OFFSET))(this);
		}

		::MFFGCMFIFNA* GetPerformanceCRPCameraManager()
		{
			return ((::MFFGCMFIFNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCECRPCAMERAMANAGER_OFFSET))(this);
		}

		::LPDICFCDFCF* GetPerformanceStreamingManager()
		{
			return ((::LPDICFCDFCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCESTREAMINGMANAGER_OFFSET))(this);
		}

		::IDMANGCKPFO* GetPerformanceNullRegionManager()
		{
			return ((::IDMANGCKPFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCENULLREGIONMANAGER_OFFSET))(this);
		}

		::IKLIHOEDGBE* GetPerformanceColorGradingMaskManager()
		{
			return ((::IKLIHOEDGBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCECOLORGRADINGMASKMANAGER_OFFSET))(this);
		}

		::HNIJBNICJFI* GetPerformanceShadowManager()
		{
			return ((::HNIJBNICJFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCESHADOWMANAGER_OFFSET))(this);
		}

		::IKKJJHHENJB* GetPerformanceStencilManager()
		{
			return ((::IKKJJHHENJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCESTENCILMANAGER_OFFSET))(this);
		}

		::EDCLCCGGLBI* GetPerformanceAdvEntityVisibleManager()
		{
			return ((::EDCLCCGGLBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCEADVENTITYVISIBLEMANAGER_OFFSET))(this);
		}

		::ANECGBMKMBC* GetSkipPackManager()
		{
			return ((::ANECGBMKMBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETSKIPPACKMANAGER_OFFSET))(this);
		}

		::FOBHMADMEDF* GetPageTransitionSystem()
		{
			return ((::FOBHMADMEDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETPAGETRANSITIONSYSTEM_OFFSET))(this);
		}

		::GPLMEFBGGGM* GetStoryPlayerSwitcher()
		{
			return ((::GPLMEFBGGGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETSTORYPLAYERSWITCHER_OFFSET))(this);
		}

		::RPG::Client::DebateManager* GetDebateManager()
		{
			return ((::RPG::Client::DebateManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETDEBATEMANAGER_OFFSET))(this);
		}

		::KCOAIPGGMGJ* GetConvinceManager()
		{
			return ((::KCOAIPGGMGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETCONVINCEMANAGER_OFFSET))(this);
		}

		::EEFGGFIGMCK* GetCharacterStoryLightManager()
		{
			return ((::EEFGGFIGMCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETCHARACTERSTORYLIGHTMANAGER_OFFSET))(this);
		}

		::OBAPBPBNNHP* GetPerformanceShiftManager()
		{
			return ((::OBAPBPBNNHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCESHIFTMANAGER_OFFSET))(this);
		}

		::FIFFPFPIEDN* GetPerformanceLoader()
		{
			return ((::FIFFPFPIEDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETPERFORMANCELOADER_OFFSET))(this);
		}

		::System::Void PostAudioInCurrentPerformance(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_POSTAUDIOINCURRENTPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void MuteStagePropForStory(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_MUTESTAGEPROPFORSTORY_OFFSET))(this, a1, a2, a3);
		}

		::HIIFJAIAHJN* PreLoadCutscene(::RPG::Client::CutsceneCacheInitParams* a1)
		{
			return ((::HIIFJAIAHJN*(*)(::PVOID, ::RPG::Client::CutsceneCacheInitParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_PRELOADCUTSCENE_OFFSET))(this, a1);
		}

		::System::Void ReleaseCutscenePreload(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_RELEASECUTSCENEPRELOAD_OFFSET))(this, a1);
		}

		::System::Void OnPlaySimpleTalkBehaviourPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_ONPLAYSIMPLETALKBEHAVIOURPLAY_OFFSET))(this);
		}

		::System::Void AddTimelineID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_ADDTIMELINEID_OFFSET))(this, a1);
		}

		::System::Void RemoveTimelineID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_REMOVETIMELINEID_OFFSET))(this, a1);
		}

		::System::Void _StopPlayingTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__STOPPLAYINGTIMELINE_OFFSET))(this);
		}

		::System::Void _ResetTimelineID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__RESETTIMELINEID_OFFSET))(this);
		}

		::System::Void On_PerformanceTimeScaleLockTarget_Lock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_ON_PERFORMANCETIMESCALELOCKTARGET_LOCK_OFFSET))(this);
		}

		::System::Void On_PerformanceTimeScaleLockTarget_Unlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_ON_PERFORMANCETIMESCALELOCKTARGET_UNLOCK_OFFSET))(this);
		}

		::System::Void OpenSpecialVision(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_OPENSPECIALVISION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CloseSpecialVision(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_CLOSESPECIALVISION_OFFSET))(this, a1);
		}

		::System::Void ClearSpecialVisionOnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_CLEARSPECIALVISIONONSTART_OFFSET))(this);
		}

		::System::Void ClearSpecialVisionOnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_CLEARSPECIALVISIONONEND_OFFSET))(this);
		}

		::System::Boolean UseNewSkip(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_USENEWSKIP_OFFSET))(this, a1);
		}

		::System::Void CacheNewPerformanceSkip(::System::Boolean a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_CACHENEWPERFORMANCESKIP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Billboard::BillboardNotifyParam* GetBubbleNotifyParam(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::Billboard::BillboardNotifyParam*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GETBUBBLENOTIFYPARAM_OFFSET))(this, a1);
		}

		::System::Void _Regist()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__REGIST_OFFSET))(this);
		}

		::System::Void _Unregist()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__UNREGIST_OFFSET))(this);
		}

		::System::Void _OnPreLoadCutscene(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONPRELOADCUTSCENE_OFFSET))(this, a1);
		}

		::System::Void _OnNotifyShowTalkUIFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYSHOWTALKUIFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnNotifyAdventurePhaseEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYADVENTUREPHASEEND_OFFSET))(this, a1);
		}

		::System::Void _OnNotifyHideAllDSActorsExceptInList(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYHIDEALLDSACTORSEXCEPTINLIST_OFFSET))(this, a1);
		}

		::System::Void _OnNotifyPerformanceDynamicLoadCharacter(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYPERFORMANCEDYNAMICLOADCHARACTER_OFFSET))(this, a1);
		}

		::System::Void _OnNotifyPerformanceActorsFollowPlatformMove(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYPERFORMANCEACTORSFOLLOWPLATFORMMOVE_OFFSET))(this, a1);
		}

		::System::Void _OnNotifySetPerformanceExtendEndBlack(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYSETPERFORMANCEEXTENDENDBLACK_OFFSET))(this, a1);
		}

		::System::Void _OnNotifySetPerformanceEndText(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYSETPERFORMANCEENDTEXT_OFFSET))(this, a1);
		}

		::System::Void _OnNotifyOverridePerformanceEndCrack(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYOVERRIDEPERFORMANCEENDCRACK_OFFSET))(this, a1);
		}

		::System::Void _OnNotifyOverridePerformanceEndScreenCut(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYOVERRIDEPERFORMANCEENDSCREENCUT_OFFSET))(this, a1);
		}

		::System::Void _OnNotifyOverridePerformanceEndCustomSrcTrf(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYOVERRIDEPERFORMANCEENDCUSTOMSRCTRF_OFFSET))(this, a1);
		}

		::System::Void _OnNotifyOverrideEndTransferColor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYOVERRIDEENDTRANSFERCOLOR_OFFSET))(this, a1);
		}

		::System::Void _OnNotifyOverrideEndTransferType(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYOVERRIDEENDTRANSFERTYPE_OFFSET))(this, a1);
		}

		::System::Void _OnNotifySetPerformanceResult(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYSETPERFORMANCERESULT_OFFSET))(this, a1);
		}

		::System::Void _OnNotifyPlayScreenTransferFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYPLAYSCREENTRANSFERFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnNotifyScreenTransferTextDisable(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYSCREENTRANSFERTEXTDISABLE_OFFSET))(this, a1);
		}

		::System::Void _OnNotifyPlayerTransferToFakeAvatar(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__ONNOTIFYPLAYERTRANSFERTOFAKEAVATAR_OFFSET))(this, a1);
		}

		::System::Void _SendNotifyToInstance(::RPG::Client::NotifyType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__SENDNOTIFYTOINSTANCE_OFFSET))(this, a1, a2);
		}

		::System::Void _LoadConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__LOADCONFIG_OFFSET))(this);
		}

		::System::Void _SetCollisionAndDitherEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__SETCOLLISIONANDDITHERENABLE_OFFSET))(this, a1);
		}

		::System::Void _TickInstances(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__TICKINSTANCES_OFFSET))(this, a1);
		}

		::System::Void _TickWaitingInstances(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__TICKWAITINGINSTANCES_OFFSET))(this, a1);
		}

		::System::Void _TickCurrentInstance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__TICKCURRENTINSTANCE_OFFSET))(this, a1);
		}

		::System::Void _TickNoWaitInstance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__TICKNOWAITINSTANCE_OFFSET))(this, a1);
		}

		::System::Double _GetCurrentTimelineTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__GETCURRENTTIMELINETIME_OFFSET))(this);
		}

		::System::Void _TickCacheNewPerformanceSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__TICKCACHENEWPERFORMANCESKIP_OFFSET))(this);
		}

		::System::Void _PauseToast(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__PAUSETOAST_OFFSET))(this, a1);
		}

		::System::Void _TickPauseToast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__TICKPAUSETOAST_OFFSET))(this);
		}

		::System::Void _DisposePauseToast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__DISPOSEPAUSETOAST_OFFSET))(this);
		}

		::System::Void _SendPauseToast(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER__SENDPAUSETOAST_OFFSET))(this, a1);
		}

		::ANHMHFHBAAH* get_ReserveParametersConfig()
		{
			return ((::ANHMHFHBAAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_RESERVEPARAMETERSCONFIG_OFFSET))(this);
		}

		::System::Void set_ReserveParametersConfig(::ANHMHFHBAAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANHMHFHBAAH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_SET_RESERVEPARAMETERSCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_ISINPERFORMANCE_OFFSET))(this);
		}

		::System::Void set_IsInPerformance(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_SET_ISINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInGacha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_ISINGACHA_OFFSET))(this);
		}

		::System::Void set_IsInGacha(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_SET_ISINGACHA_OFFSET))(this, a1);
		}

		::RPG::GameCore::PerformanceCommonConfig* get_Config()
		{
			return ((::RPG::GameCore::PerformanceCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::PerformanceCommonConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceCommonConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_SET_CONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::PerformanceBgImagePanelContainerConfig* get_BgImagePanelContainerConfig()
		{
			return ((::RPG::GameCore::PerformanceBgImagePanelContainerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_BGIMAGEPANELCONTAINERCONFIG_OFFSET))(this);
		}

		::System::Void set_BgImagePanelContainerConfig(::RPG::GameCore::PerformanceBgImagePanelContainerConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceBgImagePanelContainerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_SET_BGIMAGEPANELCONTAINERCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWaitingClearAudioState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_ISWAITINGCLEARAUDIOSTATE_OFFSET))(this);
		}

		::System::Void set_IsWaitingClearAudioState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_SET_ISWAITINGCLEARAUDIOSTATE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasWaitingInstance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_HASWAITINGINSTANCE_OFFSET))(this);
		}

		::RPG::GameCore::ELevelPerformanceType get_CurrentPerformanceType()
		{
			return ((::RPG::GameCore::ELevelPerformanceType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCETYPE_OFFSET))(this);
		}

		::System::UInt32 get_CurrentPerformanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEID_OFFSET))(this);
		}

		::System::Boolean get_CurrentPerformanceIsChangePlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEISCHANGEPLAYER_OFFSET))(this);
		}

		::System::UInt32 get_CurrentPerformanceResultValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCERESULTVALUE_OFFSET))(this);
		}

		::System::Boolean get_CurrentPerformanceHasEndBlack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEHASENDBLACK_OFFSET))(this);
		}

		::System::Boolean get_CurrentPerformanceHasEndBlackText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEHASENDBLACKTEXT_OFFSET))(this);
		}

		::System::Boolean get_CurrentPerformanceHasEndCrack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEHASENDCRACK_OFFSET))(this);
		}

		::System::UInt32 get_CurrentPerformanceOwnerGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEOWNERGROUPID_OFFSET))(this);
		}

		::System::Boolean get_IsCurrent_C_DS()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_ISCURRENT_C_DS_OFFSET))(this);
		}

		::System::Guid get_CurrentPerformanceGuid()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_CURRENTPERFORMANCEGUID_OFFSET))(this);
		}

		::RPG::GameCore::CreateCharacter* FindCreateCharacterByUniqueName(::System::String* a1)
		{
			return ((::RPG::GameCore::CreateCharacter*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_FINDCREATECHARACTERBYUNIQUENAME_OFFSET))(this, a1);
		}

		::System::Boolean get_NewPerformanceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_NEWPERFORMANCESKIP_OFFSET))(this);
		}

		::System::Void set_NewPerformanceSkip(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_SET_NEWPERFORMANCESKIP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_NewSkipExcludeIds()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_GET_NEWSKIPEXCLUDEIDS_OFFSET))(this);
		}

		::System::Void set_NewSkipExcludeIds(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEMANAGER_SET_NEWSKIPEXCLUDEIDS_OFFSET))(this, a1);
		}

	};
}
