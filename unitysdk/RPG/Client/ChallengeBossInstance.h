#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeInstance.h"
class ANEIPABEMDH;
class GEGKPEHKGCB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B6F7B60)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GETSCORERATIO_OFFSET UNITYSDK_OFFSET(0x1B6F8B50)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GETSCORE_OFFSET UNITYSDK_OFFSET(0x1B6F8AC0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_ACTIONSCORINGID_OFFSET UNITYSDK_OFFSET(0x1B6F7A60)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_BATTLEFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B6F76E0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_BATTLELASTFINISHEDINDEX_OFFSET UNITYSDK_OFFSET(0x1B6F76C0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_BATTLETOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1B6F7700)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_DAMAGESCORINGID_OFFSET UNITYSDK_OFFSET(0x1B6F7960)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASBETTERSCORE_OFFSET UNITYSDK_OFFSET(0x1B6F7880)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASCLEAR_OFFSET UNITYSDK_OFFSET(0x1B6F7660)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASNEXTBATTLE_OFFSET UNITYSDK_OFFSET(0x1B6F77F0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASREWARD_OFFSET UNITYSDK_OFFSET(0x1B6F7680)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_ISBATTLEALLFINISHED_OFFSET UNITYSDK_OFFSET(0x1B6F7750)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_ISLASTBATTLEWIN_OFFSET UNITYSDK_OFFSET(0x1B6F78A0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_ISSINGLEBATTLE_OFFSET UNITYSDK_OFFSET(0x1B6F77D0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_MAXDAMAGESCORE_OFFSET UNITYSDK_OFFSET(0x1B6F7900)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_WILLOBTAINMEDAL_OFFSET UNITYSDK_OFFSET(0x1B6F76A0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET__BATTLESCORINGMAXSCORE_OFFSET UNITYSDK_OFFSET(0x1B6F78C0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SETUPLOADINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x1B6F83F0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_BATTLEFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B6F76F0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_BATTLELASTFINISHEDINDEX_OFFSET UNITYSDK_OFFSET(0x1B6F76D0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_HASBETTERSCORE_OFFSET UNITYSDK_OFFSET(0x1B6F7890)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_HASCLEAR_OFFSET UNITYSDK_OFFSET(0x1B6F7670)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_HASREWARD_OFFSET UNITYSDK_OFFSET(0x1B6F7690)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_ISLASTBATTLEWIN_OFFSET UNITYSDK_OFFSET(0x1B6F78B0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_ISSINGLEBATTLE_OFFSET UNITYSDK_OFFSET(0x1B6F77E0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_WILLOBTAINMEDAL_OFFSET UNITYSDK_OFFSET(0x1B6F76B0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SYNCONBATTLEFINISHED_OFFSET UNITYSDK_OFFSET(0x1B6F84E0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE__CALCISNEWRECORD_OFFSET UNITYSDK_OFFSET(0x1B6F82D0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE__SYNCEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x1B6F7D90)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeBossInstance_TypeDefinitionIndex = 64518;

	class ChallengeBossInstance : public ::RPG::Client::ChallengeInstance
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _BattleScores; // 0x68
		::System::Collections::Generic::List_1<::System::UInt32>* BuffList; // 0x70
		::System::UInt32 _BattleFinishedCount_k__BackingField; // 0x78
		::System::Boolean _IsLastBattleWin_k__BackingField; // 0x7C
		::System::Boolean _HasReward_k__BackingField; // 0x7D
		::System::Boolean _IsSingleBattle_k__BackingField; // 0x7E
		::System::Boolean _HasClear_k__BackingField; // 0x7F
		::System::UInt32 _BattleLastFinishedIndex_k__BackingField; // 0x80
		::System::Boolean _HasBetterScore_k__BackingField; // 0x84
		::System::Boolean _WillObtainMedal_k__BackingField; // 0x85
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASCLEAR_OFFSET))(this);
		}

		::System::Void set_HasClear(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_HASCLEAR_OFFSET))(this, a1);
		}

		::System::Boolean get_HasReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASREWARD_OFFSET))(this);
		}

		::System::Void set_HasReward(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_HASREWARD_OFFSET))(this, a1);
		}

		::System::Boolean get_WillObtainMedal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_WILLOBTAINMEDAL_OFFSET))(this);
		}

		::System::Void set_WillObtainMedal(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_WILLOBTAINMEDAL_OFFSET))(this, a1);
		}

		::System::UInt32 get_BattleLastFinishedIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_BATTLELASTFINISHEDINDEX_OFFSET))(this);
		}

		::System::Void set_BattleLastFinishedIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_BATTLELASTFINISHEDINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_BattleFinishedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_BATTLEFINISHEDCOUNT_OFFSET))(this);
		}

		::System::Void set_BattleFinishedCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_BATTLEFINISHEDCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_BattleTotalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_BATTLETOTALCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsBattleAllFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_ISBATTLEALLFINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsSingleBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_ISSINGLEBATTLE_OFFSET))(this);
		}

		::System::Void set_IsSingleBattle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_ISSINGLEBATTLE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasNextBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASNEXTBATTLE_OFFSET))(this);
		}

		::System::Boolean get_HasBetterScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASBETTERSCORE_OFFSET))(this);
		}

		::System::Void set_HasBetterScore(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_HASBETTERSCORE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLastBattleWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_ISLASTBATTLEWIN_OFFSET))(this);
		}

		::System::Void set_IsLastBattleWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_ISLASTBATTLEWIN_OFFSET))(this, a1);
		}

		static ::System::Int32 get__BattleScoringMaxScore()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET__BATTLESCORINGMAXSCORE_OFFSET))();
		}

		static ::System::Int32 get_MaxDamageScore()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_MAXDAMAGESCORE_OFFSET))();
		}

		static ::System::UInt32 get_DamageScoringID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_DAMAGESCORINGID_OFFSET))();
		}

		static ::System::UInt32 get_ActionScoringID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_ACTIONSCORINGID_OFFSET))();
		}

		::System::Void _SyncExtraInfo(::GEGKPEHKGCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEGKPEHKGCB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE__SYNCEXTRAINFO_OFFSET))(this, a1);
		}

		::System::Void _CalcIsNewRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE__CALCISNEWRECORD_OFFSET))(this);
		}

		::System::Void SetupLoadingStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SETUPLOADINGSTRATEGY_OFFSET))(this);
		}

		::System::Void SyncOnBattleFinished(::ANEIPABEMDH* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::ANEIPABEMDH*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SYNCONBATTLEFINISHED_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetScore(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GETSCORE_OFFSET))(this, a1);
		}

		::System::Single GetScoreRatio(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GETSCORERATIO_OFFSET))(this, a1);
		}

	};
}
