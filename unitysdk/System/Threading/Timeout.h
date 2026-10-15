#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

#define SYSTEM_THREADING_TIMEOUT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C162FD0)

namespace System::Threading
{
	class Timeout : public ::System::Object
	{
	public:
		static ::System::TimeSpan* StaticGet_InfiniteTimeSpan()
		{
			return (::System::TimeSpan*)UnitySDK::FromName("System.Threading", "Timeout")->GetStaticField(0x7990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMEOUT_CCTOR_OFFSET))();
		}

	};
}
