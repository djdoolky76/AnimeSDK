#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLECONTAINERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xDDC9AB0)

namespace RPG::Client::Prop
{
	class TimeRewindParterrePuzzleContainerConfig : public ::System::Object
	{
	public:
		::System::UInt32 ContainerInstanceID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* ContainerStateName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLECONTAINERCONFIG_CTOR_OFFSET))(this);
		}

	};
}
