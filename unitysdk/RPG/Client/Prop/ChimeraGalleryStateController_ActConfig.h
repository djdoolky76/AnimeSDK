#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_ACTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xDC799A0)

namespace RPG::Client::Prop
{
	class ChimeraGalleryStateController_ActConfig : public ::System::Object
	{
	public:
		::System::UInt32 ActID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* ActTriggerName; // 0x18
		::System::Single ActDuration; // 0x20
		::System::Boolean HasBlendIn; // 0x24
		::System::Byte _padding1[0x3];
		::System::Single ManualBlendOutDuration; // 0x28
		::System::Byte _padding2[0x4];
		::System::String* BlendOutTriggerName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_ACTCONFIG_CTOR_OFFSET))(this);
		}

	};
}
