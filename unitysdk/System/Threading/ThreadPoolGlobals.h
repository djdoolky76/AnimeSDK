#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Threading { class ThreadPoolWorkQueue; }

#define SYSTEM_THREADING_THREADPOOLGLOBALS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C160E40)

namespace System::Threading
{
	class ThreadPoolGlobals : public ::System::Object
	{
	public:
		static ::System::Threading::ThreadPoolWorkQueue** StaticGet_workQueue()
		{
			return (::System::Threading::ThreadPoolWorkQueue**)UnitySDK::FromName("System.Threading", "ThreadPoolGlobals")->GetStaticField(0x21580);
		}

		static ::System::Int32* StaticGet_processorCount()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Threading", "ThreadPoolGlobals")->GetStaticField(0x78E0);
		}

		static ::System::UInt32* StaticGet_tpQuantum()
		{
			return (::System::UInt32*)UnitySDK::FromName("System.Threading", "ThreadPoolGlobals")->GetStaticField(0x78E4);
		}

		static ::System::Boolean* StaticGet_vmTpInitialized()
		{
			return (::System::Boolean*)UnitySDK::FromName("System.Threading", "ThreadPoolGlobals")->GetStaticField(0x78E8);
		}

		static ::System::Boolean* StaticGet_tpHosted()
		{
			return (::System::Boolean*)UnitySDK::FromName("System.Threading", "ThreadPoolGlobals")->GetStaticField(0x78E9);
		}

		static ::System::Boolean* StaticGet_enableWorkerTracking()
		{
			return (::System::Boolean*)UnitySDK::FromName("System.Threading", "ThreadPoolGlobals")->GetStaticField(0x78EA);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLGLOBALS_CCTOR_OFFSET))();
		}

	};
}
