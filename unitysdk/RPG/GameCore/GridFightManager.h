#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHEGNEBMLN.h"
#include "unitysdk/NJIJCDNNBNI.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightEquipMask.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/RPG/GameCore/GridFightPropertyType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitBonusType.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
class ABOOGEJAPHO;
class ADHGIJPHLEB;
class CEOJKPJCJCL;
class EKFMIDBJDIA;
class FFLFKJJLJEJ;
class FHKKPNDLLLO;
class GMMNMPCKJEM;
class GNLNKOGLFPF;
class HFKKKFJHPHJ;
class JGGNIOIBDBC;
class JGOBLAHOHLB;
class KPEBKEODGAO;
class LFLENBDPNJN;
class OGFNMNGJPIC;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightEnemyDifficultyLvConfigRow; }
namespace RPG::GameCore { class GridFightManager_GridFightCustomValue; }
namespace RPG::GameCore { class GridFightManager_GridFightCustomValueLookup; }
namespace RPG::GameCore { class GridFightManager_GridFightProgressRule; }
namespace RPG::GameCore { class GridFightPenaltyRuleConfigRow; }
namespace RPG::GameCore { class GridFightWaveInfo; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace RPG::GameCore { class LevelCharacterDie; }
namespace RPG::GameCore { class LevelCustomizeStringEvent; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_GRIDFIGHTMANAGER_ADDBLACKBATTLEPROGRESS_OFFSET UNITYSDK_OFFSET(0xF1D0950)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_ADDDROPENTRY_OFFSET UNITYSDK_OFFSET(0xF1D6660)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_APPLYPROJECTIONPROPERTYBYTRAITID_OFFSET UNITYSDK_OFFSET(0xF1D2E40)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_APPLYPROJECTIONPROPERTY_OFFSET UNITYSDK_OFFSET(0xF1D2AC0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_CALCULATEPOWERGRIDFIGHT_OFFSET UNITYSDK_OFFSET(0xF1CFB70)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_COLLECTAVATARTRAITLIST_OFFSET UNITYSDK_OFFSET(0xF1CD7F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xF1D8AC0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF1CF560)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xF1CD3C0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETACTIVETRAITINCLUDESUBTRAITLIST_OFFSET UNITYSDK_OFFSET(0xF1CDEB0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETACTIVITYPROPERTY_OFFSET UNITYSDK_OFFSET(0xF1CEB90)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETAUGMENTSTT_OFFSET UNITYSDK_OFFSET(0xF1CF480)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARDATABYCHARACTERID_OFFSET UNITYSDK_OFFSET(0xF1CDCF0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARDATABYROLE_OFFSET UNITYSDK_OFFSET(0xF1D61D0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARDATAS_OFFSET UNITYSDK_OFFSET(0xF1D6340)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARSTAR_OFFSET UNITYSDK_OFFSET(0xF1CD700)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBACKENDALLTEAMPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xF1D5BD0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBACKENDGAMEENTITY_OFFSET UNITYSDK_OFFSET(0xF1CD5F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBACKENDOWNERPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xF1D5F80)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_ADVANCEKILLPROGRESS_OFFSET UNITYSDK_OFFSET(0xF1D68F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_AUGMENTUPLOADDATA_OFFSET UNITYSDK_OFFSET(0xF1D7520)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_BATTLEPERCENT_OFFSET UNITYSDK_OFFSET(0xF1D0730)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_DEADLINEKILLPERCENT_OFFSET UNITYSDK_OFFSET(0xF1D67B0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_LOSEHP_OFFSET UNITYSDK_OFFSET(0xF1D6740)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_PORTALUPLOADDATA_OFFSET UNITYSDK_OFFSET(0xF1D7740)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_TRAITUPLOADDATA_OFFSET UNITYSDK_OFFSET(0xF1D6A10)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_WAVESTTINFO_OFFSET UNITYSDK_OFFSET(0xF1D7960)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBEENTITYBYTRAITID_OFFSET UNITYSDK_OFFSET(0xF1D5B00)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETCOUNTDOWNENTITY_OFFSET UNITYSDK_OFFSET(0xF1CF1B0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETCURRENTTRAITBONUSLAYER_OFFSET UNITYSDK_OFFSET(0xF1CE970)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETCUSTOMPROPERTY_1_OFFSET UNITYSDK_OFFSET(0xF1CE0D0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETCUSTOMPROPERTY_OFFSET UNITYSDK_OFFSET(0xF1CDF10)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETCUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0xF1D8550)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETFILTEREDEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xF1CF090)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETLOSEGLOBALHP_OFFSET UNITYSDK_OFFSET(0xF1D7EE0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETNPCDATAS_OFFSET UNITYSDK_OFFSET(0xF1D6590)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETPENALTYBONUSRULEID_OFFSET UNITYSDK_OFFSET(0xF1CF6E0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETROLESTT_OFFSET UNITYSDK_OFFSET(0xF1CF4F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETSHOPLEVEL_OFFSET UNITYSDK_OFFSET(0xF1CD590)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETTARGETTRAITBYID_OFFSET UNITYSDK_OFFSET(0xF1CE840)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETTARGETTRAITBYUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xF1D5830)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETTEAMAUGMENTS_OFFSET UNITYSDK_OFFSET(0xF1CDE50)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETTEAMTRAITLIST_OFFSET UNITYSDK_OFFSET(0xF1CDDD0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETTRAITBONUSTHESHOLDVALUE_OFFSET UNITYSDK_OFFSET(0xF1CE640)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETTRAITSTT_OFFSET UNITYSDK_OFFSET(0xF1CF410)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETWHITEBOXSETTLEBONUSLIST_OFFSET UNITYSDK_OFFSET(0xF1CF7D0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xF1CA4B0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_ADDDYNAMICEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xF1D85D0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_BATTLEGRIDFIGHTDATA_OFFSET UNITYSDK_OFFSET(0xF1D8540)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_BLACKBATTLEPROGRESS_OFFSET UNITYSDK_OFFSET(0xF1D7EC0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_BLOCKBATTLELOSE_OFFSET UNITYSDK_OFFSET(0xF1CA4E0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_CURRENTBATTLEPROGRESS_OFFSET UNITYSDK_OFFSET(0xF1CFAB0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_DEADLINEKILLPROGRESS_OFFSET UNITYSDK_OFFSET(0xF1D84C0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_EXTRAPROPERTYOPENED_OFFSET UNITYSDK_OFFSET(0xF1CA4C0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_GLOBALVALUEMAP_OFFSET UNITYSDK_OFFSET(0xF1D84E0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_GRIDFIGHTSTATISTICS_OFFSET UNITYSDK_OFFSET(0xF1CF3F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_HASBACKENDROLE_OFFSET UNITYSDK_OFFSET(0xF1CA4D0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_MONSTERDIFFICULTYLVROW_OFFSET UNITYSDK_OFFSET(0xF1D85B0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_OWNERGAMEMODE_OFFSET UNITYSDK_OFFSET(0xF1CA840)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_SHOWTRAITEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xF1D84A0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_TOTALBATTLEPROGRESS_OFFSET UNITYSDK_OFFSET(0xF1CFB10)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_MANUALLYSTATISTIC_OFFSET UNITYSDK_OFFSET(0xF1CD430)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_ONAFTERPLAYERCREATE_OFFSET UNITYSDK_OFFSET(0xF1D17B0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xF1CBD50)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xF1CA4F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_REGISTERPROGRESSTARGETREMAP_OFFSET UNITYSDK_OFFSET(0xF1D85F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SETAUTOREFRESHGRIDFIGHTPROGRESSUI_OFFSET UNITYSDK_OFFSET(0xF1D0330)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SETCUSTOMPROPERTY_1_OFFSET UNITYSDK_OFFSET(0xF1CE5C0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SETCUSTOMPROPERTY_OFFSET UNITYSDK_OFFSET(0xF1CE290)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SETGLOBALHP_OFFSET UNITYSDK_OFFSET(0xF1CF6A0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SET_ADDDYNAMICEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xF1D85E0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SET_BLACKBATTLEPROGRESS_OFFSET UNITYSDK_OFFSET(0xF1D7ED0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SET_DEADLINEKILLPROGRESS_OFFSET UNITYSDK_OFFSET(0xF1D84D0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SET_GRIDFIGHTSTATISTICS_OFFSET UNITYSDK_OFFSET(0xF1CF400)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SET_MONSTERDIFFICULTYLVROW_OFFSET UNITYSDK_OFFSET(0xF1D85C0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SET_SHOWTRAITEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xF1D84B0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_TRIGGERNEXTWAVE_OFFSET UNITYSDK_OFFSET(0xF1D02E0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_TRIGGERSTAGEBONUS_OFFSET UNITYSDK_OFFSET(0xF1CF780)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_TRIGGERTRAITBONUS_OFFSET UNITYSDK_OFFSET(0xF1CF740)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__BINDROLECUSTOMVALUELOOKUP_OFFSET UNITYSDK_OFFSET(0xF1D1960)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__CACHETRAITBE_OFFSET UNITYSDK_OFFSET(0xF1D5920)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__CALCMOONGAMETRAITBONUSLAYER_OFFSET UNITYSDK_OFFSET(0xF1CCFE0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__CREATEBACKENDENTITYFORLINUPDATA_OFFSET UNITYSDK_OFFSET(0xF1D3900)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__CREATEROLECUSTOMVALUELOOKUP_OFFSET UNITYSDK_OFFSET(0xF1D33F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__GETORBINDROLECUSTOMVALUELOOKUP_OFFSET UNITYSDK_OFFSET(0xF1CE150)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__INITBATTLEPRELOADPROVIDER_OFFSET UNITYSDK_OFFSET(0xF1CBCC0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__INITBEMAPABILITY_OFFSET UNITYSDK_OFFSET(0xF1D4810)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__INITELATIONEQUIPS_OFFSET UNITYSDK_OFFSET(0xF1D5330)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__INITMAZEBUFFENHANCE_OFFSET UNITYSDK_OFFSET(0xF1D4AB0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ISTRAITINCLUDEBE_OFFSET UNITYSDK_OFFSET(0xF1D5730)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONBATTLEPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0xF1D04A0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONCREATEPLAYERTEAMFINISH_OFFSET UNITYSDK_OFFSET(0xF1D3780)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONCUSTOMVALUECHANGED_OFFSET UNITYSDK_OFFSET(0xF1D31E0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONLEVELBATTLEEVENTCREATE_OFFSET UNITYSDK_OFFSET(0xF1D4790)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONLEVELCUSTOMSTRING_OFFSET UNITYSDK_OFFSET(0xF1D0B30)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONLEVELINFINITEWAVEPROGRESSCHANGE_OFFSET UNITYSDK_OFFSET(0xF1D3E60)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONPROGRESSTARGETREMAPPED_OFFSET UNITYSDK_OFFSET(0xF1D8320)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONSHOWTRAITEFFECT_OFFSET UNITYSDK_OFFSET(0xF1D8370)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__POSTONALLROLECREATEDEND_OFFSET UNITYSDK_OFFSET(0xF1D1770)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__POSTUPDATEROLEDATA_OFFSET UNITYSDK_OFFSET(0xF1D2480)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__PRECHECKLIGHTTEAM_OFFSET UNITYSDK_OFFSET(0xF1D24D0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__PRECHECKROLEDATA_OFFSET UNITYSDK_OFFSET(0xF1D1FD0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__RESOLVETRAITLEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0xF1D29B0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPACTIVETRAITLEVELGRAPHS_OFFSET UNITYSDK_OFFSET(0xF1CD0A0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPAUGMENTDATA_OFFSET UNITYSDK_OFFSET(0xF1CBC40)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPBACKENDAVATARABILITY_OFFSET UNITYSDK_OFFSET(0xF1D0C90)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPGLOBALVALUEDATA_OFFSET UNITYSDK_OFFSET(0xF1CA850)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPGRIDFIGHTDAMAGECARRYOVERRIDE_OFFSET UNITYSDK_OFFSET(0xF1D1A50)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPPORTALDATA_OFFSET UNITYSDK_OFFSET(0xF1CBC80)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPPROGRESSSTATISTICS_OFFSET UNITYSDK_OFFSET(0xF1CCD20)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPROLEDATA_OFFSET UNITYSDK_OFFSET(0xF1CAAB0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPTRAITDATA_OFFSET UNITYSDK_OFFSET(0xF1CAF10)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SYNCPROGRESSDYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0xF1D0540)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SYNCROLECUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0xF1D3320)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__UPDATEGRIDFIGHTPROGRESSUI_OFFSET UNITYSDK_OFFSET(0xF1D03E0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__UPDATEROLEBACKENDEQUIPMENTEFFECT_OFFSET UNITYSDK_OFFSET(0xF1D1EC0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__UPDATEROLEBACKENDRANKLIST_OFFSET UNITYSDK_OFFSET(0xF1D1D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightManager_TypeDefinitionIndex = 57382;

	class GridFightManager : public ::LHHEGNEBMLN
	{
	public:
		::RPG::GameCore::GameEntity* _CountDownEntity; // 0x48
		::System::Collections::Generic::List_1<::KPEBKEODGAO*>* _ShowTraitEffectList_k__BackingField; // 0x50
		::RPG::GameCore::GridFightManager_GridFightCustomValueLookup* _CustomValueLookUp; // 0x58
		::System::Collections::Generic::List_1<::NJIJCDNNBNI>* BattleDropList; // 0x60
		::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow* _MonsterDifficultyLvRow_k__BackingField; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* _BeEntityByTraitID; // 0x70
		::CEOJKPJCJCL* _GridFightStatistics_k__BackingField; // 0x78
		::RPG::GameCore::GridFightPenaltyRuleConfigRow* _PenaltyRuleConfigRow; // 0x80
		::System::Collections::Generic::List_1<::System::Object*>* _WaveKillMonsterRecordData; // 0x88
		::RPG::GameCore::StageRow* _StageConfig; // 0x90
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Object*>* _RoleCustomValueLookUp; // 0x98
		::GMMNMPCKJEM* _BattleGridFight; // 0xA0
		::RPG::GameCore::GridFightManager_GridFightProgressRule* _GridFightProgressRule; // 0xA8
		::RPG::GameCore::GridFightWaveInfo* _NextWaveInfo; // 0xB0
		::System::Collections::Generic::List_1<::System::UInt32>* _KillMonsterRuntimeIDSet; // 0xB8
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _BackendEntityList; // 0xC0
		::RPG::GameCore::FixPoint _GridFightTraitEffect_UpgradeBasicEquipCount; // 0xC8
		::RPG::GameCore::FixPoint _DeadLineKillProgress_k__BackingField; // 0xD0
		::RPG::GameCore::FixPoint _CostGlobalHp; // 0xD8
		::System::Int32 _CurrentWaveIndex; // 0xE0
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint _PhanionUniqueAddValue; // 0xE8
		::System::Boolean _ShowGridFightProgress; // 0xF0
		::System::Boolean _bSkipWaves; // 0xF1
		::System::Boolean _ForceFullProgress; // 0xF2
		::System::Byte _padding1[0x1];
		::System::UInt32 _AddDynamicEquipCount_k__BackingField; // 0xF4
		::RPG::GameCore::FixPoint _BlackBattleProgress_k__BackingField; // 0xF8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
		{
			return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
		}

		::System::Boolean get_ExtraPropertyOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_EXTRAPROPERTYOPENED_OFFSET))(this);
		}

		::System::Boolean get_HasBackendRole()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_HASBACKENDROLE_OFFSET))(this);
		}

		::System::Boolean get_BlockBattleLose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_BLOCKBATTLELOSE_OFFSET))(this);
		}

		::System::Void OnInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_ONINITIALIZE_OFFSET))(this);
		}

		::System::Void _InitBattlePreloadProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__INITBATTLEPRELOADPROVIDER_OFFSET))(this);
		}

		::System::Void OnBattleInstanceCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_ONBATTLEINSTANCECREATED_OFFSET))(this);
		}

		::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GENSTATISTICS_OFFSET))(this, a1);
		}

		::System::Void ManuallyStatistic(::RPG::GameCore::JsonEnum* a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnum*, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_MANUALLYSTATISTIC_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetShopLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETSHOPLEVEL_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetBackendGameEntity(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBACKENDGAMEENTITY_OFFSET))(this, a1);
		}

		::System::UInt32 GetAvatarStar(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARSTAR_OFFSET))(this, a1);
		}

		::RPG::PoolList_1<::System::UInt32>* CollectAvatarTraitList(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::RPG::PoolList_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_COLLECTAVATARTRAITLIST_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* GetTeamTraitList(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETTEAMTRAITLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::FFLFKJJLJEJ*>* GetTeamAugments()
		{
			return ((::System::Collections::Generic::List_1<::FFLFKJJLJEJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETTEAMAUGMENTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* GetActiveTraitIncludeSubTraitList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETACTIVETRAITINCLUDESUBTRAITLIST_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetCustomProperty(::System::String* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETCUSTOMPROPERTY_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetCustomProperty_1(::System::String* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETCUSTOMPROPERTY_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetCustomProperty(::System::String* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SETCUSTOMPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void SetCustomProperty_1(::System::String* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SETCUSTOMPROPERTY_1_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint GetTraitBonusThesholdValue(::System::UInt32 a1, ::RPG::GameCore::GridFightTraitBonusType a2, ::System::Int32 a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GridFightTraitBonusType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETTRAITBONUSTHESHOLDVALUE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint GetCurrentTraitBonusLayer(::System::UInt32 a1, ::RPG::GameCore::GridFightTraitBonusType a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GridFightTraitBonusType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETCURRENTTRAITBONUSLAYER_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint _CalcMoonGameTraitBonusLayer()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__CALCMOONGAMETRAITBONUSLAYER_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetActivityProperty(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GridFightPropertyType a2, ::RPG::GameCore::GridFightEquipMask a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GridFightPropertyType, ::RPG::GameCore::GridFightEquipMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETACTIVITYPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetFilteredEquipCount(::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* a1, ::RPG::GameCore::GridFightEquipMask a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>*, ::RPG::GameCore::GridFightEquipMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETFILTEREDEQUIPCOUNT_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* GetCountdownEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETCOUNTDOWNENTITY_OFFSET))(this);
		}

		::CEOJKPJCJCL* get_GridFightStatistics()
		{
			return ((::CEOJKPJCJCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_GRIDFIGHTSTATISTICS_OFFSET))(this);
		}

		::System::Void set_GridFightStatistics(::CEOJKPJCJCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEOJKPJCJCL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SET_GRIDFIGHTSTATISTICS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::OGFNMNGJPIC*>* GetTraitStt()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::OGFNMNGJPIC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETTRAITSTT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::OGFNMNGJPIC*>* GetAugmentStt()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::OGFNMNGJPIC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETAUGMENTSTT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OGFNMNGJPIC*>* GetRoleStt()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OGFNMNGJPIC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETROLESTT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetGlobalHp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SETGLOBALHP_OFFSET))(this);
		}

		::System::UInt32 GetPenaltyBonusRuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETPENALTYBONUSRULEID_OFFSET))(this);
		}

		::System::Void TriggerTraitBonus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_TRIGGERTRAITBONUS_OFFSET))(this);
		}

		::System::Void TriggerStageBonus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_TRIGGERSTAGEBONUS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetWhiteboxSettleBonusList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETWHITEBOXSETTLEBONUSLIST_OFFSET))(this);
		}

		::System::Void CalculatePowerGridFight(::RPG::GameCore::BattleGridFightAvatarData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_CALCULATEPOWERGRIDFIGHT_OFFSET))(this, a1, a2);
		}

		::System::Void TriggerNextWave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_TRIGGERNEXTWAVE_OFFSET))(this);
		}

		::System::Void SetAutoRefreshGridFightProgressUI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SETAUTOREFRESHGRIDFIGHTPROGRESSUI_OFFSET))(this, a1);
		}

		::System::Void _OnBattleProgressChanged(::GNLNKOGLFPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNLNKOGLFPF*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONBATTLEPROGRESSCHANGED_OFFSET))(this, a1);
		}

		::System::Void AddBlackBattleProgress(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_ADDBLACKBATTLEPROGRESS_OFFSET))(this, a1);
		}

		::System::Void _SyncProgressDynamicValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SYNCPROGRESSDYNAMICVALUES_OFFSET))(this);
		}

		::System::Void _OnLevelCustomString(::RPG::GameCore::LevelCustomizeStringEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCustomizeStringEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONLEVELCUSTOMSTRING_OFFSET))(this, a1);
		}

		::System::Void OnAfterPlayerCreate(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_ONAFTERPLAYERCREATE_OFFSET))(this, a1);
		}

		::System::Void _SetupGridFightDamageCarryOverride(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPGRIDFIGHTDAMAGECARRYOVERRIDE_OFFSET))(this, a1);
		}

		::System::Void _SetupBackendAvatarAbility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPBACKENDAVATARABILITY_OFFSET))(this);
		}

		::System::Void _PostOnAllRoleCreatedEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__POSTONALLROLECREATEDEND_OFFSET))(this);
		}

		::System::Void _UpdateRoleBackendRankList(::RPG::GameCore::BattleGridFightAvatarData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__UPDATEROLEBACKENDRANKLIST_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateRoleBackendEquipmentEffect(::RPG::GameCore::BattleGridFightAvatarData* a1, ::Il2CppArray<::JGGNIOIBDBC*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*, ::Il2CppArray<::JGGNIOIBDBC*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__UPDATEROLEBACKENDEQUIPMENTEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupRoleData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPROLEDATA_OFFSET))(this);
		}

		::System::Void _PrecheckRoleData(::RPG::GameCore::BattleGridFightAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__PRECHECKROLEDATA_OFFSET))(this, a1);
		}

		::System::Void _PrecheckLightTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__PRECHECKLIGHTTEAM_OFFSET))(this);
		}

		::System::Void _PostUpdateRoleData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__POSTUPDATEROLEDATA_OFFSET))(this);
		}

		::System::Void _SetupTraitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPTRAITDATA_OFFSET))(this);
		}

		::System::Void _SetupActiveTraitLevelGraphs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPACTIVETRAITLEVELGRAPHS_OFFSET))(this);
		}

		::System::String* _ResolveTraitLevelGraphPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__RESOLVETRAITLEVELGRAPHPATH_OFFSET))(this, a1);
		}

		::System::Void _SetupAugmentData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPAUGMENTDATA_OFFSET))(this);
		}

		::System::Void _SetupPortalData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPPORTALDATA_OFFSET))(this);
		}

		::System::Void _SetupGlobalValueData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPGLOBALVALUEDATA_OFFSET))(this);
		}

		::System::Void ApplyProjectionProperty(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_APPLYPROJECTIONPROPERTY_OFFSET))(this, a1);
		}

		::System::Void ApplyProjectionPropertyByTraitID(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_APPLYPROJECTIONPROPERTYBYTRAITID_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCustomValueChanged(::RPG::GameCore::GridFightManager_GridFightCustomValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightManager_GridFightCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONCUSTOMVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void _SyncRoleCustomValue(::RPG::GameCore::GridFightManager_GridFightCustomValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightManager_GridFightCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SYNCROLECUSTOMVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightManager_GridFightCustomValueLookup* _GetOrBindRoleCustomValueLookup(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GridFightManager_GridFightCustomValueLookup*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__GETORBINDROLECUSTOMVALUELOOKUP_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightManager_GridFightCustomValueLookup* _BindRoleCustomValueLookup(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::BattleGridFightAvatarData* a2)
		{
			return ((::RPG::GameCore::GridFightManager_GridFightCustomValueLookup*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__BINDROLECUSTOMVALUELOOKUP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GridFightManager_GridFightCustomValueLookup* _CreateRoleCustomValueLookup(::RPG::GameCore::BattleGridFightAvatarData* a1)
		{
			return ((::RPG::GameCore::GridFightManager_GridFightCustomValueLookup*(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__CREATEROLECUSTOMVALUELOOKUP_OFFSET))(this, a1);
		}

		::System::Void _OnCreatePlayerTeamFinish(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONCREATEPLAYERTEAMFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnLevelInfiniteWaveProgressChange(::RPG::GameCore::LevelCharacterDie* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONLEVELINFINITEWAVEPROGRESSCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnLevelBattleEventCreate(::RPG::GameCore::LevelBattleEventCreate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONLEVELBATTLEEVENTCREATE_OFFSET))(this, a1);
		}

		::System::Void _InitBEMapAbility(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__INITBEMAPABILITY_OFFSET))(this, a1);
		}

		::System::Void _InitMazeBuffEnhance(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__INITMAZEBUFFENHANCE_OFFSET))(this, a1);
		}

		::System::Void _InitElationEquips(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__INITELATIONEQUIPS_OFFSET))(this, a1);
		}

		::System::Boolean _IsTraitIncludeBE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::BattleGridFightTeamTraitData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ISTRAITINCLUDEBE_OFFSET))(this, a1, a2);
		}

		::System::Void _CacheTraitBE(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__CACHETRAITBE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* GetBEEntityByTraitID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBEENTITYBYTRAITID_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleGridFightTeamTraitData* GetTargetTraitByUniqueName(::System::String* a1)
		{
			return ((::RPG::GameCore::BattleGridFightTeamTraitData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETTARGETTRAITBYUNIQUENAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleGridFightTeamTraitData* GetTargetTraitByID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattleGridFightTeamTraitData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETTARGETTRAITBYID_OFFSET))(this, a1);
		}

		::RPG::PoolList_1<::RPG::GameCore::AvatarPropertyValue*>* GetBackendAllTeamPropertyList()
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBACKENDALLTEAMPROPERTYLIST_OFFSET))(this);
		}

		::RPG::PoolList_1<::RPG::GameCore::AvatarPropertyValue*>* GetBackendOwnerPropertyList(::System::UInt32 a1)
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBACKENDOWNERPROPERTYLIST_OFFSET))(this, a1);
		}

		::System::Void _UpdateGridFightProgressUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__UPDATEGRIDFIGHTPROGRESSUI_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* _CreateBackendEntityForLinupData(::RPG::GameCore::LineUpCharacter* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::LineUpCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__CREATEBACKENDENTITYFORLINUPDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleGridFightAvatarData* GetAvatarDataByCharacterID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARDATABYCHARACTERID_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleGridFightAvatarData* GetAvatarDataByRole(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARDATABYROLE_OFFSET))(this, a1);
		}

		::RPG::PoolList_1<::RPG::GameCore::BattleGridFightAvatarData*>* GetAvatarDatas(::RPG::GameCore::GridFightPreset a1)
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::BattleGridFightAvatarData*>*(*)(::PVOID, ::RPG::GameCore::GridFightPreset))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARDATAS_OFFSET))(this, a1);
		}

		::RPG::PoolList_1<::ABOOGEJAPHO*>* GetNPCDatas()
		{
			return ((::RPG::PoolList_1<::ABOOGEJAPHO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETNPCDATAS_OFFSET))(this);
		}

		::System::Void AddDropEntry(::RPG::GameCore::GameEntity* a1, ::NJIJCDNNBNI a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::NJIJCDNNBNI))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_ADDDROPENTRY_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetBattleRst_LoseHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_LOSEHP_OFFSET))(this);
		}

		::System::UInt32 GetBattleRst_BattlePercent(::System::Boolean a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_BATTLEPERCENT_OFFSET))(this, a1);
		}

		::System::UInt32 GetBattleRst_DeadLineKillPercent()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_DEADLINEKILLPERCENT_OFFSET))(this);
		}

		::System::UInt32 GetBattleRst_AdvanceKillProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_ADVANCEKILLPROGRESS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::ADHGIJPHLEB*>* GetBattleRst_TraitUploadData()
		{
			return ((::System::Collections::Generic::List_1<::ADHGIJPHLEB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_TRAITUPLOADDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HFKKKFJHPHJ*>* GetBattleRst_AugmentUploadData()
		{
			return ((::System::Collections::Generic::List_1<::HFKKKFJHPHJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_AUGMENTUPLOADDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FHKKPNDLLLO*>* GetBattleRst_PortalUploadData()
		{
			return ((::System::Collections::Generic::List_1<::FHKKPNDLLLO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_PORTALUPLOADDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::LFLENBDPNJN*>* GetBattleRst_WaveSttInfo()
		{
			return ((::System::Collections::Generic::List_1<::LFLENBDPNJN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_WAVESTTINFO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CurrentBattleProgress()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_CURRENTBATTLEPROGRESS_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_TotalBattleProgress()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_TOTALBATTLEPROGRESS_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BlackBattleProgress()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_BLACKBATTLEPROGRESS_OFFSET))(this);
		}

		::System::Void set_BlackBattleProgress(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SET_BLACKBATTLEPROGRESS_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetLoseGlobalHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETLOSEGLOBALHP_OFFSET))(this);
		}

		::System::Void _SetupProgressStatistics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPPROGRESSSTATISTICS_OFFSET))(this);
		}

		::System::Void _OnProgressTargetRemapped(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONPROGRESSTARGETREMAPPED_OFFSET))(this, a1, a2);
		}

		::System::Void _OnShowTraitEffect(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONSHOWTRAITEFFECT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::KPEBKEODGAO*>* get_ShowTraitEffectList()
		{
			return ((::System::Collections::Generic::List_1<::KPEBKEODGAO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_SHOWTRAITEFFECTLIST_OFFSET))(this);
		}

		::System::Void set_ShowTraitEffectList(::System::Collections::Generic::List_1<::KPEBKEODGAO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KPEBKEODGAO*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SET_SHOWTRAITEFFECTLIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::TurnBasedGameMode* get_OwnerGameMode()
		{
			return ((::RPG::GameCore::TurnBasedGameMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_OWNERGAMEMODE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_DeadLineKillProgress()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_DEADLINEKILLPROGRESS_OFFSET))(this);
		}

		::System::Void set_DeadLineKillProgress(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SET_DEADLINEKILLPROGRESS_OFFSET))(this, a1);
		}

		::JGOBLAHOHLB* get_GlobalValueMap()
		{
			return ((::JGOBLAHOHLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_GLOBALVALUEMAP_OFFSET))(this);
		}

		::GMMNMPCKJEM* get_BattleGridFightData()
		{
			return ((::GMMNMPCKJEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_BATTLEGRIDFIGHTDATA_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetCustomValue(::System::String* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETCUSTOMVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow* get_MonsterDifficultyLvRow()
		{
			return ((::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_MONSTERDIFFICULTYLVROW_OFFSET))(this);
		}

		::System::Void set_MonsterDifficultyLvRow(::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SET_MONSTERDIFFICULTYLVROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_AddDynamicEquipCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_ADDDYNAMICEQUIPCOUNT_OFFSET))(this);
		}

		::System::Void set_AddDynamicEquipCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SET_ADDDYNAMICEQUIPCOUNT_OFFSET))(this, a1);
		}

		::System::Void RegisterProgressTargetRemap(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_REGISTERPROGRESSTARGETREMAP_OFFSET))(this, a1, a2);
		}

	};
}
