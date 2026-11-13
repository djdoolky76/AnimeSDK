#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class AggregateException; }
namespace System { class EventArgs; }
namespace System { class EventHandler; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_ADDFAULTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1DD79170)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_ADD_OFFSET UNITYSDK_OFFSET(0x1DD6FF20)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_APPDOMAINUNLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DD78670)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD79D30)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_CREATEEXCEPTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x1DD70000)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD6FEC0)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_ENSUREADUNLOADCALLBACKREGISTERED_OFFSET UNITYSDK_OFFSET(0x1DD78470)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1DD786D0)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_GETCANCELLATIONEXCEPTIONDISPATCHINFO_OFFSET UNITYSDK_OFFSET(0x1DD79D20)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_GETEXCEPTIONDISPATCHINFOS_OFFSET UNITYSDK_OFFSET(0x1DD703D0)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_GET_CONTAINSFAULTLIST_OFFSET UNITYSDK_OFFSET(0x1DD6F480)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_MARKASHANDLED_OFFSET UNITYSDK_OFFSET(0x1DD6FBC0)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_MARKASUNHANDLED_OFFSET UNITYSDK_OFFSET(0x1DD79C70)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_SETCANCELLATIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1DD79070)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_SHOULDFAILFASTONUNOBSERVEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1DD78660)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskExceptionHolder_TypeDefinitionIndex = 927;

	class TaskExceptionHolder : public ::System::Object
	{
	public:
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* m_cancellationException; // 0x10
		::System::Collections::Generic::List_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* m_faultExceptions; // 0x18
		::System::Threading::Tasks::Task* m_task; // 0x20
		::System::Boolean m_isHandled; // 0x28
		static ::System::EventHandler** StaticGet_s_adUnloadEventHandler()
		{
			return (::System::EventHandler**)UnitySDK::FromName("System.Threading.Tasks", "TaskExceptionHolder")->GetStaticField(0x18770);
		}

		static ::System::Boolean* StaticGet_s_domainUnloadStarted()
		{
			return (::System::Boolean*)UnitySDK::FromName("System.Threading.Tasks", "TaskExceptionHolder")->GetStaticField(0x57E0);
		}

		static ::System::Boolean* StaticGet_s_failFastOnUnobservedException()
		{
			return (::System::Boolean*)UnitySDK::FromName("System.Threading.Tasks", "TaskExceptionHolder")->GetStaticField(0x57E1);
		}

		::System::Void _ctor(::System::Threading::Tasks::Task* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_CCTOR_OFFSET))();
		}

		static ::System::Boolean ShouldFailFastOnUnobservedException()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_SHOULDFAILFASTONUNOBSERVEDEXCEPTION_OFFSET))();
		}

		static ::System::Void EnsureADUnloadCallbackRegistered()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_ENSUREADUNLOADCALLBACKREGISTERED_OFFSET))();
		}

		static ::System::Void AppDomainUnloadCallback(::System::Object* a1, ::System::EventArgs* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_APPDOMAINUNLOADCALLBACK_OFFSET))(a1, a2);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_FINALIZE_OFFSET))(this);
		}

		::System::Boolean get_ContainsFaultList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_GET_CONTAINSFAULTLIST_OFFSET))(this);
		}

		::System::Void Add(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_ADD_OFFSET))(this, a1, a2);
		}

		::System::Void SetCancellationException(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_SETCANCELLATIONEXCEPTION_OFFSET))(this, a1);
		}

		::System::Void AddFaultException(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_ADDFAULTEXCEPTION_OFFSET))(this, a1);
		}

		::System::Void MarkAsUnhandled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_MARKASUNHANDLED_OFFSET))(this);
		}

		::System::Void MarkAsHandled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_MARKASHANDLED_OFFSET))(this, a1);
		}

		::System::AggregateException* CreateExceptionObject(::System::Boolean a1, ::System::Exception* a2)
		{
			return ((::System::AggregateException*(*)(::PVOID, ::System::Boolean, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_CREATEEXCEPTIONOBJECT_OFFSET))(this, a1, a2);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* GetExceptionDispatchInfos()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_GETEXCEPTIONDISPATCHINFOS_OFFSET))(this);
		}

		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* GetCancellationExceptionDispatchInfo()
		{
			return ((::System::Runtime::ExceptionServices::ExceptionDispatchInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_GETCANCELLATIONEXCEPTIONDISPATCHINFO_OFFSET))(this);
		}

	};
}
