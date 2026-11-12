#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleTargetStatus.h"
#include "unitysdk/RPG/Client/PauseDialogTabEnum.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/BattleTargetIconType.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/ParamType.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIData.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CPBELAEIENN;
class GEDMHFPPBHN;
class HNFFJNEKJHA;
namespace RPG::Client { class BattleResulAutoDecomposeInfo; }
namespace RPG::Client { class BattleResultInfo; }
namespace RPG::Client { class BattleViewModeInitData; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class BattleTargetConfigRow; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class MazeBuffData; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_BATTLEUIUTILS_CANOPENTIMELINEDETAILINFOPANEL_1_OFFSET UNITYSDK_OFFSET(0xD1CDA40)
#define RPG_CLIENT_BATTLEUIUTILS_CANOPENTIMELINEDETAILINFOPANEL_OFFSET UNITYSDK_OFFSET(0xD1CD950)
#define RPG_CLIENT_BATTLEUIUTILS_CCTOR_OFFSET UNITYSDK_OFFSET(0xD1D37B0)
#define RPG_CLIENT_BATTLEUIUTILS_CHECKPENDINGDOWNLOADREPLAYTOPLAY_OFFSET UNITYSDK_OFFSET(0xD1CF0D0)
#define RPG_CLIENT_BATTLEUIUTILS_CREATEBATTLERESULTREWARDLIST_OFFSET UNITYSDK_OFFSET(0xD1CE890)
#define RPG_CLIENT_BATTLEUIUTILS_CREATEMAZESKILLREWARDLISTFROMRESULT_OFFSET UNITYSDK_OFFSET(0xD1CE4F0)
#define RPG_CLIENT_BATTLEUIUTILS_CREATEMULTIPLEREWARDLISTFROMRESULT_OFFSET UNITYSDK_OFFSET(0xD1CEFF0)
#define RPG_CLIENT_BATTLEUIUTILS_CREATEREWARDLISTFROMRESULT_OFFSET UNITYSDK_OFFSET(0xD1BFB80)
#define RPG_CLIENT_BATTLEUIUTILS_FINDBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xD1CE170)
#define RPG_CLIENT_BATTLEUIUTILS_GETACTIVESKILLCONFIG_OFFSET UNITYSDK_OFFSET(0xD1CCCB0)
#define RPG_CLIENT_BATTLEUIUTILS_GETACTIVESKILLDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xD1CCF90)
#define RPG_CLIENT_BATTLEUIUTILS_GETACTIVESKILLDATA_OFFSET UNITYSDK_OFFSET(0xD1CCE20)
#define RPG_CLIENT_BATTLEUIUTILS_GETACTIVESKILLINDEX_OFFSET UNITYSDK_OFFSET(0xD1CCB50)
#define RPG_CLIENT_BATTLEUIUTILS_GETALLAVATARGLOBALMAZEBUFFDATALIST_OFFSET UNITYSDK_OFFSET(0xD1D0A80)
#define RPG_CLIENT_BATTLEUIUTILS_GETATTACHPRESHOWSKILLDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xD1CD290)
#define RPG_CLIENT_BATTLEUIUTILS_GETBATTLERESULAUTODECOMPOSEINFO_OFFSET UNITYSDK_OFFSET(0xD1CE7C0)
#define RPG_CLIENT_BATTLEUIUTILS_GETBATTLETARGETICONTYPE_OFFSET UNITYSDK_OFFSET(0xD1D0D40)
#define RPG_CLIENT_BATTLEUIUTILS_GETBATTLETARGETSTATUS_OFFSET UNITYSDK_OFFSET(0xD1D0C80)
#define RPG_CLIENT_BATTLEUIUTILS_GETCURBATTLESUBTARGET_OFFSET UNITYSDK_OFFSET(0xD1D0EA0)
#define RPG_CLIENT_BATTLEUIUTILS_GETCURRENTURNACTIONENTITY_OFFSET UNITYSDK_OFFSET(0xD1CC9F0)
#define RPG_CLIENT_BATTLEUIUTILS_GETCURSTAGETYPE_OFFSET UNITYSDK_OFFSET(0xD1D0350)
#define RPG_CLIENT_BATTLEUIUTILS_GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xD1D0780)
#define RPG_CLIENT_BATTLEUIUTILS_GETMETRONOMETIME_OFFSET UNITYSDK_OFFSET(0xD1CDF60)
#define RPG_CLIENT_BATTLEUIUTILS_GETMODELSCALE_OFFSET UNITYSDK_OFFSET(0xD1D2A80)
#define RPG_CLIENT_BATTLEUIUTILS_GETSKILLTIPOFFSET_OFFSET UNITYSDK_OFFSET(0xD1CD460)
#define RPG_CLIENT_BATTLEUIUTILS_GETSPEEDUPRATIO_OFFSET UNITYSDK_OFFSET(0xD1D0BA0)
#define RPG_CLIENT_BATTLEUIUTILS_GETUINODE_OFFSET UNITYSDK_OFFSET(0xD1D2C00)
#define RPG_CLIENT_BATTLEUIUTILS_GETULTRAUIOPERATIONINDEX_OFFSET UNITYSDK_OFFSET(0xD1D36E0)
#define RPG_CLIENT_BATTLEUIUTILS_GET__LUA_BATTLE_PAUSE_DIALOG_NAME_OFFSET UNITYSDK_OFFSET(0xD1CC8B0)
#define RPG_CLIENT_BATTLEUIUTILS_GET__LUA_BATTLE_TEAM_INFO_PAGE_NAME_OFFSET UNITYSDK_OFFSET(0xD1D27A0)
#define RPG_CLIENT_BATTLEUIUTILS_ISACTIONBARCANSCROLL_OFFSET UNITYSDK_OFFSET(0xD1CD640)
#define RPG_CLIENT_BATTLEUIUTILS_ISBATTLETARGETFORWARD_OFFSET UNITYSDK_OFFSET(0xD1D0E10)
#define RPG_CLIENT_BATTLEUIUTILS_ISENTITYHAVESHIELDBUFF_OFFSET UNITYSDK_OFFSET(0xD1CBC30)
#define RPG_CLIENT_BATTLEUIUTILS_ISENTITYNEEDSHOWINVIEWMODE_OFFSET UNITYSDK_OFFSET(0xD1D3140)
#define RPG_CLIENT_BATTLEUIUTILS_ISENVBUFFEXIST_OFFSET UNITYSDK_OFFSET(0xD1CFDA0)
#define RPG_CLIENT_BATTLEUIUTILS_ISFAILPROGRESS_OFFSET UNITYSDK_OFFSET(0xD1D1370)
#define RPG_CLIENT_BATTLEUIUTILS_ISGAMECORECODEEXPIRE_OFFSET UNITYSDK_OFFSET(0xD1CF880)
#define RPG_CLIENT_BATTLEUIUTILS_ISHPCHANGENEEDSHOW_OFFSET UNITYSDK_OFFSET(0xD1D15C0)
#define RPG_CLIENT_BATTLEUIUTILS_ISMONSTERBOUNDSCULLEDBYCAMERA_OFFSET UNITYSDK_OFFSET(0xD1D2D70)
#define RPG_CLIENT_BATTLEUIUTILS_ISSHIELDCHANGENEEDSHOW_OFFSET UNITYSDK_OFFSET(0xD1D1D50)
#define RPG_CLIENT_BATTLEUIUTILS_ISSHIELDMODIFIER_OFFSET UNITYSDK_OFFSET(0xD1CBD10)
#define RPG_CLIENT_BATTLEUIUTILS_ISSPEICALULTRASKILLTYPE_OFFSET UNITYSDK_OFFSET(0xD1D0740)
#define RPG_CLIENT_BATTLEUIUTILS_ISTARGETSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0xD1D1310)
#define RPG_CLIENT_BATTLEUIUTILS_ISTOASTPAUSE_OFFSET UNITYSDK_OFFSET(0xD1D13C0)
#define RPG_CLIENT_BATTLEUIUTILS_ISUIOPERATIONENABLE_OFFSET UNITYSDK_OFFSET(0xD1CBD70)
#define RPG_CLIENT_BATTLEUIUTILS_ISVIEWMODEENABLE_OFFSET UNITYSDK_OFFSET(0xD1CC590)
#define RPG_CLIENT_BATTLEUIUTILS_ISWAITORDER_OFFSET UNITYSDK_OFFSET(0xD1CDC10)
#define RPG_CLIENT_BATTLEUIUTILS_LATEOPENPAUSEDIALOG_OFFSET UNITYSDK_OFFSET(0xD1D2160)
#define RPG_CLIENT_BATTLEUIUTILS_OPENPAUSEDIALOG_OFFSET UNITYSDK_OFFSET(0xD1D1FE0)
#define RPG_CLIENT_BATTLEUIUTILS_PLAYANIMATIONFROMMETRONOMETIME_OFFSET UNITYSDK_OFFSET(0xD1CDFC0)
#define RPG_CLIENT_BATTLEUIUTILS_PLAYANIMATIONWITHSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xD1CDEA0)
#define RPG_CLIENT_BATTLEUIUTILS_PLAYANIMATIONWITHTIMESCALE_OFFSET UNITYSDK_OFFSET(0xD1CDDE0)
#define RPG_CLIENT_BATTLEUIUTILS_QUERYACTIVEAVATARPANELENTITIES_OFFSET UNITYSDK_OFFSET(0xD1D32B0)
#define RPG_CLIENT_BATTLEUIUTILS_QUERYENTITIES_OFFSET UNITYSDK_OFFSET(0xD1D2F70)
#define RPG_CLIENT_BATTLEUIUTILS_QUERYSERVANT_OFFSET UNITYSDK_OFFSET(0xD1D3240)
#define RPG_CLIENT_BATTLEUIUTILS_SETBATTLEPAUSE_OFFSET UNITYSDK_OFFSET(0xD1D2890)
#define RPG_CLIENT_BATTLEUIUTILS_SHOULDSHOWWAVEINFO_OFFSET UNITYSDK_OFFSET(0xD1D0510)
#define RPG_CLIENT_BATTLEUIUTILS_SHOWTEAMDETAILDIALOG_1_OFFSET UNITYSDK_OFFSET(0xD1CC140)
#define RPG_CLIENT_BATTLEUIUTILS_SHOWTEAMDETAILDIALOG_OFFSET UNITYSDK_OFFSET(0xD1CC040)
#define RPG_CLIENT_BATTLEUIUTILS_TRYDOWNLOADREPLAY_OFFSET UNITYSDK_OFFSET(0xD1CF940)
#define RPG_CLIENT_BATTLEUIUTILS_TRYGETSTAGEINVASIONSTATUS_OFFSET UNITYSDK_OFFSET(0xD1D08C0)
#define RPG_CLIENT_BATTLEUIUTILS_TRYPLAYREPLAY_OFFSET UNITYSDK_OFFSET(0xD1CF2E0)
#define RPG_CLIENT_BATTLEUIUTILS__CANENTITYSHOWAVATARPANEL_OFFSET UNITYSDK_OFFSET(0xD1D3520)
#define RPG_CLIENT_BATTLEUIUTILS__CANENTITYSHOWDAMAGETEXT_OFFSET UNITYSDK_OFFSET(0xD1D1840)
#define RPG_CLIENT_BATTLEUIUTILS__ENTITYHASSHIELD_OFFSET UNITYSDK_OFFSET(0xD1D18C0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleUIUtils_TypeDefinitionIndex = 74112;

	class BattleUIUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::HNFFJNEKJHA*>** StaticGet_PendingReplayDownloadLock()
		{
			return (::System::Collections::Generic::List_1<::HNFFJNEKJHA*>**)UnitySDK::FromName("RPG.Client", "BattleUIUtils")->GetStaticField(0x59A80);
		}

		static ::System::Boolean* StaticGet_LockDownLoadReplayFlag()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "BattleUIUtils")->GetStaticField(0x110D0);
		}

		static ::System::UInt32* StaticGet_s_AvatarExpVirtualItemID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "BattleUIUtils")->GetStaticField(0x110D4);
		}

		// static const ::System::String* _LUA_BATTLE_TEAM_INFO_PAGE; // 0x0
		// static const ::System::String* _LUA_BATTLE_PAUSE_DIALOG; // 0x0
		// static const ::System::String* HEAD_BUTTON_NORMAL_EFF; // 0x0
		// static const ::System::String* HEAD_BUTTON_SELECTED_EFF; // 0x0
		// static const ::System::Object LAYER_DIRTY_HP; // 0x0
		// static const ::System::Object LAYER_RALLY_HP; // 0x0
		// static const ::System::Object LAYER_BG_HP; // 0x0
		// static const ::System::Object LAYER_NORMAL_HP; // 0x0
		// static const ::System::Object LAYER_FORCE_KILL; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsEntityHaveShieldBuff(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISENTITYHAVESHIELDBUFF_OFFSET))(a1);
		}

		static ::System::Boolean IsShieldModifier(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISSHIELDMODIFIER_OFFSET))(a1);
		}

		static ::System::Boolean IsUIOperationEnable(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISUIOPERATIONENABLE_OFFSET))(a1);
		}

		static ::System::Boolean ShowTeamDetailDialog(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_SHOWTEAMDETAILDIALOG_OFFSET))(a1);
		}

		static ::System::Boolean ShowTeamDetailDialog_1(::RPG::Client::BattleViewModeInitData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::BattleViewModeInitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_SHOWTEAMDETAILDIALOG_1_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* GetCurrenTurnActionEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETCURRENTURNACTIONENTITY_OFFSET))();
		}

		static ::System::Int32 GetActiveSkillIndex()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETACTIVESKILLINDEX_OFFSET))();
		}

		static ::RPG::GameCore::SkillConfig* GetActiveSkillConfig()
		{
			return ((::RPG::GameCore::SkillConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETACTIVESKILLCONFIG_OFFSET))();
		}

		static ::RPG::GameCore::SkillData* GetActiveSkillData()
		{
			return ((::RPG::GameCore::SkillData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETACTIVESKILLDATA_OFFSET))();
		}

		static ::RPG::GameCore::AttackDamageType GetActiveSkillDamageType(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETACTIVESKILLDAMAGETYPE_OFFSET))(a1);
		}

		static ::RPG::GameCore::AttackDamageType GetAttachPreshowSkillDamageType(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETATTACHPRESHOWSKILLDAMAGETYPE_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 GetSkillTipOffset(::RPG::Client::UISkillIndex a1)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETSKILLTIPOFFSET_OFFSET))(a1);
		}

		static ::System::Boolean IsViewModeEnable(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISVIEWMODEENABLE_OFFSET))(a1);
		}

		static ::System::Boolean IsActionBarCanScroll()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISACTIONBARCANSCROLL_OFFSET))();
		}

		static ::System::Boolean CanOpenTimeLineDetailInfoPanel(::GEDMHFPPBHN* a1)
		{
			return ((::System::Boolean(*)(::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_CANOPENTIMELINEDETAILINFOPANEL_OFFSET))(a1);
		}

		static ::System::Boolean CanOpenTimeLineDetailInfoPanel_1()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_CANOPENTIMELINEDETAILINFOPANEL_1_OFFSET))();
		}

		static ::System::Boolean IsWaitOrder()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISWAITORDER_OFFSET))();
		}

		static ::System::Void PlayAnimationWithTimeScale(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_PLAYANIMATIONWITHTIMESCALE_OFFSET))(a1, a2);
		}

		static ::System::Void PlayAnimationWithSimulationSpeed(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_PLAYANIMATIONWITHSIMULATIONSPEED_OFFSET))(a1, a2);
		}

		static ::System::Single GetMetronomeTime(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETMETRONOMETIME_OFFSET))(a1);
		}

		static ::System::Void PlayAnimationFromMetronomeTime(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_PLAYANIMATIONFROMMETRONOMETIME_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntity* FindByRuntimeID(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_FINDBYRUNTIMEID_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* CreateMazeSkillRewardListFromResult()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_CREATEMAZESKILLREWARDLISTFROMRESULT_OFFSET))();
		}

		static ::RPG::Client::BattleResulAutoDecomposeInfo* GetBattleResulAutoDecomposeInfo()
		{
			return ((::RPG::Client::BattleResulAutoDecomposeInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETBATTLERESULAUTODECOMPOSEINFO_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* CreateRewardListFromResult()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_CREATEREWARDLISTFROMRESULT_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* CreateBattleResultRewardList(::RPG::Client::BattleResultInfo* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::RPG::Client::BattleResultInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_CREATEBATTLERESULTREWARDLIST_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* CreateMultipleRewardListFromResult()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_CREATEMULTIPLEREWARDLISTFROMRESULT_OFFSET))();
		}

		static ::System::Void CheckPendingDownLoadReplayToPlay()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_CHECKPENDINGDOWNLOADREPLAYTOPLAY_OFFSET))();
		}

		static ::System::Boolean IsGameCoreCodeExpire(::HNFFJNEKJHA* a1)
		{
			return ((::System::Boolean(*)(::HNFFJNEKJHA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISGAMECORECODEEXPIRE_OFFSET))(a1);
		}

		static ::System::Void TryPlayReplay(::HNFFJNEKJHA* a1)
		{
			return ((::System::Void(*)(::HNFFJNEKJHA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_TRYPLAYREPLAY_OFFSET))(a1);
		}

		static ::System::Boolean TryDownLoadReplay(::System::Int32 a1, ::HNFFJNEKJHA* a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::HNFFJNEKJHA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_TRYDOWNLOADREPLAY_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsEnvBuffExist()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISENVBUFFEXIST_OFFSET))();
		}

		static ::RPG::GameCore::StageType GetCurStageType()
		{
			return ((::RPG::GameCore::StageType(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETCURSTAGETYPE_OFFSET))();
		}

		static ::System::Boolean ShouldShowWaveInfo()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_SHOULDSHOWWAVEINFO_OFFSET))();
		}

		static ::System::Boolean IsSpeicalUltraSkillType(::RPG::GameCore::SkillSPProgressType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SkillSPProgressType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISSPEICALULTRASKILLTYPE_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* GetEntityByRuntimeID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETENTITYBYRUNTIMEID_OFFSET))(a1);
		}

		static ::System::Boolean TryGetStageInvasionStatus(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::StageInvasionMonsterUIData a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::StageInvasionMonsterUIData))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_TRYGETSTAGEINVASIONSTATUS_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>* GetAllAvatarGlobalMazeBuffDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETALLAVATARGLOBALMAZEBUFFDATALIST_OFFSET))();
		}

		static ::System::Single GetSpeedUpRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETSPEEDUPRATIO_OFFSET))();
		}

		static ::RPG::Client::BattleTargetStatus GetBattleTargetStatus(::RPG::GameCore::ParamType a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::BattleTargetStatus(*)(::RPG::GameCore::ParamType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETBATTLETARGETSTATUS_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::BattleTargetIconType GetBattleTargetIconType(::RPG::GameCore::BattleTargetConfigRow* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::BattleTargetIconType(*)(::RPG::GameCore::BattleTargetConfigRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETBATTLETARGETICONTYPE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsBattleTargetForward(::RPG::GameCore::ParamType a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ParamType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISBATTLETARGETFORWARD_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetCurBattleSubTarget(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETCURBATTLESUBTARGET_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsTargetStatusChange(::RPG::GameCore::ParamType a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ParamType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISTARGETSTATUSCHANGE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsFailProgress(::RPG::GameCore::ParamType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ParamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISFAILPROGRESS_OFFSET))(a1);
		}

		static ::System::Boolean IsToastPause()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISTOASTPAUSE_OFFSET))();
		}

		static ::System::Boolean IsHPChangeNeedShow(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISHPCHANGENEEDSHOW_OFFSET))(a1);
		}

		static ::System::Boolean IsShieldChangeNeedShow(::RPG::GameCore::AbilityCurrentShieldChange* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISSHIELDCHANGENEEDSHOW_OFFSET))(a1);
		}

		static ::System::Boolean _CanEntityShowDamageText(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS__CANENTITYSHOWDAMAGETEXT_OFFSET))(a1);
		}

		static ::System::Boolean _EntityHasShield(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS__ENTITYHASSHIELD_OFFSET))(a1);
		}

		static ::System::Void OpenPauseDialog(::System::Boolean a1, ::RPG::Client::PauseDialogTabEnum a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::RPG::Client::PauseDialogTabEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_OPENPAUSEDIALOG_OFFSET))(a1, a2);
		}

		static ::System::Void LateOpenPauseDialog(::CPBELAEIENN* a1)
		{
			return ((::System::Void(*)(::CPBELAEIENN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_LATEOPENPAUSEDIALOG_OFFSET))(a1);
		}

		static ::System::Void SetBattlePause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_SETBATTLEPAUSE_OFFSET))(a1);
		}

		static ::System::Single GetModelScale(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETMODELSCALE_OFFSET))(a1);
		}

		static ::UnityEngine::RectTransform* GetUINode(::System::String* a1)
		{
			return ((::UnityEngine::RectTransform*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETUINODE_OFFSET))(a1);
		}

		static ::System::Boolean IsMonsterBoundsCulledByCamera(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISMONSTERBOUNDSCULLEDBYCAMERA_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntityList* QueryEntities(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::TeamTypeMask a2, ::RPG::GameCore::EntityTypeMask a3, ::RPG::GameCore::AliveStateMask a4)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_QUERYENTITIES_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IsEntityNeedShowInViewMode(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_ISENTITYNEEDSHOWINVIEWMODE_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntityList* QueryServant(::RPG::GameCore::EntityManager* a1)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_QUERYSERVANT_OFFSET))(a1);
		}

		static ::System::Void QueryActiveAvatarPanelEntities(::RPG::GameCore::EntityManager* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::EntityManager*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_QUERYACTIVEAVATARPANELENTITIES_OFFSET))(a1, a2);
		}

		static ::System::Boolean _CanEntityShowAvatarPanel(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntityList* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS__CANENTITYSHOWAVATARPANEL_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetUltraUIOperationIndex(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GETULTRAUIOPERATIONINDEX_OFFSET))(a1);
		}

		static ::System::String* get__LUA_BATTLE_TEAM_INFO_PAGE_NAME()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GET__LUA_BATTLE_TEAM_INFO_PAGE_NAME_OFFSET))();
		}

		static ::System::String* get__LUA_BATTLE_PAUSE_DIALOG_NAME()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS_GET__LUA_BATTLE_PAUSE_DIALOG_NAME_OFFSET))();
		}

	};
}
