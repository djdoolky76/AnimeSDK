#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterRandomPoolRow; }

#define RPG_GAMECORE_MONSTERRANDOMPOOLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B7230)
#define RPG_GAMECORE_MONSTERRANDOMPOOLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8B7090)

namespace RPG::GameCore
{
	class MonsterRandomPoolRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MinionPool; // 0x10
		::Il2CppArray<::System::UInt32>* ElitePool; // 0x18
		::System::UInt32 RandomPoolID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERRANDOMPOOLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterRandomPoolRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterRandomPoolRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERRANDOMPOOLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
