#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengeBossMazeExtraConfigRow; }

#define RPG_GAMECORE_CHALLENGEBOSSMAZEEXTRACONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E76E280)
#define RPG_GAMECORE_CHALLENGEBOSSMAZEEXTRACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E76E100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeBossMazeExtraConfigRow_TypeDefinitionIndex = 13028;

	class ChallengeBossMazeExtraConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 MonsterID2; // 0x14
		::System::UInt32 MonsterID1; // 0x18
		::System::UInt32 MonsterID3; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSMAZEEXTRACONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChallengeBossMazeExtraConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChallengeBossMazeExtraConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSMAZEEXTRACONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
