#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FF1237522147A967;
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKSERVER_NETWORKRESPONSEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer_NetworkResponseModel_TypeDefinitionIndex = 15809;

	class MiHoYoSDKServer_NetworkResponseModel : public ::System::Object
	{
	public:
		::System::Int32 retcode; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* message; // 0x18
		::FF1237522147A967* data; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_NETWORKRESPONSEMODEL__CTOR_OFFSET))(this);
		}
	};
}
