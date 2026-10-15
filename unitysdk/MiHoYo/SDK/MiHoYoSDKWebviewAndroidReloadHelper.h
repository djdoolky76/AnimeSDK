#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWANDROIDRELOADHELPER_CTOR_OFFSET UNITYSDK_OFFSET(0xB013370)

namespace MiHoYo::SDK
{
	class MiHoYoSDKWebviewAndroidReloadHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWANDROIDRELOADHELPER_CTOR_OFFSET))(this);
		}

	};
}
