#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class IDBNLIKLDKJ;
namespace RPG::GameCore { class StageInvasionRogueMonsterRow; }

#define RPG_GAMECORE_STAGEINVASIONROGUEMONSTERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB0FAD0)
#define RPG_GAMECORE_STAGEINVASIONROGUEMONSTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB0F930)

namespace RPG::GameCore
{
	class StageInvasionRogueMonsterRow : public ::System::Object
	{
	public:
		::Il2CppArray<::IDBNLIKLDKJ*>* MonsterInvasionList; // 0x10
		::System::UInt32 InvasionID; // 0x18
		::System::UInt32 RogueMonsterID; // 0x1C
		::System::UInt32 StageID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONROGUEMONSTERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageInvasionRogueMonsterRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageInvasionRogueMonsterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONROGUEMONSTERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
