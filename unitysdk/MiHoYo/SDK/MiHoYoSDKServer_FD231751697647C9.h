#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKServer; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKSERVER_FD231751697647C9_B49887DD9D63B9EF_OFFSET UNITYSDK_OFFSET(0x2A002B0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_FD231751697647C9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer_FD231751697647C9_TypeDefinitionIndex = 15819;

	class MiHoYoSDKServer_FD231751697647C9 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKServer* A544919C800E2923; // 0x10
		::System::String* B083BE7841B347C4; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_FD231751697647C9__CTOR_OFFSET))(this);
		}

		::System::Void B49887DD9D63B9EF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_FD231751697647C9_B49887DD9D63B9EF_OFFSET))(this);
		}
	};
}
