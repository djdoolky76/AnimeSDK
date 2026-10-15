#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterResistEntry; }

#define RPG_GAMECORE_MONSTERRESISTENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B7640)
#define RPG_GAMECORE_MONSTERRESISTENTRY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8B74F0)

namespace RPG::GameCore
{
	class MonsterResistEntry : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint Value; // 0x10
		::RPG::GameCore::ModifierBehaviorFlag Key; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERRESISTENTRY_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterResistEntry* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterResistEntry*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERRESISTENTRY_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
