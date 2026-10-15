#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::B51Racing { class B51RacingChallengeMatchItemViewModel; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHPAGEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xC731280)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingChallengeMatchPageViewModel_TypeDefinitionIndex = 82030;

	class B51RacingChallengeMatchPageViewModel : public ::System::Object
	{
	public:
		::System::String* SelectedHistoryBestDriverIconPath; // 0x10
		::System::String* SelectedMapPath; // 0x18
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingChallengeMatchItemViewModel*>* MatchItems; // 0x20
		::System::Action* OnCustomizeCar; // 0x28
		::System::Action* OnMatchSelected; // 0x30
		::System::Action* OnCarDetail; // 0x38
		::RPG::Client::TextID SelectedMatchName; // 0x40
		::System::UInt32 SelectedHistoryBestTime; // 0x50
		::System::UInt32 SelectedPlayerBestTime; // 0x54
		::System::Int32 SelectedIndex; // 0x58
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID SelectedTrackName; // 0x60
		::RPG::Client::TextID SelectedHistoryBestDriverName; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHPAGEVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
