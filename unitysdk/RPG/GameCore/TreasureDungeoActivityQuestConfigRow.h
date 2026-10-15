#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TreasureDungeoActivityQuestConfigRow; }

#define RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC10490)
#define RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC0FD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeoActivityQuestConfigRow_TypeDefinitionIndex = 12540;

	class TreasureDungeoActivityQuestConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::UInt32 DungeonGroupID; // 0x18
		::System::UInt32 ID; // 0x1C
		::RPG::Client::TextID Name; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TreasureDungeoActivityQuestConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TreasureDungeoActivityQuestConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
