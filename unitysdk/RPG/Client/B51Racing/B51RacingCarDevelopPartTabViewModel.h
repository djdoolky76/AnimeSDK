#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::B51Racing { class B51RacingCarStatItemViewModel; }
namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListViewModel; }
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPPARTTABVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD08ABD0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarDevelopPartTabViewModel_TypeDefinitionIndex = 84796;

	class B51RacingCarDevelopPartTabViewModel : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* StatItems; // 0x10
		::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* RequiredStatIconList; // 0x18
		::System::String* PartIconPath; // 0x20
		::RPG::Client::TextID BuffDescription; // 0x28
		::System::UInt32 PartID; // 0x38
		::RPG::GameCore::B51RacingPartType PartSlotType; // 0x3C
		::System::Boolean CurrentCarHasEquipSameTypePart; // 0x40
		::System::Boolean IsSelected; // 0x41
		::System::Boolean CanDirectAcquire; // 0x42
		::System::Byte _padding0[0x5];
		::RPG::Client::TextID PartName; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPPARTTABVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
