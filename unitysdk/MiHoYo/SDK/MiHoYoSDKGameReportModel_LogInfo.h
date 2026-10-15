#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKGAMEREPORTMODEL_LOGINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xAFCAE10)

namespace MiHoYo::SDK
{
	class MiHoYoSDKGameReportModel_LogInfo : public ::System::Object
	{
	public:
		::System::String* log_time; // 0x10
		::System::String* region; // 0x18
		::System::Int32 action_id; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* action_name; // 0x28
		::System::String* c_body; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKGAMEREPORTMODEL_LOGINFO_CTOR_OFFSET))(this);
		}

	};
}
