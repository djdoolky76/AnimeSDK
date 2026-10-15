#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PERFORMANCEMETRICSUTILS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF56330)
#define MIHOYO_SDK_PERFORMANCEMETRICSUTILS_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF56320)
#define MIHOYO_SDK_PERFORMANCEMETRICSUTILS_GETMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1BF55EA0)
#define MIHOYO_SDK_PERFORMANCEMETRICSUTILS_GETTHREADCOUNT_OFFSET UNITYSDK_OFFSET(0x1BF55A30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PerformanceMetricsUtils_TypeDefinitionIndex = 7987;

	class PerformanceMetricsUtils : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_processId()
		{
			return (::System::Int32*)UnitySDK::FromName("MiHoYo.SDK", "PerformanceMetricsUtils")->GetStaticField(0x7710);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PERFORMANCEMETRICSUTILS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PERFORMANCEMETRICSUTILS_CCTOR_OFFSET))();
		}

		static ::System::Int32 GetThreadCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PERFORMANCEMETRICSUTILS_GETTHREADCOUNT_OFFSET))();
		}

		static ::System::Int32 GetMemorySize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PERFORMANCEMETRICSUTILS_GETMEMORYSIZE_OFFSET))();
		}

	};
}
