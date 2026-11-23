#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_F54AB646E9EF9F1B_F3A8A42C3E5A0E48_OFFSET UNITYSDK_OFFSET(0x29B16E0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_F54AB646E9EF9F1B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewManager_F54AB646E9EF9F1B_TypeDefinitionIndex = 15546;

	class MiHoYoSDKWebViewManager_F54AB646E9EF9F1B : public ::System::Object
	{
	public:
		::System::Action* FD50C3790BDAEEC9; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_F54AB646E9EF9F1B__CTOR_OFFSET))(this);
		}

		::System::Void F3A8A42C3E5A0E48()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_F54AB646E9EF9F1B_F3A8A42C3E5A0E48_OFFSET))(this);
		}
	};
}
