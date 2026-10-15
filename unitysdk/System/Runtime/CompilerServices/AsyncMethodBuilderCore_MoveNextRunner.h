#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class ContextCallback; }
namespace System::Threading { class ExecutionContext; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_MOVENEXTRUNNER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C5DE0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_MOVENEXTRUNNER_INVOKEMOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C2C6AF0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_MOVENEXTRUNNER_RUN_OFFSET UNITYSDK_OFFSET(0x1C2C68C0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncMethodBuilderCore_MoveNextRunner_TypeDefinitionIndex = 1354;

	class AsyncMethodBuilderCore_MoveNextRunner : public ::System::Object
	{
	public:
		::System::Threading::ExecutionContext* m_context; // 0x10
		::System::Runtime::CompilerServices::IAsyncStateMachine* m_stateMachine; // 0x18
		static ::System::Threading::ContextCallback** StaticGet_s_invokeMoveNext()
		{
			return (::System::Threading::ContextCallback**)UnitySDK::FromName("System.Runtime.CompilerServices", "MoveNextRunner")->GetStaticField(0x15930);
		}

		::System::Void _ctor(::System::Threading::ExecutionContext* a1, ::System::Runtime::CompilerServices::IAsyncStateMachine* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ExecutionContext*, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_MOVENEXTRUNNER_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Run()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_MOVENEXTRUNNER_RUN_OFFSET))(this);
		}

		static ::System::Void InvokeMoveNext(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_MOVENEXTRUNNER_INVOKEMOVENEXT_OFFSET))(a1);
		}

	};
}
