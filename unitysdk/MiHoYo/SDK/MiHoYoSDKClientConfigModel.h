#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONNode; }

#define MIHOYO_SDK_MIHOYOSDKCLIENTCONFIGMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xAFC9F40)

namespace MiHoYo::SDK
{
	class MiHoYoSDKClientConfigModel : public ::System::Object
	{
	public:
		::System::Int32 emailBindRemindInterval; // 0x10
		::System::Boolean emailBindRemind; // 0x14
		::System::Boolean disableEmailBindSkip; // 0x15
		::System::Boolean noticePreloadDisable; // 0x16
		::System::Byte _padding0[0x1];
		::System::Int32 reportLocalMaxCount; // 0x18
		::System::Int32 reportLocalDeletePercentage; // 0x1C
		::System::Boolean modifyRealNameOtherVerify; // 0x20
		::System::Void _ctor(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKCLIENTCONFIGMODEL_CTOR_OFFSET))(this, a1);
		}

	};
}
