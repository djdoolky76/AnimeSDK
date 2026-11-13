#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightEntranceType.h"
#include "unitysdk/System/Object.h"
class ABPLALCHNFA;
class ACFLKPFDHIM;
class BEEFLEJAOCN;
class BJGJBNJDLIK;
class CHCHAJIANIM;
class CLFABOEKMJI;
class CMCJGOBHEMN;
class CONONEALNOF;
class DBONCGFHHDN;
class ELDJBEKOLHB;
class FBKIFPOEGGO;
class FFOGFOBHDEK;
class FIIJNPBFJBG;
class GNOBLNOCEHA;
class HAGHIKLEKGO;
class HEJJDLPNKMH;
class HKDACEAEDDE;
class HKFECLCHBFJ;
class KFNCAIHIHCM;
class KGFNICBCMOA;
class MCNFDKKKABH;
class MPIMAEMCEFH;
class NDGFICEEICD;
class NGIPBCJPFPG;
class NIHNGPKHEPC;
class OBDNIEDPENN;
class OILCMCPNBEO;
class OLPFMPIKIPK;
class POCJDMMANBM;
namespace RPG::Client { class GridFightAssistant; }
namespace RPG::Client { class GridFightAugmentInfo; }
namespace RPG::Client { class GridFightBattleGameContext; }
namespace RPG::Client { class GridFightBattleResultInfo; }
namespace RPG::Client { class GridFightBattleSttInfo; }
namespace RPG::Client { class GridFightBonusServerData; }
namespace RPG::Client { class GridFightContextValue; }
namespace RPG::Client { class GridFightGameEventData; }
namespace RPG::Client { class GridFightGameSession; }
namespace RPG::Client { class GridFightGameTrait; }
namespace RPG::Client { class GridFightItemInfo; }
namespace RPG::Client { class GridFightModifierInfo; }
namespace RPG::Client { class GridFightOrbServerData; }
namespace RPG::Client { class GridFightPendingActionManager; }
namespace RPG::Client { class GridFightPendingPresentationQueue; }
namespace RPG::Client { class GridFightPendingSelection; }
namespace RPG::Client { class GridFightPetPalEffectRepository; }
namespace RPG::Client { class GridFightPlayer; }
namespace RPG::Client { class GridFightPortalServerData; }
namespace RPG::Client { class GridFightPrayQuestManager; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleShop; }
namespace RPG::Client { class GridFightSeason; }
namespace RPG::Client { class GridFightSettleResultInfo; }
namespace RPG::Client { class GridFightSpotLightManager; }
namespace RPG::Client { class GridFightStage; }
namespace RPG::Client { class GridFightTeam; }
namespace RPG::Client { class GridFightTeamChangeEvent; }
namespace RPG::Client { class GridFightTrack; }
namespace RPG::Client { class GridFightTutorialManager; }
namespace RPG::Client { class IGridFightTutorialData; }

#define RPG_CLIENT_GRIDFIGHTGAMESESSION_CLEARBATTLEGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x1CD5D1A0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_CLEARBATTLERESULT_OFFSET UNITYSDK_OFFSET(0x1CD5E190)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_COMPAREWITHCURTEAM_OFFSET UNITYSDK_OFFSET(0x1CD605D0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD580F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CD5D0F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_ENTERSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1CD5E1F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ASSISTANT_OFFSET UNITYSDK_OFFSET(0x1CD63EC0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_AUGMENT_OFFSET UNITYSDK_OFFSET(0x1CD63E60)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BATTLEGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x1CD63F60)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BATTLERESULT_OFFSET UNITYSDK_OFFSET(0x1CD63F00)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BATTLESTT_OFFSET UNITYSDK_OFFSET(0x1CD63E80)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BONUS_OFFSET UNITYSDK_OFFSET(0x1CD63E50)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0x1CD63B40)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_CONTEXTVALUE_OFFSET UNITYSDK_OFFSET(0x1CD63E90)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_CURSESSION_OFFSET UNITYSDK_OFFSET(0x1CD58010)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_DIVISIONID_OFFSET UNITYSDK_OFFSET(0x1CD63840)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1CD63880)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ENTRANCETYPE_OFFSET UNITYSDK_OFFSET(0x1CD63820)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_GAMETRAIT_OFFSET UNITYSDK_OFFSET(0x1CD63E10)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_INUPDATEPROCESS_OFFSET UNITYSDK_OFFSET(0x1CD636E0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ISINITIALSYNCING_OFFSET UNITYSDK_OFFSET(0x1CD63D70)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ISOVERCHARGEMODE_OFFSET UNITYSDK_OFFSET(0x1CD63B20)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0x1CD63920)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ISTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1CD63B60)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ITEMINFO_OFFSET UNITYSDK_OFFSET(0x1CD63DE0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ITEMREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1CD5A380)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_MODIFIER_OFFSET UNITYSDK_OFFSET(0x1CD63D90)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ORB_OFFSET UNITYSDK_OFFSET(0x1CD63E70)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PENDINGPRESENTATIONQUEUE_OFFSET UNITYSDK_OFFSET(0x1CD63DD0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PENDINGSELECTION_OFFSET UNITYSDK_OFFSET(0x1CD63DB0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PETPAL_OFFSET UNITYSDK_OFFSET(0x1CD63EF0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1CD63DF0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PORTAL_OFFSET UNITYSDK_OFFSET(0x1CD63E40)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PRAYQUESTS_OFFSET UNITYSDK_OFFSET(0x1CD63ED0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PREPPENDINGACTION_OFFSET UNITYSDK_OFFSET(0x1CD63DC0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ROLESHOP_OFFSET UNITYSDK_OFFSET(0x1CD63E00)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1CD63700)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SESSIONSEASON_OFFSET UNITYSDK_OFFSET(0x1CD63720)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SESSIONUID_OFFSET UNITYSDK_OFFSET(0x1CD63B00)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SETTLERESULT_OFFSET UNITYSDK_OFFSET(0x1CD63F20)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1CD63EE0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x1CD63E30)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TEAMREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1CD5A340)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TEAM_OFFSET UNITYSDK_OFFSET(0x1CD63E20)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TRACK_OFFSET UNITYSDK_OFFSET(0x1CD63EA0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TRAITREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1CD5A3D0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TUTORIALDATA_OFFSET UNITYSDK_OFFSET(0x1CD63D10)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TUTORIALMANAGER_OFFSET UNITYSDK_OFFSET(0x1CD63EB0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TUTORIALPROGRESSID_OFFSET UNITYSDK_OFFSET(0x1CD63860)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TUTORIALUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0x1CD63DA0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_WAITMANUALQUITESETTLE_OFFSET UNITYSDK_OFFSET(0x1CD63F40)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_INIT_OFFSET UNITYSDK_OFFSET(0x1CD58660)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_ONAVATARDATACHANGED_OFFSET UNITYSDK_OFFSET(0x1CD5E560)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_ONBATTLEFINISH_OFFSET UNITYSDK_OFFSET(0x1CD5E3D0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_ONSETTLEFINISH_OFFSET UNITYSDK_OFFSET(0x1CD5E470)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_REPLACESPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1CD5E2D0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_BATTLERESULT_OFFSET UNITYSDK_OFFSET(0x1CD63F10)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0x1CD63B50)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_DIVISIONID_OFFSET UNITYSDK_OFFSET(0x1CD63850)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_ENTRANCETYPE_OFFSET UNITYSDK_OFFSET(0x1CD63830)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_INUPDATEPROCESS_OFFSET UNITYSDK_OFFSET(0x1CD636F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_ISINITIALSYNCING_OFFSET UNITYSDK_OFFSET(0x1CD63D80)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_ISOVERCHARGEMODE_OFFSET UNITYSDK_OFFSET(0x1CD63B30)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1CD63710)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_SESSIONUID_OFFSET UNITYSDK_OFFSET(0x1CD63B10)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_SETTLERESULT_OFFSET UNITYSDK_OFFSET(0x1CD63F30)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_TUTORIALPROGRESSID_OFFSET UNITYSDK_OFFSET(0x1CD63870)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_WAITMANUALQUITESETTLE_OFFSET UNITYSDK_OFFSET(0x1CD63F50)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0x1CD5DED0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SYNC_OFFSET UNITYSDK_OFFSET(0x1CD5A420)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CD5D200)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__ADDEQUIPTOBATTLECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x1CD62620)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__ADDROLEIDCHANGEDROLETOBATTLECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x1CD62D80)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__ADDSTARCHANGEDROLETOBATTLECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x1CD62100)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__BUILDDISPLAYROLEFORNEWEQUIP_OFFSET UNITYSDK_OFFSET(0x1CD63310)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__INITROLEEFFECT_OFFSET UNITYSDK_OFFSET(0x1CD5D090)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__PROCESSUPDATEINFO_OFFSET UNITYSDK_OFFSET(0x1CD5E5F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCAUGMENTINFO_OFFSET UNITYSDK_OFFSET(0x1CD5C080)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCBOUNUSINFO_OFFSET UNITYSDK_OFFSET(0x1CD5C0F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCCONTEXTVALUE_OFFSET UNITYSDK_OFFSET(0x1CD5BBB0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCDRAFTINFO_OFFSET UNITYSDK_OFFSET(0x1CD5BFB0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCGRIDINFO_OFFSET UNITYSDK_OFFSET(0x1CD5BDD0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CD5A4F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCITEMINFO_OFFSET UNITYSDK_OFFSET(0x1CD5BC10)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCMODIFIERINFO_OFFSET UNITYSDK_OFFSET(0x1CD5CF00)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPENDINGACTION_OFFSET UNITYSDK_OFFSET(0x1CD5C160)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPETPAL_OFFSET UNITYSDK_OFFSET(0x1CD5CE90)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPLAYERINFO_OFFSET UNITYSDK_OFFSET(0x1CD5BC80)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPORTALINFO_OFFSET UNITYSDK_OFFSET(0x1CD5BF40)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPRAYQUEST_OFFSET UNITYSDK_OFFSET(0x1CD5CDC0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCROLESHOPINFO_OFFSET UNITYSDK_OFFSET(0x1CD5BD40)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1CD5CE20)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x1CD5BED0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCSTTINFO_OFFSET UNITYSDK_OFFSET(0x1CD5C000)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCTRAITINFO_OFFSET UNITYSDK_OFFSET(0x1CD5BE40)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCTUTORIALUNLOCKINFO_OFFSET UNITYSDK_OFFSET(0x1CD5CCF0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEBYSOURCE_OFFSET UNITYSDK_OFFSET(0x1CD5D8F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEGRIDEFFECT_OFFSET UNITYSDK_OFFSET(0x1CD5CF70)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEROLEEFFECT_OFFSET UNITYSDK_OFFSET(0x1CD5DDA0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEROLEPROPERTYMODIFIER_OFFSET UNITYSDK_OFFSET(0x1CD5DE00)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATESOUNDEFFECT_OFFSET UNITYSDK_OFFSET(0x1CD5CFD0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATETRAITBUFFEFFECT_OFFSET UNITYSDK_OFFSET(0x1CD5D030)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameSession_TypeDefinitionIndex = 66412;

	class GridFightGameSession : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTutorialManager* _TutorialManager_k__BackingField; // 0x10
		::RPG::Client::GridFightModifierInfo* _Modifier_k__BackingField; // 0x18
		::RPG::Client::GridFightAugmentInfo* _Augment_k__BackingField; // 0x20
		::RPG::Client::GridFightTrack* _Track_k__BackingField; // 0x28
		::RPG::Client::GridFightBattleGameContext* _GridFightBattleGameContext; // 0x30
		::RPG::Client::GridFightSpotLightManager* _SpotLight_k__BackingField; // 0x38
		::CLFABOEKMJI* _ContextData_k__BackingField; // 0x40
		::RPG::Client::GridFightPlayer* _Player_k__BackingField; // 0x48
		::RPG::Client::GridFightPrayQuestManager* _PrayQuests_k__BackingField; // 0x50
		::RPG::Client::GridFightGameEventData* _GameEventData; // 0x58
		::CMCJGOBHEMN* _TutorialUnlockData_k__BackingField; // 0x60
		::RPG::Client::GridFightPetPalEffectRepository* _PetPal_k__BackingField; // 0x68
		::RPG::Client::GridFightTeam* _Team_k__BackingField; // 0x70
		::RPG::Client::GridFightPendingSelection* _PendingSelection_k__BackingField; // 0x78
		::RPG::Client::GridFightItemInfo* _ItemInfo_k__BackingField; // 0x80
		::RPG::Client::GridFightRoleShop* _RoleShop_k__BackingField; // 0x88
		::RPG::Client::GridFightBonusServerData* _Bonus_k__BackingField; // 0x90
		::RPG::Client::GridFightBattleResultInfo* _BattleResult_k__BackingField; // 0x98
		::RPG::Client::GridFightStage* _Stage_k__BackingField; // 0xA0
		::RPG::Client::GridFightBattleSttInfo* _BattleStt_k__BackingField; // 0xA8
		::RPG::Client::GridFightOrbServerData* _Orb_k__BackingField; // 0xB0
		::RPG::Client::GridFightPendingPresentationQueue* _PendingPresentationQueue_k__BackingField; // 0xB8
		::RPG::Client::GridFightPendingActionManager* _PrepPendingAction_k__BackingField; // 0xC0
		::RPG::Client::GridFightAssistant* _Assistant_k__BackingField; // 0xC8
		::RPG::Client::GridFightSettleResultInfo* _SettleResult_k__BackingField; // 0xD0
		::RPG::Client::GridFightContextValue* _ContextValue_k__BackingField; // 0xD8
		::NDGFICEEICD* _UpdateSummary; // 0xE0
		::RPG::Client::GridFightGameTrait* _GameTrait_k__BackingField; // 0xE8
		::RPG::Client::GridFightPortalServerData* _Portal_k__BackingField; // 0xF0
		::System::UInt32 _SessionUID_k__BackingField; // 0xF8
		::RPG::Client::GridFightEntranceType _EntranceType_k__BackingField; // 0xFC
		::System::Boolean _WaitManualQuiteSettle_k__BackingField; // 0x100
		::System::Boolean _IsOverChargeMode_k__BackingField; // 0x101
		::System::Boolean _IsInitialSyncing_k__BackingField; // 0x102
		::System::Boolean _InUpdateProcess_k__BackingField; // 0x103
		::System::UInt32 _SeasonID_k__BackingField; // 0x104
		::System::UInt32 _DivisionID_k__BackingField; // 0x108
		::System::UInt32 _TutorialProgressID_k__BackingField; // 0x10C
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightGameSession* get_CurSession()
		{
			return ((::RPG::Client::GridFightGameSession*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_CURSESSION_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_INIT_OFFSET))(this);
		}

		::HEJJDLPNKMH* get_TeamRepository()
		{
			return ((::HEJJDLPNKMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TEAMREPOSITORY_OFFSET))(this);
		}

		::HAGHIKLEKGO* get_ItemRepository()
		{
			return ((::HAGHIKLEKGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ITEMREPOSITORY_OFFSET))(this);
		}

		::OBDNIEDPENN* get_TraitRepository()
		{
			return ((::OBDNIEDPENN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TRAITREPOSITORY_OFFSET))(this);
		}

		::System::Void Sync(::MPIMAEMCEFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPIMAEMCEFH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SYNC_OFFSET))(this, a1);
		}

		::System::Void _SyncInternal(::MPIMAEMCEFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPIMAEMCEFH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCINTERNAL_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_DISPOSE_OFFSET))(this);
		}

		::System::Void Update(::OILCMCPNBEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OILCMCPNBEO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_UPDATE_OFFSET))(this, a1);
		}

		::System::Void StartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_STARTBATTLE_OFFSET))(this);
		}

		::System::Void EnterSpotLight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_ENTERSPOTLIGHT_OFFSET))(this);
		}

		::System::Void ReplaceSpotLight(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_REPLACESPOTLIGHT_OFFSET))(this, a1);
		}

		::System::Void OnBattleFinish(::ELDJBEKOLHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELDJBEKOLHB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_ONBATTLEFINISH_OFFSET))(this, a1);
		}

		::System::Void ClearBattleResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_CLEARBATTLERESULT_OFFSET))(this);
		}

		::System::Void ClearBattleGameContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_CLEARBATTLEGAMECONTEXT_OFFSET))(this);
		}

		::System::Void OnSettleFinish(::OLPFMPIKIPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLPFMPIKIPK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_ONSETTLEFINISH_OFFSET))(this, a1);
		}

		::System::Void OnAvatarDataChanged(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_ONAVATARDATACHANGED_OFFSET))(this, a1);
		}

		::System::Void _UpdateBySource(::ABPLALCHNFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABPLALCHNFA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEBYSOURCE_OFFSET))(this, a1);
		}

		::System::Void _ProcessUpdateInfo(::KFNCAIHIHCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFNCAIHIHCM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__PROCESSUPDATEINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncItemInfo(::CONONEALNOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CONONEALNOF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCITEMINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncPlayerInfo(::NIHNGPKHEPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIHNGPKHEPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPLAYERINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncRoleShopInfo(::POCJDMMANBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POCJDMMANBM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCROLESHOPINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncGridInfo(::HKFECLCHBFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKFECLCHBFJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCGRIDINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncTraitInfo(::FFOGFOBHDEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFOGFOBHDEK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCTRAITINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncStageInfo(::BEEFLEJAOCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEEFLEJAOCN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCSTAGEINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncTutorialUnlockInfo(::NIHNGPKHEPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIHNGPKHEPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCTUTORIALUNLOCKINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncContextValue(::FIIJNPBFJBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIIJNPBFJBG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCCONTEXTVALUE_OFFSET))(this, a1);
		}

		::System::Void _SyncPrayQuest(::MCNFDKKKABH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCNFDKKKABH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPRAYQUEST_OFFSET))(this, a1);
		}

		::System::Void _SyncSpotLight(::GNOBLNOCEHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNOBLNOCEHA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCSPOTLIGHT_OFFSET))(this, a1);
		}

		::System::Void _SyncPetPal(::FBKIFPOEGGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBKIFPOEGGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPETPAL_OFFSET))(this, a1);
		}

		::System::Void _SyncPendingAction(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPENDINGACTION_OFFSET))(this, a1);
		}

		::System::Void _SyncPortalInfo(::BEEFLEJAOCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEEFLEJAOCN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPORTALINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncAugmentInfo(::KGFNICBCMOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGFNICBCMOA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCAUGMENTINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncBounusInfo(::DBONCGFHHDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBONCGFHHDN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCBOUNUSINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncDraftInfo(::BEEFLEJAOCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEEFLEJAOCN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCDRAFTINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncSttInfo(::BEEFLEJAOCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEEFLEJAOCN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCSTTINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncModifierInfo(::HKDACEAEDDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKDACEAEDDE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCMODIFIERINFO_OFFSET))(this, a1);
		}

		::System::Void _InitRoleEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__INITROLEEFFECT_OFFSET))(this);
		}

		::System::Void _UpdateGridEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEGRIDEFFECT_OFFSET))(this);
		}

		::System::Void _UpdateSoundEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATESOUNDEFFECT_OFFSET))(this);
		}

		::System::Void _UpdateTraitBuffEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATETRAITBUFFEFFECT_OFFSET))(this);
		}

		::System::Void _UpdateRoleEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEROLEEFFECT_OFFSET))(this);
		}

		::System::Void _UpdateRolePropertyModifier()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEROLEPROPERTYMODIFIER_OFFSET))(this);
		}

		::System::Boolean CompareWithCurTeam(::NGIPBCJPFPG* a1, ::RPG::Client::GridFightTeamChangeEvent* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGIPBCJPFPG*, ::RPG::Client::GridFightTeamChangeEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_COMPAREWITHCURTEAM_OFFSET))(this, a1, a2);
		}

		::System::Void _AddStarChangedRoleToBattleChangeEvent(::RPG::Client::GridFightTeamChangeEvent* a1, ::BJGJBNJDLIK* a2, ::RPG::Client::GridFightRole* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeamChangeEvent*, ::BJGJBNJDLIK*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__ADDSTARCHANGEDROLETOBATTLECHANGEEVENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _AddRoleIDChangedRoleToBattleChangeEvent(::RPG::Client::GridFightTeamChangeEvent* a1, ::RPG::Client::GridFightRole* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeamChangeEvent*, ::RPG::Client::GridFightRole*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__ADDROLEIDCHANGEDROLETOBATTLECHANGEEVENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _AddEquipToBattleChangeEvent(::RPG::Client::GridFightTeamChangeEvent* a1, ::BJGJBNJDLIK* a2, ::ACFLKPFDHIM* a3, ::System::Int32 a4, ::RPG::Client::GridFightRole* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeamChangeEvent*, ::BJGJBNJDLIK*, ::ACFLKPFDHIM*, ::System::Int32, ::RPG::Client::GridFightRole*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__ADDEQUIPTOBATTLECHANGEEVENT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::Client::GridFightRole* _BuildDisplayRoleForNewEquip(::BJGJBNJDLIK* a1, ::RPG::Client::GridFightRole* a2, ::System::Int32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::GridFightRole*(*)(::BJGJBNJDLIK*, ::RPG::Client::GridFightRole*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__BUILDDISPLAYROLEFORNEWEQUIP_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean get_InUpdateProcess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_INUPDATEPROCESS_OFFSET))(this);
		}

		::System::Void set_InUpdateProcess(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_INUPDATEPROCESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_SeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SEASONID_OFFSET))(this);
		}

		::System::Void set_SeasonID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_SEASONID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightSeason* get_SessionSeason()
		{
			return ((::RPG::Client::GridFightSeason*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SESSIONSEASON_OFFSET))(this);
		}

		::RPG::Client::GridFightEntranceType get_EntranceType()
		{
			return ((::RPG::Client::GridFightEntranceType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ENTRANCETYPE_OFFSET))(this);
		}

		::System::Void set_EntranceType(::RPG::Client::GridFightEntranceType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEntranceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_ENTRANCETYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_DivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_DIVISIONID_OFFSET))(this);
		}

		::System::Void set_DivisionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_DIVISIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TutorialProgressID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TUTORIALPROGRESSID_OFFSET))(this);
		}

		::System::Void set_TutorialProgressID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_TUTORIALPROGRESSID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_DIVISIONLEVEL_OFFSET))(this);
		}

		::System::Boolean get_IsPromotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ISPROMOTION_OFFSET))(this);
		}

		::System::UInt32 get_SessionUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SESSIONUID_OFFSET))(this);
		}

		::System::Void set_SessionUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_SESSIONUID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOverChargeMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ISOVERCHARGEMODE_OFFSET))(this);
		}

		::System::Void set_IsOverChargeMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_ISOVERCHARGEMODE_OFFSET))(this, a1);
		}

		::CLFABOEKMJI* get_ContextData()
		{
			return ((::CLFABOEKMJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_CONTEXTDATA_OFFSET))(this);
		}

		::System::Void set_ContextData(::CLFABOEKMJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLFABOEKMJI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_CONTEXTDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ISTUTORIAL_OFFSET))(this);
		}

		::System::Boolean get_IsInitialSyncing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ISINITIALSYNCING_OFFSET))(this);
		}

		::System::Void set_IsInitialSyncing(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_ISINITIALSYNCING_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightModifierInfo* get_Modifier()
		{
			return ((::RPG::Client::GridFightModifierInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_MODIFIER_OFFSET))(this);
		}

		::CMCJGOBHEMN* get_TutorialUnlockData()
		{
			return ((::CMCJGOBHEMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TUTORIALUNLOCKDATA_OFFSET))(this);
		}

		::RPG::Client::GridFightPendingSelection* get_PendingSelection()
		{
			return ((::RPG::Client::GridFightPendingSelection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PENDINGSELECTION_OFFSET))(this);
		}

		::RPG::Client::GridFightPendingActionManager* get_PrepPendingAction()
		{
			return ((::RPG::Client::GridFightPendingActionManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PREPPENDINGACTION_OFFSET))(this);
		}

		::RPG::Client::GridFightPendingPresentationQueue* get_PendingPresentationQueue()
		{
			return ((::RPG::Client::GridFightPendingPresentationQueue*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PENDINGPRESENTATIONQUEUE_OFFSET))(this);
		}

		::RPG::Client::GridFightItemInfo* get_ItemInfo()
		{
			return ((::RPG::Client::GridFightItemInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ITEMINFO_OFFSET))(this);
		}

		::RPG::Client::GridFightPlayer* get_Player()
		{
			return ((::RPG::Client::GridFightPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PLAYER_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleShop* get_RoleShop()
		{
			return ((::RPG::Client::GridFightRoleShop*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ROLESHOP_OFFSET))(this);
		}

		::RPG::Client::GridFightGameTrait* get_GameTrait()
		{
			return ((::RPG::Client::GridFightGameTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_GAMETRAIT_OFFSET))(this);
		}

		::RPG::Client::GridFightTeam* get_Team()
		{
			return ((::RPG::Client::GridFightTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TEAM_OFFSET))(this);
		}

		::RPG::Client::GridFightStage* get_Stage()
		{
			return ((::RPG::Client::GridFightStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_STAGE_OFFSET))(this);
		}

		::RPG::Client::GridFightPortalServerData* get_Portal()
		{
			return ((::RPG::Client::GridFightPortalServerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PORTAL_OFFSET))(this);
		}

		::RPG::Client::GridFightBonusServerData* get_Bonus()
		{
			return ((::RPG::Client::GridFightBonusServerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BONUS_OFFSET))(this);
		}

		::RPG::Client::GridFightAugmentInfo* get_Augment()
		{
			return ((::RPG::Client::GridFightAugmentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_AUGMENT_OFFSET))(this);
		}

		::RPG::Client::GridFightOrbServerData* get_Orb()
		{
			return ((::RPG::Client::GridFightOrbServerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ORB_OFFSET))(this);
		}

		::RPG::Client::GridFightBattleSttInfo* get_BattleStt()
		{
			return ((::RPG::Client::GridFightBattleSttInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BATTLESTT_OFFSET))(this);
		}

		::RPG::Client::GridFightContextValue* get_ContextValue()
		{
			return ((::RPG::Client::GridFightContextValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_CONTEXTVALUE_OFFSET))(this);
		}

		::RPG::Client::GridFightTrack* get_Track()
		{
			return ((::RPG::Client::GridFightTrack*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TRACK_OFFSET))(this);
		}

		::RPG::Client::GridFightTutorialManager* get_TutorialManager()
		{
			return ((::RPG::Client::GridFightTutorialManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TUTORIALMANAGER_OFFSET))(this);
		}

		::RPG::Client::IGridFightTutorialData* get_TutorialData()
		{
			return ((::RPG::Client::IGridFightTutorialData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TUTORIALDATA_OFFSET))(this);
		}

		::RPG::Client::GridFightAssistant* get_Assistant()
		{
			return ((::RPG::Client::GridFightAssistant*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ASSISTANT_OFFSET))(this);
		}

		::RPG::Client::GridFightPrayQuestManager* get_PrayQuests()
		{
			return ((::RPG::Client::GridFightPrayQuestManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PRAYQUESTS_OFFSET))(this);
		}

		::RPG::Client::GridFightSpotLightManager* get_SpotLight()
		{
			return ((::RPG::Client::GridFightSpotLightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SPOTLIGHT_OFFSET))(this);
		}

		::RPG::Client::GridFightPetPalEffectRepository* get_PetPal()
		{
			return ((::RPG::Client::GridFightPetPalEffectRepository*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PETPAL_OFFSET))(this);
		}

		::RPG::Client::GridFightBattleResultInfo* get_BattleResult()
		{
			return ((::RPG::Client::GridFightBattleResultInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BATTLERESULT_OFFSET))(this);
		}

		::System::Void set_BattleResult(::RPG::Client::GridFightBattleResultInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBattleResultInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_BATTLERESULT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightSettleResultInfo* get_SettleResult()
		{
			return ((::RPG::Client::GridFightSettleResultInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SETTLERESULT_OFFSET))(this);
		}

		::System::Void set_SettleResult(::RPG::Client::GridFightSettleResultInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightSettleResultInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_SETTLERESULT_OFFSET))(this, a1);
		}

		::System::Boolean get_WaitManualQuiteSettle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_WAITMANUALQUITESETTLE_OFFSET))(this);
		}

		::System::Void set_WaitManualQuiteSettle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_WAITMANUALQUITESETTLE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightBattleGameContext* get_BattleGameContext()
		{
			return ((::RPG::Client::GridFightBattleGameContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BATTLEGAMECONTEXT_OFFSET))(this);
		}

	};
}
