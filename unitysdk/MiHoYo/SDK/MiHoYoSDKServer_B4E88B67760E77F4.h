#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F9874422644484EC_A403B99D3ECA085F.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKServer; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKSERVER_B4E88B67760E77F4_B29D7FD4268238B3_OFFSET UNITYSDK_OFFSET(0x2A00340)
#define MIHOYO_SDK_MIHOYOSDKSERVER_B4E88B67760E77F4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer_B4E88B67760E77F4_TypeDefinitionIndex = 15820;

	class MiHoYoSDKServer_B4E88B67760E77F4 : public ::System::Object
	{
	public:
		::F9874422644484EC_A403B99D3ECA085F B714679C324FF96E; // 0x10
		::System::Byte _padding0[0x4];
		::MiHoYo::SDK::MiHoYoSDKServer* A544919C800E2923; // 0x18
		::System::String* B083BE7841B347C4; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_B4E88B67760E77F4__CTOR_OFFSET))(this);
		}

		::System::Void B29D7FD4268238B3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_B4E88B67760E77F4_B29D7FD4268238B3_OFFSET))(this);
		}
	};
}
