#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::B51Racing { class B51RacingBuffSkillItemViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarStatItemViewModel; }
namespace RPG::Client::B51Racing { class B51RacingDailyActionCardItemViewModel; }
namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListViewModel; }
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPACTIONSELECTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B110950)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarDevelopActionSelectViewModel_TypeDefinitionIndex = 84793;

	class B51RacingCarDevelopActionSelectViewModel : public ::System::Object
	{
	public:
		::System::String* TargetPartIconPath; // 0x10
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* StatItems; // 0x18
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingBuffSkillItemViewModel*>* BuffItems; // 0x20
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingDailyActionCardItemViewModel*>* ActionCards; // 0x28
		::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* TargetPartRequireStatIconList; // 0x30
		::System::Int32 RoundIndex; // 0x38
		::System::Int32 SelectedCardIndex; // 0x3C
		::RPG::Client::TextID TargetBuffDesc; // 0x40
		::System::UInt32 TargetPartID; // 0x50
		::System::Boolean InitAsEmptyState; // 0x54
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID TargetBuffName; // 0x58
		::System::Int32 TotalRounds; // 0x68
		::RPG::GameCore::B51RacingPartType TargetPartSlotType; // 0x6C
		::RPG::Client::TextID RoundText; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPACTIONSELECTVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
