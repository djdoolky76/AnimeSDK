#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueScoreRewardRow; }

#define RPG_GAMECORE_ROGUESCOREREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA01090)
#define RPG_GAMECORE_ROGUESCOREREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA009F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueScoreRewardRow_TypeDefinitionIndex = 14936;

	class RogueScoreRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 Score; // 0x10
		::System::UInt32 ScoreRow; // 0x14
		::System::UInt32 Reward; // 0x18
		::System::UInt32 RewardPoolID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESCOREREWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueScoreRewardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueScoreRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESCOREREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
