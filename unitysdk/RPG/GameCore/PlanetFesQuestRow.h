#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesQuestType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class PlanetFesQuestRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESQUESTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6B880)
#define RPG_GAMECORE_PLANETFESQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE6B540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesQuestRow_TypeDefinitionIndex = 12278;

	class PlanetFesQuestRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* RewardItemList; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::RPG::Client::TextID Description; // 0x30
		::RPG::GameCore::PlanetFesQuestType QuestType; // 0x40
		::System::UInt32 ID; // 0x44
		::System::UInt32 FinishwayID; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESQUESTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesQuestRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESQUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
