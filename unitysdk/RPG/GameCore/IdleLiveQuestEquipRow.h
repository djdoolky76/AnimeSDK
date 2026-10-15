#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveQuestEquipRow; }

#define RPG_GAMECORE_IDLELIVEQUESTEQUIPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77DDE0)
#define RPG_GAMECORE_IDLELIVEQUESTEQUIPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77DB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveQuestEquipRow_TypeDefinitionIndex = 11768;

	class IdleLiveQuestEquipRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PropertyIDList; // 0x10
		::System::UInt32 Rarity; // 0x18
		::System::Boolean IsSpecial; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 QuestID; // 0x20
		::System::UInt32 RandomFactorIndex; // 0x24
		::System::UInt32 EquipID; // 0x28
		::System::UInt32 Level; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTEQUIPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveQuestEquipRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveQuestEquipRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTEQUIPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
