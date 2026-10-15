#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMonsterDropType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMonsterRow; }

#define RPG_GAMECORE_ROGUEMONSTERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1CB40)
#define RPG_GAMECORE_ROGUEMONSTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA1B720)

namespace RPG::GameCore
{
	class RogueMonsterRow : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueMonsterDropType MonsterDropType; // 0x10
		::System::UInt32 EventID; // 0x14
		::System::UInt32 NpcMonsterID; // 0x18
		::System::UInt32 RogueMonsterID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMonsterRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMonsterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
