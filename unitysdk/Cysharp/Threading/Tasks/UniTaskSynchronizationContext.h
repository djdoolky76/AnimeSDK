#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/SpinLock.h"
#include "unitysdk/System/Threading/SynchronizationContext.h"
namespace System { class Object; }
namespace System::Threading { class SendOrPostCallback; }
namespace System::Threading { class SynchronizationContext; }

#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F128E10)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x1F128860)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F128E00)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_OPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F128820)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_OPERATIONSTARTED_OFFSET UNITYSDK_OFFSET(0x1F1287E0)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_POST_OFFSET UNITYSDK_OFFSET(0x1F1283D0)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_RUN_OFFSET UNITYSDK_OFFSET(0x1F128870)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_SEND_OFFSET UNITYSDK_OFFSET(0x1F1283A0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskSynchronizationContext_TypeDefinitionIndex = 38446;

	class UniTaskSynchronizationContext : public ::System::Threading::SynchronizationContext
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_waitingList()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "UniTaskSynchronizationContext")->GetStaticField(0x3AF00);
		}

		static ::Il2CppArray<::System::Object*>** StaticGet_actionList()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "UniTaskSynchronizationContext")->GetStaticField(0x3AF08);
		}

		static ::System::Threading::SpinLock* StaticGet_gate()
		{
			return (::System::Threading::SpinLock*)UnitySDK::FromName("Cysharp.Threading.Tasks", "UniTaskSynchronizationContext")->GetStaticField(0xBE30);
		}

		static ::System::Int32* StaticGet_opCount()
		{
			return (::System::Int32*)UnitySDK::FromName("Cysharp.Threading.Tasks", "UniTaskSynchronizationContext")->GetStaticField(0xBE34);
		}

		static ::System::Int32* StaticGet_waitingListCount()
		{
			return (::System::Int32*)UnitySDK::FromName("Cysharp.Threading.Tasks", "UniTaskSynchronizationContext")->GetStaticField(0xBE38);
		}

		static ::System::Int32* StaticGet_actionListCount()
		{
			return (::System::Int32*)UnitySDK::FromName("Cysharp.Threading.Tasks", "UniTaskSynchronizationContext")->GetStaticField(0xBE3C);
		}

		static ::System::Boolean* StaticGet_dequing()
		{
			return (::System::Boolean*)UnitySDK::FromName("Cysharp.Threading.Tasks", "UniTaskSynchronizationContext")->GetStaticField(0xBE40);
		}

		// static const ::System::Object MaxArrayLength; // 0x0
		// static const ::System::Object InitialSize; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_CCTOR_OFFSET))();
		}

		::System::Void Send(::System::Threading::SendOrPostCallback* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SendOrPostCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_SEND_OFFSET))(this, a1, a2);
		}

		::System::Void Post(::System::Threading::SendOrPostCallback* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SendOrPostCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_POST_OFFSET))(this, a1, a2);
		}

		::System::Void OperationStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_OPERATIONSTARTED_OFFSET))(this);
		}

		::System::Void OperationCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_OPERATIONCOMPLETED_OFFSET))(this);
		}

		::System::Threading::SynchronizationContext* CreateCopy()
		{
			return ((::System::Threading::SynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_CREATECOPY_OFFSET))(this);
		}

		static ::System::Void Run()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_RUN_OFFSET))();
		}

	};
}
