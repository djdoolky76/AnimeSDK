#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebViewManager; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_A1509CDB4B48C0AE_E1ADDE47A1A52AAD_OFFSET UNITYSDK_OFFSET(0x29B1710)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_A1509CDB4B48C0AE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewManager_A1509CDB4B48C0AE_TypeDefinitionIndex = 15547;

	class MiHoYoSDKWebViewManager_A1509CDB4B48C0AE : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKWebViewManager* A544919C800E2923; // 0x10
		::System::Boolean F5EE4E61D8B9AAFE; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_A1509CDB4B48C0AE__CTOR_OFFSET))(this);
		}

		::System::Void E1ADDE47A1A52AAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_A1509CDB4B48C0AE_E1ADDE47A1A52AAD_OFFSET))(this);
		}
	};
}
