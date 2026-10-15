#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKCACHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2C6DB0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKCACHE_CREATEINT32TASKS_OFFSET UNITYSDK_OFFSET(0x1C2C6C80)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncTaskCache_TypeDefinitionIndex = 1352;

	class AsyncTaskCache : public ::System::Object
	{
	public:
		static ::System::Threading::Tasks::Task** StaticGet_FalseTask()
		{
			return (::System::Threading::Tasks::Task**)UnitySDK::FromName("System.Runtime.CompilerServices", "AsyncTaskCache")->GetStaticField(0x15950);
		}

		static ::Il2CppArray<::System::Threading::Tasks::Task*>** StaticGet_Int32Tasks()
		{
			return (::Il2CppArray<::System::Threading::Tasks::Task*>**)UnitySDK::FromName("System.Runtime.CompilerServices", "AsyncTaskCache")->GetStaticField(0x15958);
		}

		static ::System::Threading::Tasks::Task** StaticGet_TrueTask()
		{
			return (::System::Threading::Tasks::Task**)UnitySDK::FromName("System.Runtime.CompilerServices", "AsyncTaskCache")->GetStaticField(0x15960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKCACHE_CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Threading::Tasks::Task*>* CreateInt32Tasks()
		{
			return ((::Il2CppArray<::System::Threading::Tasks::Task*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKCACHE_CREATEINT32TASKS_OFFSET))();
		}

	};
}
