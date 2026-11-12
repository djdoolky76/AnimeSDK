#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"
class KIKDEEOGENM;
class OGHPKFMNNHL;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RogueBuffData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD45AD10)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD45B870)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xD45BB10)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xD45BC50)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_FIRSTREWARDS_OFFSET UNITYSDK_OFFSET(0xD45BC70)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ISFINISHBYTALKDIALOG_OFFSET UNITYSDK_OFFSET(0xD45BAD0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ISFROMINGAME_OFFSET UNITYSDK_OFFSET(0xD45C040)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xD45BB30)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_LAYERID_OFFSET UNITYSDK_OFFSET(0xD45BBB0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0xD45BBD0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_PASSROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xD45BB50)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_REACHROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xD45BB70)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_RECORDAVATARS_OFFSET UNITYSDK_OFFSET(0xD45BCD0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_RECORDBUFFDATAS_OFFSET UNITYSDK_OFFSET(0xD45BC90)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_RECORDMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xD45BCB0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ROGUESCOREADDNUM_OFFSET UNITYSDK_OFFSET(0xD45BBF0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_SUBMODE_OFFSET UNITYSDK_OFFSET(0xD45BAF0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_TALENTCOINADDNUMHIGHLIGHTED_OFFSET UNITYSDK_OFFSET(0xD45BC30)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_TALENTCOINADDNUM_OFFSET UNITYSDK_OFFSET(0xD45BC10)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_TOTALROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xD45BB90)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SETISFROMINGAME_OFFSET UNITYSDK_OFFSET(0xD45BA80)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xD45BB20)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xD45BC60)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_FIRSTREWARDS_OFFSET UNITYSDK_OFFSET(0xD45BC80)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ISFINISHBYTALKDIALOG_OFFSET UNITYSDK_OFFSET(0xD45BAE0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ISFROMINGAME_OFFSET UNITYSDK_OFFSET(0xD45C050)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xD45BB40)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_LAYERID_OFFSET UNITYSDK_OFFSET(0xD45BBC0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0xD45BBE0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_PASSROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xD45BB60)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_REACHROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xD45BB80)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_RECORDBUFFDATAS_OFFSET UNITYSDK_OFFSET(0xD45BCA0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_RECORDMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xD45BCC0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ROGUESCOREADDNUM_OFFSET UNITYSDK_OFFSET(0xD45BC00)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_SUBMODE_OFFSET UNITYSDK_OFFSET(0xD45BB00)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_TALENTCOINADDNUMHIGHLIGHTED_OFFSET UNITYSDK_OFFSET(0xD45BC40)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_TALENTCOINADDNUM_OFFSET UNITYSDK_OFFSET(0xD45BC20)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_TOTALROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xD45BBA0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SHOW_OFFSET UNITYSDK_OFFSET(0xD45B990)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITAREAPROGRESSINFO_OFFSET UNITYSDK_OFFSET(0xD45AEB0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITBUFFINFO_OFFSET UNITYSDK_OFFSET(0xD45AF40)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITFIRSTREWARD_OFFSET UNITYSDK_OFFSET(0xD45B6E0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xD45B220)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITSCOREANDTALENTCOIN_OFFSET UNITYSDK_OFFSET(0xD45B800)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITSKIPINFO_OFFSET UNITYSDK_OFFSET(0xD45B770)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITTEAMAVATARINFO_OFFSET UNITYSDK_OFFSET(0xD45B0F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueExploreFinishInfo_TypeDefinitionIndex = 68904;

	class ChessRogueExploreFinishInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* _RecordBuffDatas_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _FirstRewards_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _RecordMiracleIDs_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::KIKDEEOGENM*>* _RecordAvatars; // 0x28
		::RPG::GameCore::RogueSubMode _SubMode_k__BackingField; // 0x30
		::System::UInt32 _TalentCoinAddNum_k__BackingField; // 0x34
		::System::UInt32 _LayerID_k__BackingField; // 0x38
		::System::UInt32 _AreaID_k__BackingField; // 0x3C
		::System::Boolean _IsFromInGame_k__BackingField; // 0x40
		::System::Boolean ShouldSkipToChessRoguePage; // 0x41
		::System::Boolean _IsWin_k__BackingField; // 0x42
		::System::Boolean _IsFinishByTalkDialog_k__BackingField; // 0x43
		::System::UInt32 _LayerIndex_k__BackingField; // 0x44
		::System::UInt32 _PassRoomCount_k__BackingField; // 0x48
		::System::UInt32 _RogueScoreAddNum_k__BackingField; // 0x4C
		::System::UInt32 _ReachRoomCount_k__BackingField; // 0x50
		::System::UInt32 _TalentCoinAddNumHighlighted_k__BackingField; // 0x54
		::System::UInt32 _Difficulty_k__BackingField; // 0x58
		::System::UInt32 _TotalRoomCount_k__BackingField; // 0x5C
		::System::Void _ctor(::OGHPKFMNNHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGHPKFMNNHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SHOW_OFFSET))(this);
		}

		::System::Void SetIsFromInGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SETISFROMINGAME_OFFSET))(this, a1);
		}

		::System::Void _InitAreaProgressInfo(::OGHPKFMNNHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGHPKFMNNHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITAREAPROGRESSINFO_OFFSET))(this, a1);
		}

		::System::Void _InitTeamAvatarInfo(::OGHPKFMNNHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGHPKFMNNHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITTEAMAVATARINFO_OFFSET))(this, a1);
		}

		::System::Void _InitBuffInfo(::OGHPKFMNNHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGHPKFMNNHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITBUFFINFO_OFFSET))(this, a1);
		}

		::System::Void _InitMiracleInfo(::OGHPKFMNNHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGHPKFMNNHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITMIRACLEINFO_OFFSET))(this, a1);
		}

		::System::Void _InitFirstReward(::OGHPKFMNNHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGHPKFMNNHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITFIRSTREWARD_OFFSET))(this, a1);
		}

		::System::Void _InitSkipInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITSKIPINFO_OFFSET))(this);
		}

		::System::Void _InitScoreAndTalentCoin(::OGHPKFMNNHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGHPKFMNNHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITSCOREANDTALENTCOIN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinishByTalkDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ISFINISHBYTALKDIALOG_OFFSET))(this);
		}

		::System::Void set_IsFinishByTalkDialog(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ISFINISHBYTALKDIALOG_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueSubMode get_SubMode()
		{
			return ((::RPG::GameCore::RogueSubMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_SUBMODE_OFFSET))(this);
		}

		::System::Void set_SubMode(::RPG::GameCore::RogueSubMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_SUBMODE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_AREAID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ISWIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_PassRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_PASSROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_PassRoomCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_PASSROOMCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_ReachRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_REACHROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_ReachRoomCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_REACHROOMCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_TOTALROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalRoomCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_TOTALROOMCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_LayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_LAYERID_OFFSET))(this);
		}

		::System::Void set_LayerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_LAYERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_LayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_LAYERINDEX_OFFSET))(this);
		}

		::System::Void set_LayerIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_LAYERINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_RogueScoreAddNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ROGUESCOREADDNUM_OFFSET))(this);
		}

		::System::Void set_RogueScoreAddNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ROGUESCOREADDNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_TalentCoinAddNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_TALENTCOINADDNUM_OFFSET))(this);
		}

		::System::Void set_TalentCoinAddNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_TALENTCOINADDNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_TalentCoinAddNumHighlighted()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_TALENTCOINADDNUMHIGHLIGHTED_OFFSET))(this);
		}

		::System::Void set_TalentCoinAddNumHighlighted(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_TALENTCOINADDNUMHIGHLIGHTED_OFFSET))(this, a1);
		}

		::System::UInt32 get_Difficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Void set_Difficulty(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_DIFFICULTY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_FirstRewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_FIRSTREWARDS_OFFSET))(this);
		}

		::System::Void set_FirstRewards(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_FIRSTREWARDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* get_RecordBuffDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_RECORDBUFFDATAS_OFFSET))(this);
		}

		::System::Void set_RecordBuffDatas(::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_RECORDBUFFDATAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RecordMiracleIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_RECORDMIRACLEIDS_OFFSET))(this);
		}

		::System::Void set_RecordMiracleIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_RECORDMIRACLEIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* get_RecordAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_RECORDAVATARS_OFFSET))(this);
		}

		::System::Boolean get_IsFromInGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ISFROMINGAME_OFFSET))(this);
		}

		::System::Void set_IsFromInGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ISFROMINGAME_OFFSET))(this, a1);
		}

	};
}
