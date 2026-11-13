#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Threading { class ThreadPoolWorkQueue; }

#define SYSTEM_THREADING_THREADPOOLGLOBALS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD7DFD0)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadPoolGlobals_TypeDefinitionIndex = 857;

	class ThreadPoolGlobals : public ::System::Object
	{
	public:
		static ::System::Threading::ThreadPoolWorkQueue** StaticGet_workQueue()
		{
			return (::System::Threading::ThreadPoolWorkQueue**)UnitySDK::FromName("System.Threading", "ThreadPoolGlobals")->GetStaticField(0x18D50);
		}

		static ::System::Boolean* StaticGet_tpHosted()
		{
			return (::System::Boolean*)UnitySDK::FromName("System.Threading", "ThreadPoolGlobals")->GetStaticField(0x5950);
		}

		static ::System::Boolean* StaticGet_enableWorkerTracking()
		{
			return (::System::Boolean*)UnitySDK::FromName("System.Threading", "ThreadPoolGlobals")->GetStaticField(0x5951);
		}

		static ::System::Boolean* StaticGet_vmTpInitialized()
		{
			return (::System::Boolean*)UnitySDK::FromName("System.Threading", "ThreadPoolGlobals")->GetStaticField(0x5952);
		}

		static ::System::UInt32* StaticGet_tpQuantum()
		{
			return (::System::UInt32*)UnitySDK::FromName("System.Threading", "ThreadPoolGlobals")->GetStaticField(0x5954);
		}

		static ::System::Int32* StaticGet_processorCount()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Threading", "ThreadPoolGlobals")->GetStaticField(0x5958);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLGLOBALS_CCTOR_OFFSET))();
		}

	};
}
