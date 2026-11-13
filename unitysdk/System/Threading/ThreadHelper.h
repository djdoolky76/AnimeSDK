#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Delegate; }
namespace System { class Object; }
namespace System::Threading { class ContextCallback; }
namespace System::Threading { class ExecutionContext; }

#define SYSTEM_THREADING_THREADHELPER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD7D180)
#define SYSTEM_THREADING_THREADHELPER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD7C1A0)
#define SYSTEM_THREADING_THREADHELPER_SETEXECUTIONCONTEXTHELPER_OFFSET UNITYSDK_OFFSET(0x1DD7D1E0)
#define SYSTEM_THREADING_THREADHELPER_THREADSTART_1_OFFSET UNITYSDK_OFFSET(0x1DD7D3A0)
#define SYSTEM_THREADING_THREADHELPER_THREADSTART_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1DD7D1F0)
#define SYSTEM_THREADING_THREADHELPER_THREADSTART_OFFSET UNITYSDK_OFFSET(0x1DD7D2D0)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadHelper_TypeDefinitionIndex = 849;

	class ThreadHelper : public ::System::Object
	{
	public:
		::System::Threading::ExecutionContext* _executionContext; // 0x10
		::System::Delegate* _start; // 0x18
		::System::Object* _startArg; // 0x20
		static ::System::Threading::ContextCallback** StaticGet__ccb()
		{
			return (::System::Threading::ContextCallback**)UnitySDK::FromName("System.Threading", "ThreadHelper")->GetStaticField(0x18CE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADHELPER_CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Delegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADHELPER_CTOR_OFFSET))(this, a1);
		}

		::System::Void SetExecutionContextHelper(::System::Threading::ExecutionContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ExecutionContext*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADHELPER_SETEXECUTIONCONTEXTHELPER_OFFSET))(this, a1);
		}

		static ::System::Void ThreadStart_Context(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADHELPER_THREADSTART_CONTEXT_OFFSET))(a1);
		}

		::System::Void ThreadStart(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADHELPER_THREADSTART_OFFSET))(this, a1);
		}

		::System::Void ThreadStart_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADHELPER_THREADSTART_1_OFFSET))(this);
		}

	};
}
