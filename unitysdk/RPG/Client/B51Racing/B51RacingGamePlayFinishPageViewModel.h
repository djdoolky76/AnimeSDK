#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYFINISHPAGEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xC796B30)

namespace RPG::Client::B51Racing
{
	class B51RacingGamePlayFinishPageViewModel : public ::System::Object
	{
	public:
		::System::Int32 PlayerRank; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYFINISHPAGEVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
