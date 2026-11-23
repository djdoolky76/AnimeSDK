#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/MiHoYoSDKServer_AEC82C946963EA47.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKServer; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKSERVER_A1A2210F80318ED5_E338C5C434084AE2_OFFSET UNITYSDK_OFFSET(0x2A000D0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_A1A2210F80318ED5__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer_A1A2210F80318ED5_TypeDefinitionIndex = 15816;

	class MiHoYoSDKServer_A1A2210F80318ED5 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKServer* A544919C800E2923; // 0x10
		::System::String* A010979B935AEDDF; // 0x18
		::System::String* B6018BB9F7294B44; // 0x20
		::MiHoYo::SDK::MiHoYoSDKServer_AEC82C946963EA47 ED9DF246D9B6769E; // 0x28
		::System::Int32 B714679C324FF96E; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_A1A2210F80318ED5__CTOR_OFFSET))(this);
		}

		::System::Void E338C5C434084AE2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_A1A2210F80318ED5_E338C5C434084AE2_OFFSET))(this);
		}
	};
}
