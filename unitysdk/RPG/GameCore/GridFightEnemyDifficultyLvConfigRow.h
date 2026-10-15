#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightEnemyDifficultyLvConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTENEMYDIFFICULTYLVCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D72BDD0)
#define RPG_GAMECORE_GRIDFIGHTENEMYDIFFICULTYLVCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D72BA20)

namespace RPG::GameCore
{
	class GridFightEnemyDifficultyLvConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint AttackRatio; // 0x10
		::RPG::GameCore::FixPoint DefenceRatio; // 0x18
		::RPG::GameCore::FixPoint HPRatio; // 0x20
		::System::UInt32 ChapterID; // 0x28
		::System::UInt32 EnemyDifficultyLevel; // 0x2C
		::RPG::GameCore::FixPoint SpeedRatio; // 0x30
		::RPG::GameCore::FixPoint StanceRatio; // 0x38
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
