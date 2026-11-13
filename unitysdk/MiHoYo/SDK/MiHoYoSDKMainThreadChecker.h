#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class MiHoYoSDKMainThreadChecker; }

#define MIHOYO_SDK_MIHOYOSDKMAINTHREADCHECKER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E306680)
#define MIHOYO_SDK_MIHOYOSDKMAINTHREADCHECKER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E306550)
#define MIHOYO_SDK_MIHOYOSDKMAINTHREADCHECKER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1E306560)
#define MIHOYO_SDK_MIHOYOSDKMAINTHREADCHECKER_ISMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1E306590)
#define MIHOYO_SDK_MIHOYOSDKMAINTHREADCHECKER_SETMAINTHREADID_OFFSET UNITYSDK_OFFSET(0x1E2F5940)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKMainThreadChecker_TypeDefinitionIndex = 47504;

	class MiHoYoSDKMainThreadChecker : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDKMainThreadChecker** StaticGet_sInstance()
		{
			return (::MiHoYo::SDK::MiHoYoSDKMainThreadChecker**)UnitySDK::FromName("MiHoYo.SDK", "MiHoYoSDKMainThreadChecker")->GetStaticField(0x1EF20);
		}

		static ::System::Int32* StaticGet_sMainThreadId()
		{
			return (::System::Int32*)UnitySDK::FromName("MiHoYo.SDK", "MiHoYoSDKMainThreadChecker")->GetStaticField(0x68E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKMAINTHREADCHECKER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKMAINTHREADCHECKER_CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::MiHoYoSDKMainThreadChecker* get_Instance()
		{
			return ((::MiHoYo::SDK::MiHoYoSDKMainThreadChecker*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKMAINTHREADCHECKER_GET_INSTANCE_OFFSET))();
		}

		::System::Void SetMainThreadId()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKMAINTHREADCHECKER_SETMAINTHREADID_OFFSET))(this);
		}

		static ::System::Boolean IsMainThread()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKMAINTHREADCHECKER_ISMAINTHREAD_OFFSET))();
		}

	};
}
