#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_NODEREWARDUIDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC510040)

namespace RPG::Client::ActivityIdleLive
{
	class NodeRewardUiData : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 Num; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID RewardHintText; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_NODEREWARDUIDATA_CTOR_OFFSET))(this);
		}

	};
}
