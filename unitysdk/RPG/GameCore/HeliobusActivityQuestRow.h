#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeliobusActivityQuestRow; }

#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E96DCE0)
#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E96D590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusActivityQuestRow_TypeDefinitionIndex = 13916;

	class HeliobusActivityQuestRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::UInt32 ActivityModuleID; // 0x18
		::System::UInt32 TypeGroupID; // 0x1C
		::RPG::Client::TextID QuestTabName; // 0x20
		::System::UInt32 QuestTabID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeliobusActivityQuestRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeliobusActivityQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
