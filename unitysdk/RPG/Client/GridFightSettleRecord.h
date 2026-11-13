#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PEIJNEFOCHI.h"
#include "unitysdk/RPG/GameCore/GridFightSettleRankType.h"
#include "unitysdk/System/Object.h"
class AFCBKJEFKPG;
class CLFABOEKMJI;
class FBNGHMHHHLL;
class FMBACDOFCAL;
class GIDEDMOPFKF;
class HAGHIKLEKGO;
class HEJJDLPNKMH;
class IJDLENJJBHJ;
class KGMCLFHAJNJ;
class LAAMIAJFOMC;
class LKHAJCACPBH;
class OBDNIEDPENN;
class OEDHMAHDECC;
class PPGEBEBPMJC;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class GridFightAugment; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightContextValue; }
namespace RPG::Client { class GridFightDamageStatisticInfo; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace RPG::Client { class GridFightMonsterData; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightPetPalEffect; }
namespace RPG::Client { class GridFightPrayQuest; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace RPG::Client { class GridFightSettleRankConfig; }
namespace RPG::Client { class GridFightSettleRecord; }
namespace RPG::Client { class GridFightSpotLightBinding; }
namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_CREATE_OFFSET UNITYSDK_OFFSET(0x1D4FD060)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E155EA0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D504C70)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETBANROLEIDS_OFFSET UNITYSDK_OFFSET(0x1D5062E0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETCONSUMABLEBYID_OFFSET UNITYSDK_OFFSET(0x1D5049B0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETEQUIPBYUID_OFFSET UNITYSDK_OFFSET(0x1D504770)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETEQUIPSBYID_OFFSET UNITYSDK_OFFSET(0x1D5048D0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETFORGEBYUID_OFFSET UNITYSDK_OFFSET(0x1D503B10)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETMEMBERBYPOS_OFFSET UNITYSDK_OFFSET(0x1D504610)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETMEMBERSBYTRAITID_OFFSET UNITYSDK_OFFSET(0x1D5044F0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETNPCBYUID_OFFSET UNITYSDK_OFFSET(0x1D503B60)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETPROJBYID_OFFSET UNITYSDK_OFFSET(0x1D503E20)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETPROJBYUID_OFFSET UNITYSDK_OFFSET(0x1D503D20)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETROLEBYUID_OFFSET UNITYSDK_OFFSET(0x1D5038B0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETROLESBYID_OFFSET UNITYSDK_OFFSET(0x1D503A20)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETROLESBYTRAIT_OFFSET UNITYSDK_OFFSET(0x1D505990)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETSPOTLIGHTBINDINGS_OFFSET UNITYSDK_OFFSET(0x1D5057E0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETSPOTLIGHTID_OFFSET UNITYSDK_OFFSET(0x1D505750)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETTRAITBYID_OFFSET UNITYSDK_OFFSET(0x1D504AD0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_AFFIXDATALIST_OFFSET UNITYSDK_OFFSET(0x1D5040F0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLCONSUMABLES_OFFSET UNITYSDK_OFFSET(0x1D504A40)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLEQUIPS_OFFSET UNITYSDK_OFFSET(0x1D504A00)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLFORGES_OFFSET UNITYSDK_OFFSET(0x1D503FB0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLMEMBERS_OFFSET UNITYSDK_OFFSET(0x1D504090)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLNPCS_OFFSET UNITYSDK_OFFSET(0x1D503F70)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLPROJECTIONS_OFFSET UNITYSDK_OFFSET(0x1D504040)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLROLES_OFFSET UNITYSDK_OFFSET(0x1D503F20)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLSPOTLIGHTS_OFFSET UNITYSDK_OFFSET(0x1E1554C0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLTRAITS_OFFSET UNITYSDK_OFFSET(0x1D504C30)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_AUGMENTSWITHCONTEXT_OFFSET UNITYSDK_OFFSET(0x1E1553A0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_AUGMENTS_OFFSET UNITYSDK_OFFSET(0x1E155380)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_BOSSINFOS_OFFSET UNITYSDK_OFFSET(0x1D504370)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0x1E154DC0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_CONTEXTVALUE_OFFSET UNITYSDK_OFFSET(0x1E154DE0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_DAMAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0x1E155E80)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_DIVISIONUPPROGRESS_OFFSET UNITYSDK_OFFSET(0x1E155070)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ENTEREDDIVISIONID_OFFSET UNITYSDK_OFFSET(0x1E154D80)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_EQUIPS_OFFSET UNITYSDK_OFFSET(0x1E155160)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_EXCEPTEDROLEIDS_OFFSET UNITYSDK_OFFSET(0x1D5040D0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_FINISHEDCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1E155030)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_FINISHEDDIVISIONID_OFFSET UNITYSDK_OFFSET(0x1E155110)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_FINISHEDROUTEID_OFFSET UNITYSDK_OFFSET(0x1E155010)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_FINISHEDSECTIONID_OFFSET UNITYSDK_OFFSET(0x1E155050)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISCURSEASON_OFFSET UNITYSDK_OFFSET(0x1E154EA0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1E1550B0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISOVERCHARGEMODE_OFFSET UNITYSDK_OFFSET(0x1E1550D0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0x1E1550F0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x1D506660)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ITEMREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1D503830)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_LEFTHP_OFFSET UNITYSDK_OFFSET(0x1D5066F0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_NPCS_OFFSET UNITYSDK_OFFSET(0x1E155180)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_PETPALEFFECTS_OFFSET UNITYSDK_OFFSET(0x1E155480)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_PORTALS_OFFSET UNITYSDK_OFFSET(0x1E155460)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_PROJECTIONS_OFFSET UNITYSDK_OFFSET(0x1E1551A0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_QUEST_OFFSET UNITYSDK_OFFSET(0x1E155E60)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_RANKTYPE_OFFSET UNITYSDK_OFFSET(0x1D506730)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1D506750)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_REASON_OFFSET UNITYSDK_OFFSET(0x1D5066B0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ROLES_OFFSET UNITYSDK_OFFSET(0x1E1551C0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1E154DF0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SEASONROLES_OFFSET UNITYSDK_OFFSET(0x1E155320)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SEASONUID_OFFSET UNITYSDK_OFFSET(0x1E154DA0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SPOTLIGHTBYROLEID_OFFSET UNITYSDK_OFFSET(0x1E1554A0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SUBSEASONID_OFFSET UNITYSDK_OFFSET(0x1E154E40)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TEAMREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1D5037F0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TEAMVALUE_OFFSET UNITYSDK_OFFSET(0x1E155090)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TOTALCOIN_OFFSET UNITYSDK_OFFSET(0x1D5066D0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TOTALHP_OFFSET UNITYSDK_OFFSET(0x1D506710)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TRAITREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1D503870)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0x1E155360)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TRIALROLEUIDS_OFFSET UNITYSDK_OFFSET(0x1E155340)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_HASSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1D5056E0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_ISROLEUNLOCK_OFFSET UNITYSDK_OFFSET(0x1D503CC0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_AUGMENTS_OFFSET UNITYSDK_OFFSET(0x1E155390)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0x1E154DD0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_DAMAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0x1E155E90)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_DIVISIONUPPROGRESS_OFFSET UNITYSDK_OFFSET(0x1E155080)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ENTEREDDIVISIONID_OFFSET UNITYSDK_OFFSET(0x1E154D90)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_EQUIPS_OFFSET UNITYSDK_OFFSET(0x1E155170)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_EXCEPTEDROLEIDS_OFFSET UNITYSDK_OFFSET(0x1D5040E0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_FINISHEDCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1E155040)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_FINISHEDROUTEID_OFFSET UNITYSDK_OFFSET(0x1E155020)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_FINISHEDSECTIONID_OFFSET UNITYSDK_OFFSET(0x1E155060)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1E1550C0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ISOVERCHARGEMODE_OFFSET UNITYSDK_OFFSET(0x1E1550E0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0x1E155100)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_LEFTHP_OFFSET UNITYSDK_OFFSET(0x1D506700)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_NPCS_OFFSET UNITYSDK_OFFSET(0x1E155190)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_PETPALEFFECTS_OFFSET UNITYSDK_OFFSET(0x1E155490)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_PORTALS_OFFSET UNITYSDK_OFFSET(0x1E155470)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_PROJECTIONS_OFFSET UNITYSDK_OFFSET(0x1E1551B0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_QUEST_OFFSET UNITYSDK_OFFSET(0x1E155E70)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_RANKTYPE_OFFSET UNITYSDK_OFFSET(0x1D506740)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_RANK_OFFSET UNITYSDK_OFFSET(0x1D506760)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_REASON_OFFSET UNITYSDK_OFFSET(0x1D5066C0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_SEASONROLES_OFFSET UNITYSDK_OFFSET(0x1E155330)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_SEASONUID_OFFSET UNITYSDK_OFFSET(0x1E154DB0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_SPOTLIGHTBYROLEID_OFFSET UNITYSDK_OFFSET(0x1E1554B0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TEAMVALUE_OFFSET UNITYSDK_OFFSET(0x1E1550A0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TOTALCOIN_OFFSET UNITYSDK_OFFSET(0x1D5066E0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TOTALHP_OFFSET UNITYSDK_OFFSET(0x1D506720)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TRAITS_OFFSET UNITYSDK_OFFSET(0x1E155370)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TRIALROLEUIDS_OFFSET UNITYSDK_OFFSET(0x1E155350)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__GETFINISHEDDIVISIONID_OFFSET UNITYSDK_OFFSET(0x1D505870)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__GET_AUGMENTSWITHCONTEXT_B__178_0_OFFSET UNITYSDK_OFFSET(0x1E156160)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__INITHACKEQUIPEFFECTS_OFFSET UNITYSDK_OFFSET(0x1D504E30)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SORTNPC_OFFSET UNITYSDK_OFFSET(0x1D5053C0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SORTROLE_OFFSET UNITYSDK_OFFSET(0x1D5051E0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__STAMPAHAGROWTHLEVELS_OFFSET UNITYSDK_OFFSET(0x1D503410)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__STAMPSPOTLIGHTSONDAMAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0x1D5031B0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCAUGMENTS_OFFSET UNITYSDK_OFFSET(0x1D501170)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCDAMAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0x1D501690)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCEQUIPS_OFFSET UNITYSDK_OFFSET(0x1D4FD3A0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCPETPAL_OFFSET UNITYSDK_OFFSET(0x1D4FFF10)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCPORTALBUFFS_OFFSET UNITYSDK_OFFSET(0x1D500C50)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCPRAYQUEST_OFFSET UNITYSDK_OFFSET(0x1D5030F0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCRANK_OFFSET UNITYSDK_OFFSET(0x1D4FD2A0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCSPOTLIGHTS_OFFSET UNITYSDK_OFFSET(0x1D5004F0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCTEAM_OFFSET UNITYSDK_OFFSET(0x1D4FE2B0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCTRAITS_OFFSET UNITYSDK_OFFSET(0x1D4FD470)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRecord_TypeDefinitionIndex = 66910;

	class GridFightSettleRecord : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGridMember*>* _AllMembers; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* _Traits_k__BackingField; // 0x18
		::RPG::Client::GridFightContextValue* _ContextValue_k__BackingField; // 0x20
		::System::Collections::Generic::IList_1<::System::UInt32>* _ModuleIDs; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _TrialRoleUIDs_k__BackingField; // 0x30
		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* _ExceptedRoleIDs_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _Equips_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::GridFightPetPalEffect*>* _PetPalEffects_k__BackingField; // 0x48
		::KGMCLFHAJNJ* _BossInfo; // 0x50
		::RPG::Client::GridFightSettleRankConfig* _Rank_k__BackingField; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>* _DamageStatistics_k__BackingField; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>* _NPCs_k__BackingField; // 0x68
		::System::Collections::Generic::List_1<::System::UInt32>* _Augments_k__BackingField; // 0x70
		::System::Collections::Generic::IList_1<::LAAMIAJFOMC*>* _Affixs; // 0x78
		::RPG::Client::GridFightPrayQuest* _Quest_k__BackingField; // 0x80
		::System::Collections::Generic::List_1<::System::UInt32>* _Portals_k__BackingField; // 0x88
		::System::Collections::Generic::List_1<::RPG::Client::GridFightProjection*>* _Projections_k__BackingField; // 0x90
		::System::Collections::Generic::List_1<::System::UInt32>* _BanRoleIds; // 0x98
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* _SeasonRoles_k__BackingField; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _SpotLightByRoleId_k__BackingField; // 0xA8
		::CLFABOEKMJI* _ContextData_k__BackingField; // 0xB0
		::RPG::GameCore::GridFightSettleRankType _RankType_k__BackingField; // 0xB8
		::System::UInt32 _FinishedChapterID_k__BackingField; // 0xBC
		::System::UInt32 _EnteredDivisionID_k__BackingField; // 0xC0
		::System::UInt32 _FinishedRouteID_k__BackingField; // 0xC4
		::System::UInt32 _TeamValue_k__BackingField; // 0xC8
		::System::Boolean _IsOverChargeMode_k__BackingField; // 0xCC
		::System::Boolean _IsFinished_k__BackingField; // 0xCD
		::System::Boolean _IsPromotion_k__BackingField; // 0xCE
		::System::Byte _padding0[0x1];
		::System::UInt32 _FinishedSectionID_k__BackingField; // 0xD0
		::System::UInt32 _TotalCoin_k__BackingField; // 0xD4
		::System::UInt32 _DivisionUpProgress_k__BackingField; // 0xD8
		::System::UInt32 _TotalHP_k__BackingField; // 0xDC
		::System::UInt32 _SeasonUID_k__BackingField; // 0xE0
		::System::Int32 _LeftHP_k__BackingField; // 0xE4
		::PEIJNEFOCHI _Reason_k__BackingField; // 0xE8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightSettleRecord* Create(::OEDHMAHDECC* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightSettleRecord*(*)(::OEDHMAHDECC*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_CREATE_OFFSET))(a1, a2);
		}

		::HEJJDLPNKMH* get_TeamRepository()
		{
			return ((::HEJJDLPNKMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TEAMREPOSITORY_OFFSET))(this);
		}

		::HAGHIKLEKGO* get_ItemRepository()
		{
			return ((::HAGHIKLEKGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ITEMREPOSITORY_OFFSET))(this);
		}

		::OBDNIEDPENN* get_TraitRepository()
		{
			return ((::OBDNIEDPENN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TRAITREPOSITORY_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* GetRoleByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETROLEBYUID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETROLESBYID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightForgeItemData* GetForgeByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETFORGEBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightNPC* GetNPCByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightNPC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETNPCBYUID_OFFSET))(this, a1);
		}

		::System::Boolean IsRoleUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_ISROLEUNLOCK_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightProjection* GetProjByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETPROJBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightProjection* GetProjByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETPROJBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* get_AllRoles()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLROLES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightNPC*>* get_AllNPCs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightNPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLNPCS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightForgeItemData*>* get_AllForges()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightForgeItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLFORGES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightProjection*>* get_AllProjections()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightProjection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLPROJECTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* get_AllMembers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLMEMBERS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* get_ExceptedRoleIDs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_EXCEPTEDROLEIDS_OFFSET))(this);
		}

		::System::Void set_ExceptedRoleIDs(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_EXCEPTEDROLEIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterAffixConfig*>* get_AffixDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterAffixConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_AFFIXDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* get_BossInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_BOSSINFOS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* GetMembersByTraitID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETMEMBERSBYTRAITID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridMember* GetMemberByPos(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETMEMBERBYPOS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* GetEquipByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETEQUIPBYUID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* GetEquipsByID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETEQUIPSBYID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightConsumableItemData* GetConsumableByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETCONSUMABLEBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* get_AllEquips()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>* get_AllConsumables()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLCONSUMABLES_OFFSET))(this);
		}

		::RPG::Client::GridFightTrait* GetTraitByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETTRAITBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* get_AllTraits()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLTRAITS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_DISPOSE_OFFSET))(this);
		}

		::System::Void _SyncRank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCRANK_OFFSET))(this);
		}

		::System::Void _SyncEquips(::System::Collections::Generic::IList_1<::IJDLENJJBHJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::IJDLENJJBHJ*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCEQUIPS_OFFSET))(this, a1);
		}

		::System::Void _SyncTeam(::OEDHMAHDECC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEDHMAHDECC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCTEAM_OFFSET))(this, a1);
		}

		::System::Void _InitHackEquipEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__INITHACKEQUIPEFFECTS_OFFSET))(this);
		}

		::System::Int32 _SortRole(::RPG::Client::GridFightSeasonRole* a1, ::RPG::Client::GridFightSeasonRole* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SORTROLE_OFFSET))(this, a1, a2);
		}

		::System::Int32 _SortNPC(::RPG::Client::GridFightNPC* a1, ::RPG::Client::GridFightNPC* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightNPC*, ::RPG::Client::GridFightNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SORTNPC_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncTraits(::System::Collections::Generic::IEnumerable_1<::FBNGHMHHHLL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::FBNGHMHHHLL*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCTRAITS_OFFSET))(this, a1);
		}

		::System::Void _SyncPortalBuffs(::System::Collections::Generic::IEnumerable_1<::GIDEDMOPFKF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::GIDEDMOPFKF*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCPORTALBUFFS_OFFSET))(this, a1);
		}

		::System::Void _SyncPetPal(::System::Collections::Generic::IEnumerable_1<::LKHAJCACPBH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::LKHAJCACPBH*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCPETPAL_OFFSET))(this, a1);
		}

		::System::Void _SyncSpotLights(::System::Collections::Generic::IEnumerable_1<::FMBACDOFCAL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::FMBACDOFCAL*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCSPOTLIGHTS_OFFSET))(this, a1);
		}

		::System::Void _StampSpotLightsOnDamageStatistics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__STAMPSPOTLIGHTSONDAMAGESTATISTICS_OFFSET))(this);
		}

		::System::Void _StampAhaGrowthLevels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__STAMPAHAGROWTHLEVELS_OFFSET))(this);
		}

		::System::Boolean HasSpotLight(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_HASSPOTLIGHT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSpotLightId(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETSPOTLIGHTID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightBinding*>* GetSpotLightBindings()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightBinding*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETSPOTLIGHTBINDINGS_OFFSET))(this);
		}

		::System::Void _SyncAugments(::System::Collections::Generic::IEnumerable_1<::PPGEBEBPMJC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::PPGEBEBPMJC*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCAUGMENTS_OFFSET))(this, a1);
		}

		::System::Void _SyncDamageStatistics(::OEDHMAHDECC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEDHMAHDECC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCDAMAGESTATISTICS_OFFSET))(this, a1);
		}

		::System::UInt32 _GetFinishedDivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__GETFINISHEDDIVISIONID_OFFSET))(this);
		}

		::System::Void _SyncPrayQuest(::Google::Protobuf::Collections::RepeatedField_1<::AFCBKJEFKPG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::AFCBKJEFKPG*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__SYNCPRAYQUEST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByTrait(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETROLESBYTRAIT_OFFSET))(this, a1);
		}

		::System::Void GetBanRoleIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GETBANROLEIDS_OFFSET))(this);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISWIN_OFFSET))(this);
		}

		::PEIJNEFOCHI get_Reason()
		{
			return ((::PEIJNEFOCHI(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_REASON_OFFSET))(this);
		}

		::System::Void set_Reason(::PEIJNEFOCHI a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEIJNEFOCHI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_REASON_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TOTALCOIN_OFFSET))(this);
		}

		::System::Void set_TotalCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TOTALCOIN_OFFSET))(this, a1);
		}

		::System::Int32 get_LeftHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_LEFTHP_OFFSET))(this);
		}

		::System::Void set_LeftHP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_LEFTHP_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TOTALHP_OFFSET))(this);
		}

		::System::Void set_TotalHP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TOTALHP_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightSettleRankType get_RankType()
		{
			return ((::RPG::GameCore::GridFightSettleRankType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_RANKTYPE_OFFSET))(this);
		}

		::System::Void set_RankType(::RPG::GameCore::GridFightSettleRankType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightSettleRankType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_RANKTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightSettleRankConfig* get_Rank()
		{
			return ((::RPG::Client::GridFightSettleRankConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::RPG::Client::GridFightSettleRankConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightSettleRankConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_RANK_OFFSET))(this, a1);
		}

		::System::UInt32 get_EnteredDivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ENTEREDDIVISIONID_OFFSET))(this);
		}

		::System::Void set_EnteredDivisionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ENTEREDDIVISIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SeasonUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SEASONUID_OFFSET))(this);
		}

		::System::Void set_SeasonUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_SEASONUID_OFFSET))(this, a1);
		}

		::CLFABOEKMJI* get_ContextData()
		{
			return ((::CLFABOEKMJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_CONTEXTDATA_OFFSET))(this);
		}

		::System::Void set_ContextData(::CLFABOEKMJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLFABOEKMJI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_CONTEXTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightContextValue* get_ContextValue()
		{
			return ((::RPG::Client::GridFightContextValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_CONTEXTVALUE_OFFSET))(this);
		}

		::System::UInt32 get_SeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SEASONID_OFFSET))(this);
		}

		::System::UInt32 get_SubSeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SUBSEASONID_OFFSET))(this);
		}

		::System::Boolean get_IsCurSeason()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISCURSEASON_OFFSET))(this);
		}

		::System::UInt32 get_FinishedRouteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_FINISHEDROUTEID_OFFSET))(this);
		}

		::System::Void set_FinishedRouteID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_FINISHEDROUTEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinishedChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_FINISHEDCHAPTERID_OFFSET))(this);
		}

		::System::Void set_FinishedChapterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_FINISHEDCHAPTERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinishedSectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_FINISHEDSECTIONID_OFFSET))(this);
		}

		::System::Void set_FinishedSectionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_FINISHEDSECTIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DivisionUpProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_DIVISIONUPPROGRESS_OFFSET))(this);
		}

		::System::Void set_DivisionUpProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_DIVISIONUPPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_TeamValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TEAMVALUE_OFFSET))(this);
		}

		::System::Void set_TeamValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TEAMVALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOverChargeMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISOVERCHARGEMODE_OFFSET))(this);
		}

		::System::Void set_IsOverChargeMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ISOVERCHARGEMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPromotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ISPROMOTION_OFFSET))(this);
		}

		::System::Void set_IsPromotion(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_ISPROMOTION_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinishedDivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_FINISHEDDIVISIONID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_Equips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_EQUIPS_OFFSET))(this);
		}

		::System::Void set_Equips(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_EQUIPS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>* get_NPCs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_NPCS_OFFSET))(this);
		}

		::System::Void set_NPCs(::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_NPCS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightProjection*>* get_Projections()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightProjection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_PROJECTIONS_OFFSET))(this);
		}

		::System::Void set_Projections(::System::Collections::Generic::List_1<::RPG::Client::GridFightProjection*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightProjection*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_PROJECTIONS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* get_Roles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* get_SeasonRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SEASONROLES_OFFSET))(this);
		}

		::System::Void set_SeasonRoles(::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_SEASONROLES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_TrialRoleUIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TRIALROLEUIDS_OFFSET))(this);
		}

		::System::Void set_TrialRoleUIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TRIALROLEUIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* get_Traits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_TRAITS_OFFSET))(this);
		}

		::System::Void set_Traits(::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_TRAITS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_Augments()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_AUGMENTS_OFFSET))(this);
		}

		::System::Void set_Augments(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_AUGMENTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>* get_AugmentsWithContext()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_AUGMENTSWITHCONTEXT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_Portals()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_PORTALS_OFFSET))(this);
		}

		::System::Void set_Portals(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_PORTALS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightPetPalEffect*>* get_PetPalEffects()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightPetPalEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_PETPALEFFECTS_OFFSET))(this);
		}

		::System::Void set_PetPalEffects(::System::Collections::Generic::List_1<::RPG::Client::GridFightPetPalEffect*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightPetPalEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_PETPALEFFECTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_SpotLightByRoleId()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_SPOTLIGHTBYROLEID_OFFSET))(this);
		}

		::System::Void set_SpotLightByRoleId(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_SPOTLIGHTBYROLEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightBinding*>* get_AllSpotLights()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightBinding*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_ALLSPOTLIGHTS_OFFSET))(this);
		}

		::RPG::Client::GridFightPrayQuest* get_Quest()
		{
			return ((::RPG::Client::GridFightPrayQuest*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_QUEST_OFFSET))(this);
		}

		::System::Void set_Quest(::RPG::Client::GridFightPrayQuest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPrayQuest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_QUEST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>* get_DamageStatistics()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_GET_DAMAGESTATISTICS_OFFSET))(this);
		}

		::System::Void set_DamageStatistics(::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD_SET_DAMAGESTATISTICS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightAugment* _get_AugmentsWithContext_b__178_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightAugment*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD__GET_AUGMENTSWITHCONTEXT_B__178_0_OFFSET))(this, a1);
		}

	};
}
