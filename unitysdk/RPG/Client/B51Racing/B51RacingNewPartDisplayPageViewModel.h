#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTDISPLAYPAGEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xC7B22D0)

namespace RPG::Client::B51Racing
{
	class B51RacingNewPartDisplayPageViewModel : public ::System::Object
	{
	public:
		::System::Action* OnClose; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTDISPLAYPAGEVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
