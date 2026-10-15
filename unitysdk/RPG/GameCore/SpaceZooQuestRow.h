#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SpaceZooQuestType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpaceZooQuestRow; }

#define RPG_GAMECORE_SPACEZOOQUESTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF7E60)
#define RPG_GAMECORE_SPACEZOOQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAF77B0)

namespace RPG::GameCore
{
	class SpaceZooQuestRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::RPG::GameCore::SpaceZooQuestType Type; // 0x18
		::System::UInt32 ID; // 0x1C
		::RPG::Client::TextID QuestTabName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpaceZooQuestRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpaceZooQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
