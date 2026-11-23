#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKServer; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKSERVER_EA3E0B9A7598499A_FC73C1605452CEF7_OFFSET UNITYSDK_OFFSET(0x2A00220)
#define MIHOYO_SDK_MIHOYOSDKSERVER_EA3E0B9A7598499A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer_EA3E0B9A7598499A_TypeDefinitionIndex = 15818;

	class MiHoYoSDKServer_EA3E0B9A7598499A : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKServer* A544919C800E2923; // 0x10
		::System::String* B083BE7841B347C4; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_EA3E0B9A7598499A__CTOR_OFFSET))(this);
		}

		::System::Void FC73C1605452CEF7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_EA3E0B9A7598499A_FC73C1605452CEF7_OFFSET))(this);
		}
	};
}
