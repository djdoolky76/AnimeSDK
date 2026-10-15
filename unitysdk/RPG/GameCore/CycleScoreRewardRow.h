#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CycleScoreRewardRow; }

#define RPG_GAMECORE_CYCLESCOREREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5ECE20)
#define RPG_GAMECORE_CYCLESCOREREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5ECCE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CycleScoreRewardRow_TypeDefinitionIndex = 13111;

	class CycleScoreRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 Score; // 0x10
		::System::UInt32 ScoreRank; // 0x14
		::System::UInt32 Reward; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLESCOREREWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CycleScoreRewardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CycleScoreRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLESCOREREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
