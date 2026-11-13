#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterResistEntry; }

#define RPG_GAMECORE_MONSTERRESISTENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0x1E47AA40)
#define RPG_GAMECORE_MONSTERRESISTENTRY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E47A8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterResistEntry_TypeDefinitionIndex = 14330;

	class MonsterResistEntry : public ::System::Object
	{
	public:
		::RPG::GameCore::ModifierBehaviorFlag Key; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint Value; // 0x18
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
