#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class TimeRewindParterrePuzzleContainerConfig; }

#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xDDC9AA0)

namespace RPG::Client::Prop
{
	class TimeRewindParterrePuzzleConfig : public ::System::Object
	{
	public:
		::System::UInt32 ParterreID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::Client::Prop::TimeRewindParterrePuzzleContainerConfig*>* ContainerConfigs; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLECONFIG_CTOR_OFFSET))(this);
		}

	};
}
