#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPGTOOLS_TIMELINEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE95CCE0)

namespace RPGTools
{
	class TimelineData : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::String* Path; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINEDATA_CTOR_OFFSET))(this);
		}

	};
}
