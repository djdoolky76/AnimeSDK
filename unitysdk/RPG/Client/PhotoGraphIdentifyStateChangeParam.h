#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PhotoGraphIdentifyState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PHOTOGRAPHIDENTIFYSTATECHANGEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xDAF6CD0)

namespace RPG::Client
{
	class PhotoGraphIdentifyStateChangeParam : public ::System::Object
	{
	public:
		::RPG::Client::PhotoGraphIdentifyState IdentifyState; // 0x10
		::System::Int32 TipPriority; // 0x14
		::RPG::Client::TextID CustomTip; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHIDENTIFYSTATECHANGEPARAM_CTOR_OFFSET))(this);
		}

	};
}
