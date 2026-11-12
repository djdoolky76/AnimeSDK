#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListViewModel; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGNEWCARDRIVERPAGEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD111DA0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingNewCarDriverPageViewModel_TypeDefinitionIndex = 84814;

	class B51RacingNewCarDriverPageViewModel : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* BonusStatIconList; // 0x10
		::System::Action* OnClose; // 0x18
		::System::String* AvatarFullBodyPath; // 0x20
		::RPG::Client::TextID DriverDesc; // 0x28
		::RPG::Client::TextID DriverName; // 0x38
		::System::UInt32 DriverID; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWCARDRIVERPAGEVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
