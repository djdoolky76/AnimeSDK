#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraDuelGameModeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class EBPBMFBFEJA;
namespace RPG::Client { class ChimeraDuelGameSession; }
namespace RPG::Client { class ChimeraDuelPlayerRankData; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }

#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CE76F00)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE713C0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_CHIMERAS_OFFSET UNITYSDK_OFFSET(0x1CE774A0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_EXTRAREWARD_OFFSET UNITYSDK_OFFSET(0x1CE77340)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_GAMEID_OFFSET UNITYSDK_OFFSET(0x1CE77320)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_GAMEMODETYPE_OFFSET UNITYSDK_OFFSET(0x1CE772C0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ISINLONGTAIL_OFFSET UNITYSDK_OFFSET(0x1CE772E0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ISSHOWREWARD_OFFSET UNITYSDK_OFFSET(0x1CE77480)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x1CE77150)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_LIFECOUNT_OFFSET UNITYSDK_OFFSET(0x1CE77280)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_MASTERID_OFFSET UNITYSDK_OFFSET(0x1CE770B0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_MAXLIFECOUNT_OFFSET UNITYSDK_OFFSET(0x1CE772A0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_MAXWINCOUNT_OFFSET UNITYSDK_OFFSET(0x1CE77130)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_OLDRANKDATA_OFFSET UNITYSDK_OFFSET(0x1CE770F0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_RANKNAME_OFFSET UNITYSDK_OFFSET(0x1CE77190)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1CE77220)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_REWARDITEMID_OFFSET UNITYSDK_OFFSET(0x1CE77430)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x1CE77170)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x1CE77240)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_SHOULDEXITPUZZLE_OFFSET UNITYSDK_OFFSET(0x1CE77300)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_TONEXTRANKSCORE_OFFSET UNITYSDK_OFFSET(0x1CE77260)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_WINCOUNTGOAL_OFFSET UNITYSDK_OFFSET(0x1CE77110)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_WINCOUNT_OFFSET UNITYSDK_OFFSET(0x1CE770D0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_CHIMERAS_OFFSET UNITYSDK_OFFSET(0x1CE774B0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_GAMEID_OFFSET UNITYSDK_OFFSET(0x1CE77330)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_GAMEMODETYPE_OFFSET UNITYSDK_OFFSET(0x1CE772D0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ISINLONGTAIL_OFFSET UNITYSDK_OFFSET(0x1CE772F0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ISSHOWREWARD_OFFSET UNITYSDK_OFFSET(0x1CE77490)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x1CE77160)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_LIFECOUNT_OFFSET UNITYSDK_OFFSET(0x1CE77290)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_MASTERID_OFFSET UNITYSDK_OFFSET(0x1CE770C0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_MAXLIFECOUNT_OFFSET UNITYSDK_OFFSET(0x1CE772B0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_MAXWINCOUNT_OFFSET UNITYSDK_OFFSET(0x1CE77140)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_OLDRANKDATA_OFFSET UNITYSDK_OFFSET(0x1CE77100)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0x1CE77230)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x1CE77180)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x1CE77250)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_SHOULDEXITPUZZLE_OFFSET UNITYSDK_OFFSET(0x1CE77310)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_TONEXTRANKSCORE_OFFSET UNITYSDK_OFFSET(0x1CE77270)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_WINCOUNTGOAL_OFFSET UNITYSDK_OFFSET(0x1CE77120)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_WINCOUNT_OFFSET UNITYSDK_OFFSET(0x1CE770E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelSettleGameData_TypeDefinitionIndex = 64766;

	class ChimeraDuelSettleGameData : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelPlayerRankData* _OldRankData_k__BackingField; // 0x10
		::Il2CppArray<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* _Chimeras_k__BackingField; // 0x18
		::System::UInt32 _Score_k__BackingField; // 0x20
		::System::UInt32 _MasterID_k__BackingField; // 0x24
		::RPG::Client::ChimeraDuelGameModeType _GameModeType_k__BackingField; // 0x28
		::System::UInt32 _LifeCount_k__BackingField; // 0x2C
		::System::UInt32 _WinCount_k__BackingField; // 0x30
		::System::UInt32 _GameID_k__BackingField; // 0x34
		::System::UInt32 _RoundCount_k__BackingField; // 0x38
		::System::UInt32 _MaxWinCount_k__BackingField; // 0x3C
		::System::UInt32 _ToNextRankScore_k__BackingField; // 0x40
		::System::UInt32 _MaxLifeCount_k__BackingField; // 0x44
		::System::Boolean _IsWin_k__BackingField; // 0x48
		::System::Boolean _ShouldExitPuzzle_k__BackingField; // 0x49
		::System::Boolean _IsShowReward_k__BackingField; // 0x4A
		::System::Boolean _IsInLongTail_k__BackingField; // 0x4B
		::System::UInt32 _WinCountGoal_k__BackingField; // 0x4C
		::System::UInt32 _Rank_k__BackingField; // 0x50
		::System::Void _ctor(::EBPBMFBFEJA* a1, ::RPG::Client::ChimeraDuelGameSession* a2, ::RPG::Client::ChimeraDuelPlayerRankData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::EBPBMFBFEJA*, ::RPG::Client::ChimeraDuelGameSession*, ::RPG::Client::ChimeraDuelPlayerRankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_CTOR_1_OFFSET))(this);
		}

		::System::UInt32 get_MasterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_MASTERID_OFFSET))(this);
		}

		::System::Void set_MasterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_MASTERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_WinCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_WINCOUNT_OFFSET))(this);
		}

		::System::Void set_WinCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_WINCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelPlayerRankData* get_OldRankData()
		{
			return ((::RPG::Client::ChimeraDuelPlayerRankData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_OLDRANKDATA_OFFSET))(this);
		}

		::System::Void set_OldRankData(::RPG::Client::ChimeraDuelPlayerRankData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelPlayerRankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_OLDRANKDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_WinCountGoal()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_WINCOUNTGOAL_OFFSET))(this);
		}

		::System::Void set_WinCountGoal(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_WINCOUNTGOAL_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxWinCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_MAXWINCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxWinCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_MAXWINCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ISWIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoundCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ROUNDCOUNT_OFFSET))(this);
		}

		::System::Void set_RoundCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ROUNDCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_RankName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_RANKNAME_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_RANK_OFFSET))(this, a1);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_SCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ToNextRankScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_TONEXTRANKSCORE_OFFSET))(this);
		}

		::System::Void set_ToNextRankScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_TONEXTRANKSCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_LifeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_LIFECOUNT_OFFSET))(this);
		}

		::System::Void set_LifeCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_LIFECOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxLifeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_MAXLIFECOUNT_OFFSET))(this);
		}

		::System::Void set_MaxLifeCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_MAXLIFECOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelGameModeType get_GameModeType()
		{
			return ((::RPG::Client::ChimeraDuelGameModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_GAMEMODETYPE_OFFSET))(this);
		}

		::System::Void set_GameModeType(::RPG::Client::ChimeraDuelGameModeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_GAMEMODETYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInLongTail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ISINLONGTAIL_OFFSET))(this);
		}

		::System::Void set_IsInLongTail(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ISINLONGTAIL_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldExitPuzzle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_SHOULDEXITPUZZLE_OFFSET))(this);
		}

		::System::Void set_ShouldExitPuzzle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_SHOULDEXITPUZZLE_OFFSET))(this, a1);
		}

		::System::UInt32 get_GameID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_GAMEID_OFFSET))(this);
		}

		::System::Void set_GameID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_GAMEID_OFFSET))(this, a1);
		}

		::RPG::Client::ItemDisplayData* get_ExtraReward()
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_EXTRAREWARD_OFFSET))(this);
		}

		::System::Boolean get_IsShowReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ISSHOWREWARD_OFFSET))(this);
		}

		::System::Void set_IsShowReward(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ISSHOWREWARD_OFFSET))(this, a1);
		}

		::System::UInt32 get_RewardItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_REWARDITEMID_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_Chimeras()
		{
			return ((::Il2CppArray<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_CHIMERAS_OFFSET))(this);
		}

		::System::Void set_Chimeras(::Il2CppArray<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_CHIMERAS_OFFSET))(this, a1);
		}

	};
}
