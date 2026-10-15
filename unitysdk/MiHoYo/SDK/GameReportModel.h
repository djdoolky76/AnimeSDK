#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class UploadContent; }
namespace System { class String; }

#define MIHOYO_SDK_GAMEREPORTMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE43D40)

namespace MiHoYo::SDK
{
	class GameReportModel : public ::System::Object
	{
	public:
		::System::Int32 applicationId; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* applicationName; // 0x18
		::System::String* msgId; // 0x20
		::System::String* eventTime; // 0x28
		::System::Int32 eventId; // 0x30
		::System::Byte _padding1[0x4];
		::System::String* eventName; // 0x38
		::MiHoYo::SDK::UploadContent* uploadContent; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GAMEREPORTMODEL_CTOR_OFFSET))(this);
		}

	};
}
