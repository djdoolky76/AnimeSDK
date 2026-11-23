#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_E1871F115344E97F_FDC2326E18FA9680_OFFSET UNITYSDK_OFFSET(0x29B23C0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_E1871F115344E97F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewManager_E1871F115344E97F_TypeDefinitionIndex = 15551;

	class MiHoYoSDKWebViewManager_E1871F115344E97F : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* E4BEEB5D1A5A445B; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_E1871F115344E97F__CTOR_OFFSET))(this);
		}

		::System::Void FDC2326E18FA9680()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_E1871F115344E97F_FDC2326E18FA9680_OFFSET))(this);
		}
	};
}
