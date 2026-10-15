#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Threading { class ThreadPoolWorkQueue; }

#define SYSTEM_THREADING_THREADPOOLGLOBALS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C132520)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadPoolGlobals_TypeDefinitionIndex = 857;

	class ThreadPoolGlobals : public ::System::Object
	{
	public:
		static ::System::Threading::ThreadPoolWorkQueue** StaticGet_workQueue()
		{
			return (::System::Threading::ThreadPoolWorkQueue**)UnitySDK::FromName("System.Threading", "ThreadPoolGlobals")->GetStaticField(0x2A8E0);
		}

		static ::System::UInt32* StaticGet_tpQuantum()
		{
			return (::System::UInt32*)UnitySDK::FromName("System.Threading", "ThreadPoolGlobals")->GetStaticField(0x8B90);
		}

		static ::System::Boolean* StaticGet_tpHosted()
		{
			return (::System::Boolean*)UnitySDK::FromName("System.Threading", "ThreadPoolGlobals")->GetStaticField(0x8B94);
		}

		static ::System::Boolean* StaticGet_vmTpInitialized()
		{
			return (::System::Boolean*)UnitySDK::FromName("System.Threading", "ThreadPoolGlobals")->GetStaticField(0x8B95);
		}

		static ::System::Boolean* StaticGet_enableWorkerTracking()
		{
			return (::System::Boolean*)UnitySDK::FromName("System.Threading", "ThreadPoolGlobals")->GetStaticField(0x8B96);
		}

		static ::System::Int32* StaticGet_processorCount()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Threading", "ThreadPoolGlobals")->GetStaticField(0x8B98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLGLOBALS_CCTOR_OFFSET))();
		}

	};
}
