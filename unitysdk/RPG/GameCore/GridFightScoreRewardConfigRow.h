#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightScoreRewardConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTSCOREREWARDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7128F0)
#define RPG_GAMECORE_GRIDFIGHTSCOREREWARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D712740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightScoreRewardConfigRow_TypeDefinitionIndex = 13429;

	class GridFightScoreRewardConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ScoreRank; // 0x10
		::System::UInt32 Reward; // 0x14
		::System::UInt32 Score; // 0x18
		::System::UInt32 ScoreRow; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSCOREREWARDCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightScoreRewardConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightScoreRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSCOREREWARDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
