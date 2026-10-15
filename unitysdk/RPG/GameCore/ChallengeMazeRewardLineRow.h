#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengeMazeRewardLineRow; }

#define RPG_GAMECORE_CHALLENGEMAZEREWARDLINEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D533C90)
#define RPG_GAMECORE_CHALLENGEMAZEREWARDLINEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D533B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeMazeRewardLineRow_TypeDefinitionIndex = 12975;

	class ChallengeMazeRewardLineRow : public ::System::Object
	{
	public:
		::System::UInt32 RewardID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::UInt32 StarCount; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZEREWARDLINEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChallengeMazeRewardLineRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChallengeMazeRewardLineRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZEREWARDLINEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
