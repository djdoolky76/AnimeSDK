#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKServer; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKSERVER_EDBABB105FC383CE_EBC77C3DD6C57D97_OFFSET UNITYSDK_OFFSET(0x2A00190)
#define MIHOYO_SDK_MIHOYOSDKSERVER_EDBABB105FC383CE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer_EDBABB105FC383CE_TypeDefinitionIndex = 15817;

	class MiHoYoSDKServer_EDBABB105FC383CE : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKServer* A544919C800E2923; // 0x10
		::System::String* B083BE7841B347C4; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_EDBABB105FC383CE__CTOR_OFFSET))(this);
		}

		::System::Void EBC77C3DD6C57D97()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_EDBABB105FC383CE_EBC77C3DD6C57D97_OFFSET))(this);
		}
	};
}
