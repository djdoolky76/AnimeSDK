#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GridFightScoreRewardConfigRow; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA17A90)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA17AD0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__GETALLREWARD_B__2_1_OFFSET UNITYSDK_OFFSET(0x1CA17AE0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__GETCANTAKEREWARDSCORERANKLIST_B__4_1_OFFSET UNITYSDK_OFFSET(0x1CA17B00)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__GETREWARDDISPLAYDATABYRANKS_B__16_1_OFFSET UNITYSDK_OFFSET(0x1CA17B40)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C___GETMAXSCORE_B__13_0_OFFSET UNITYSDK_OFFSET(0x1CA17B20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightWeeklyScore___c_TypeDefinitionIndex = 67441;

	class GridFightWeeklyScore___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::GridFightScoreRewardConfigRow*, ::System::UInt32>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightScoreRewardConfigRow*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x19400);
		}

		static ::System::Func_2<::RPG::GameCore::GridFightScoreRewardConfigRow*, ::System::UInt32>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightScoreRewardConfigRow*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x19408);
		}

		static ::System::Func_2<::RPG::GameCore::GridFightScoreRewardConfigRow*, ::System::UInt32>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightScoreRewardConfigRow*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x19410);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x19418);
		}

		static ::System::Func_2<::RPG::GameCore::GridFightScoreRewardConfigRow*, ::System::UInt32>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightScoreRewardConfigRow*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x19420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetAllReward_b__2_1(::RPG::GameCore::GridFightScoreRewardConfigRow* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GridFightScoreRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__GETALLREWARD_B__2_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetCanTakeRewardScoreRankList_b__4_1(::RPG::GameCore::GridFightScoreRewardConfigRow* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GridFightScoreRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__GETCANTAKEREWARDSCORERANKLIST_B__4_1_OFFSET))(this, a1);
		}

		::System::UInt32 __GetMaxScore_b__13_0(::RPG::GameCore::GridFightScoreRewardConfigRow* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GridFightScoreRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C___GETMAXSCORE_B__13_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetRewardDisplayDataByRanks_b__16_1(::RPG::GameCore::GridFightScoreRewardConfigRow* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GridFightScoreRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__GETREWARDDISPLAYDATABYRANKS_B__16_1_OFFSET))(this, a1);
		}

	};
}
