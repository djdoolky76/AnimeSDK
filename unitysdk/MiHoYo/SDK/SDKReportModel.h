#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/A443DA74D392FE88.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SDKReportModel_UploadContent; }
namespace System { class String; }

#define MIHOYO_SDK_SDKREPORTMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x39E1730)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKReportModel_TypeDefinitionIndex = 12676;

	class SDKReportModel : public ::System::Object
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
		::MiHoYo::SDK::SDKReportModel_UploadContent* uploadContent; // 0x40
		::BED79290917896D4::A443DA74D392FE88 reportType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORTMODEL__CTOR_OFFSET))(this);
		}
	};
}
