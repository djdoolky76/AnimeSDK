#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::B51Racing { class B51RacingMainPageEntranceViewModel; }

#define RPG_CLIENT_B51RACING_B51RACINGMAINPAGEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA69F30)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingMainPageViewModel_TypeDefinitionIndex = 84815;

	class B51RacingMainPageViewModel : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingMainPageEntranceViewModel* PreviousCycleEntrance; // 0x10
		::System::UInt32 CycleID; // 0x18
		::System::Boolean IsLightConeRewardReceived; // 0x1C
		::System::Boolean IsInTimeLimitSchedule; // 0x1D
		::System::Boolean IsInCycle; // 0x1E
		::System::Byte _padding0[0x1];
		::System::UInt32 CurrentDay; // 0x20
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID EntranceHintText; // 0x28
		::RPG::Client::TextID CycleNameText; // 0x38
		::RPG::Client::DateTimePro TimeLimitScheduleEndTime; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGMAINPAGEVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
