#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightEnemyDifficultyLvConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTENEMYDIFFICULTYLVCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x20603560)
#define RPG_GAMECORE_GRIDFIGHTENEMYDIFFICULTYLVCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x20603130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEnemyDifficultyLvConfigRow_TypeDefinitionIndex = 13766;

	class GridFightEnemyDifficultyLvConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint AllDamageReduce; // 0x10
		::RPG::GameCore::FixPoint SpeedRatio; // 0x18
		::System::UInt32 EnemyDifficultyLevel; // 0x20
		::System::UInt32 ChapterID; // 0x24
		::RPG::GameCore::FixPoint DefenceRatio; // 0x28
		::RPG::GameCore::FixPoint AttackRatio; // 0x30
		::RPG::GameCore::FixPoint StanceRatio; // 0x38
		::RPG::GameCore::FixPoint HPRatio; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTENEMYDIFFICULTYLVCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTENEMYDIFFICULTYLVCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
