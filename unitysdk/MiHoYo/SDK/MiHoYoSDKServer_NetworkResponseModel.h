#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKSERVER_NETWORKRESPONSEMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xAFE0760)

namespace MiHoYo::SDK
{
	class MiHoYoSDKServer_NetworkResponseModel : public ::System::Object
	{
	public:
		::System::Int32 retcode; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* message; // 0x18
		::MiHoYo::SDK::JSONNode* data; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_NETWORKRESPONSEMODEL_CTOR_OFFSET))(this);
		}

	};
}
