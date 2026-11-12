#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/DropRateType.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IdleLiveNodeType.h"
#include "unitysdk/System/Object.h"
class DAENFFIDKPB;
class JBIDJHKBOFD;
namespace Proto { class ItemList; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveBossData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveChapter; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::GameCore { class IdleLiveNodeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_CTOR_OFFSET UNITYSDK_OFFSET(0xCDE00A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETALLREWARDSDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xCDE0E50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETCURSUBNODEPROGRESS_OFFSET UNITYSDK_OFFSET(0xCDE0D00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETDROPRATE_OFFSET UNITYSDK_OFFSET(0xCDE1090)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETMAXSUBNODEPROGRESS_OFFSET UNITYSDK_OFFSET(0xCDE0E00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETNODEICON_OFFSET UNITYSDK_OFFSET(0xCDE08C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETRANKTEXTID_OFFSET UNITYSDK_OFFSET(0xCDE1220)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETSTAGEID_OFFSET UNITYSDK_OFFSET(0xCDE0C10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0xCDDFFB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_BOSSDATA_OFFSET UNITYSDK_OFFSET(0xCDE0050)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CANTRIGGERAMPHOREUSBUFF_OFFSET UNITYSDK_OFFSET(0xCDE0090)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0xCDDFF10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CHATPHASE_OFFSET UNITYSDK_OFFSET(0xCDDFF70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CHESTDROPRATE_OFFSET UNITYSDK_OFFSET(0xCDDFF80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CRYSTALDROPRATE_OFFSET UNITYSDK_OFFSET(0xCDDFFA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_DISPLAYREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xCDE0070)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_EMOJIPHASEID_OFFSET UNITYSDK_OFFSET(0xCDE0030)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xCDDFF30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_ISAUTONEXTNODE_OFFSET UNITYSDK_OFFSET(0xCDE0000)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xCDDFF50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_LIVEROOMEXPGAINONFINISHED_OFFSET UNITYSDK_OFFSET(0xCDE0040)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_OWNERCHAPTER_OFFSET UNITYSDK_OFFSET(0xCDDFED0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_RECOMMENDCRYSTALNUM_OFFSET UNITYSDK_OFFSET(0xCDC6D10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_RECOMMENDDUNGEONFLOOR_OFFSET UNITYSDK_OFFSET(0xCDC6D70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_SUBNODEINDEX_OFFSET UNITYSDK_OFFSET(0xCDCF0A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_SUGGESTPOWER_OFFSET UNITYSDK_OFFSET(0xCDDFFD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_TICKETDROPRATE_OFFSET UNITYSDK_OFFSET(0xCDDFF90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_TYPETITLE_OFFSET UNITYSDK_OFFSET(0xCDE0010)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xCDCF050)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_HASBATTLE_OFFSET UNITYSDK_OFFSET(0xCDE0A10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_HASDROPRATEINCREASE_OFFSET UNITYSDK_OFFSET(0xCDE1100)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_ISATLASTSUBNODE_OFFSET UNITYSDK_OFFSET(0xCDE0C60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_ISBOSSNODE_OFFSET UNITYSDK_OFFSET(0xCDD1C90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_ISEVENTNODE_OFFSET UNITYSDK_OFFSET(0xCDE0A60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_ISSHOWBOSSSUCCHINT_OFFSET UNITYSDK_OFFSET(0xCDE0AB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0xCDDFFC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_BOSSDATA_OFFSET UNITYSDK_OFFSET(0xCDE0060)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_CHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0xCDDFF20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_DISPLAYREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xCDE0080)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xCDDFF40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xCDDFF60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_SUGGESTPOWER_OFFSET UNITYSDK_OFFSET(0xCDDFFF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_TYPETITLE_OFFSET UNITYSDK_OFFSET(0xCDE0020)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_UPDATECURSUBNODE_OFFSET UNITYSDK_OFFSET(0xCDE0B80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_UPDATEDISPLAYREWARDS_OFFSET UNITYSDK_OFFSET(0xCDE0B00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__GETCURSUBNODEPROGRESS_B__89_0_OFFSET UNITYSDK_OFFSET(0xCDE1400)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__INITCURSUBNODE_OFFSET UNITYSDK_OFFSET(0xCDE0760)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__INITSUBNODES_OFFSET UNITYSDK_OFFSET(0xCDE0350)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__INITTYPEDATA_OFFSET UNITYSDK_OFFSET(0xCDE02C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__TRYINITBOSSDATA_OFFSET UNITYSDK_OFFSET(0xCDE07E0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveNode_TypeDefinitionIndex = 77477;

	class IdleLiveNode : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _PossibleEventIDs; // 0x10
		::System::String* _BGMState_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::JBIDJHKBOFD*>* _SubNodes; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _DisplayRewardItems_k__BackingField; // 0x28
		::RPG::Client::ActivityIdleLive::IdleLiveBossData* _BossData_k__BackingField; // 0x30
		::RPG::Client::ActivityIdleLive::IdleLiveChapter* _OwnerChapter; // 0x38
		::DAENFFIDKPB* _NodeIconProvider; // 0x40
		::JBIDJHKBOFD* _CurSubNode; // 0x48
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _SuggestPower_k__BackingField; // 0x50
		::RPG::Client::TextID _TypeTitle_k__BackingField; // 0x68
		::System::UInt32 _TicketDropRate_k__BackingField; // 0x78
		::System::UInt32 _CrystalDropRate_k__BackingField; // 0x7C
		::System::UInt32 _EmojiPhaseId_k__BackingField; // 0x80
		::System::UInt32 _ChapterIndex_k__BackingField; // 0x84
		::System::UInt32 _ChatPhase_k__BackingField; // 0x88
		::RPG::GameCore::IdleLiveNodeType _Type; // 0x8C
		::System::UInt32 _IdleIncome; // 0x90
		::System::UInt32 _LiveRoomExpGainOnFinished_k__BackingField; // 0x94
		::System::UInt32 _ChestDropRate_k__BackingField; // 0x98
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint _RankATimeLimit; // 0xA0
		::System::Boolean _IsFinished_k__BackingField; // 0xA8
		::System::Boolean _IsAutoNextNode_k__BackingField; // 0xA9
		::System::Boolean _CanTriggerAmphoreusBuff_k__BackingField; // 0xAA
		::System::Byte _padding1[0x1];
		::System::UInt32 _Index_k__BackingField; // 0xAC
		::RPG::GameCore::FixPoint _RankSTimeLimit; // 0xB0
		::System::Void _ctor(::RPG::GameCore::IdleLiveNodeRow* a1, ::DAENFFIDKPB* a2, ::RPG::Client::ActivityIdleLive::IdleLiveChapter* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveNodeRow*, ::DAENFFIDKPB*, ::RPG::Client::ActivityIdleLive::IdleLiveChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::IdleLiveNodeType get_Type()
		{
			return ((::RPG::GameCore::IdleLiveNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveChapter* get_OwnerChapter()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveChapter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_OWNERCHAPTER_OFFSET))(this);
		}

		::System::UInt32 get_ChapterIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CHAPTERINDEX_OFFSET))(this);
		}

		::System::Void set_ChapterIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_CHAPTERINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_INDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_SubNodeIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_SUBNODEINDEX_OFFSET))(this);
		}

		::System::UInt64 get_RecommendCrystalNum()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_RECOMMENDCRYSTALNUM_OFFSET))(this);
		}

		::System::UInt16 get_RecommendDungeonFloor()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_RECOMMENDDUNGEONFLOOR_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChatPhase()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CHATPHASE_OFFSET))(this);
		}

		::System::UInt32 get_ChestDropRate()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CHESTDROPRATE_OFFSET))(this);
		}

		::System::UInt32 get_TicketDropRate()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_TICKETDROPRATE_OFFSET))(this);
		}

		::System::UInt32 get_CrystalDropRate()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CRYSTALDROPRATE_OFFSET))(this);
		}

		::System::String* get_BGMState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_BGMSTATE_OFFSET))(this);
		}

		::System::Void set_BGMState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_BGMSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal get_SuggestPower()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_SUGGESTPOWER_OFFSET))(this);
		}

		::System::Void set_SuggestPower(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_SUGGESTPOWER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAutoNextNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_ISAUTONEXTNODE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TypeTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_TYPETITLE_OFFSET))(this);
		}

		::System::Void set_TypeTitle(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_TYPETITLE_OFFSET))(this, a1);
		}

		::System::UInt32 get_EmojiPhaseId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_EMOJIPHASEID_OFFSET))(this);
		}

		::System::UInt32 get_LiveRoomExpGainOnFinished()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_LIVEROOMEXPGAINONFINISHED_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveBossData* get_BossData()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveBossData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_BOSSDATA_OFFSET))(this);
		}

		::System::Void set_BossData(::RPG::Client::ActivityIdleLive::IdleLiveBossData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBossData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_BOSSDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_DisplayRewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_DISPLAYREWARDITEMS_OFFSET))(this);
		}

		::System::Void set_DisplayRewardItems(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_SET_DISPLAYREWARDITEMS_OFFSET))(this, a1);
		}

		::System::Boolean get_CanTriggerAmphoreusBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GET_CANTRIGGERAMPHOREUSBUFF_OFFSET))(this);
		}

		::System::Void _InitTypeData(::RPG::GameCore::IdleLiveNodeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveNodeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__INITTYPEDATA_OFFSET))(this, a1);
		}

		::System::Void _InitSubNodes(::RPG::GameCore::IdleLiveNodeRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveNodeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__INITSUBNODES_OFFSET))(this, a1);
		}

		::System::Void _InitCurSubNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__INITCURSUBNODE_OFFSET))(this);
		}

		::System::Void _TryInitBossData(::RPG::GameCore::IdleLiveNodeType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveNodeType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__TRYINITBOSSDATA_OFFSET))(this, a1, a2);
		}

		::System::String* GetNodeIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETNODEICON_OFFSET))(this);
		}

		::System::Boolean HasBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_HASBATTLE_OFFSET))(this);
		}

		::System::Boolean IsEventNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_ISEVENTNODE_OFFSET))(this);
		}

		::System::Boolean IsShowBossSuccHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_ISSHOWBOSSSUCCHINT_OFFSET))(this);
		}

		::System::Boolean IsBossNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_ISBOSSNODE_OFFSET))(this);
		}

		::System::Void UpdateDisplayRewards(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_UPDATEDISPLAYREWARDS_OFFSET))(this, a1);
		}

		::System::Void UpdateCurSubNode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_UPDATECURSUBNODE_OFFSET))(this, a1);
		}

		::System::UInt32 GetStageId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETSTAGEID_OFFSET))(this);
		}

		::System::Boolean IsAtLastSubNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_ISATLASTSUBNODE_OFFSET))(this);
		}

		::System::Int32 GetCurSubNodeProgress()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETCURSUBNODEPROGRESS_OFFSET))(this);
		}

		::System::Int32 GetMaxSubNodeProgress()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETMAXSUBNODEPROGRESS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetAllRewardsDisplayData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETALLREWARDSDISPLAYDATA_OFFSET))(this);
		}

		::System::UInt32 GetDropRate(::RPG::Client::ActivityIdleLive::DropRateType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::DropRateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETDROPRATE_OFFSET))(this, a1);
		}

		::System::Boolean HasDropRateIncrease(::RPG::Client::ActivityIdleLive::DropRateType a1, ::RPG::Client::ActivityIdleLive::IdleLiveNode* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::DropRateType, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_HASDROPRATEINCREASE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID GetRankTextID(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE_GETRANKTEXTID_OFFSET))(this, a1);
		}

		::System::Boolean _GetCurSubNodeProgress_b__89_0(::JBIDJHKBOFD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBIDJHKBOFD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVENODE__GETCURSUBNODEPROGRESS_B__89_0_OFFSET))(this, a1);
		}

	};
}
