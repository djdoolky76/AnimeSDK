#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/InternalTaskOptions.h"
#include "unitysdk/System/Threading/Tasks/TaskContinuationOptions.h"
#include "unitysdk/System/Threading/Tasks/TaskCreationOptions.h"
#include "unitysdk/System/Threading/Tasks/TaskStatus.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/YieldAwaitable.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace System { class Action; }
namespace System { class AggregateException; }
namespace System { class Delegate; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }
namespace System::Threading { class ContextCallback; }
namespace System::Threading { class ExecutionContext; }
namespace System::Threading { class ManualResetEventSlim; }
namespace System::Threading { class ThreadAbortException; }
namespace System::Threading { class WaitHandle; }
namespace System::Threading::Tasks { class ITaskCompletionAction; }
namespace System::Threading::Tasks { class StackGuard; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { class TaskContinuation; }
namespace System::Threading::Tasks { class TaskFactory; }
namespace System::Threading::Tasks { class TaskScheduler; }
namespace System::Threading::Tasks { class Task_ContingentProperties; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_THREADING_TASKS_TASK_ADDCOMPLETIONACTION_1_OFFSET UNITYSDK_OFFSET(0x1D2DD900)
#define SYSTEM_THREADING_TASKS_TASK_ADDCOMPLETIONACTION_OFFSET UNITYSDK_OFFSET(0x1D2DE550)
#define SYSTEM_THREADING_TASKS_TASK_ADDEXCEPTIONSFORCOMPLETEDTASK_OFFSET UNITYSDK_OFFSET(0x1D2E0690)
#define SYSTEM_THREADING_TASKS_TASK_ADDEXCEPTIONSFROMCHILDREN_OFFSET UNITYSDK_OFFSET(0x1D2DAC30)
#define SYSTEM_THREADING_TASKS_TASK_ADDEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1D2D9E40)
#define SYSTEM_THREADING_TASKS_TASK_ADDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D2D9A30)
#define SYSTEM_THREADING_TASKS_TASK_ADDNEWCHILD_OFFSET UNITYSDK_OFFSET(0x1D2D7FA0)
#define SYSTEM_THREADING_TASKS_TASK_ADDTASKCONTINUATIONCOMPLEX_OFFSET UNITYSDK_OFFSET(0x1D2DE560)
#define SYSTEM_THREADING_TASKS_TASK_ADDTASKCONTINUATION_OFFSET UNITYSDK_OFFSET(0x1D2DCCA0)
#define SYSTEM_THREADING_TASKS_TASK_ADDTOACTIVETASKS_OFFSET UNITYSDK_OFFSET(0x1D2D64E0)
#define SYSTEM_THREADING_TASKS_TASK_ASSIGNCANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x1D2D8070)
#define SYSTEM_THREADING_TASKS_TASK_ATOMICSTATEUPDATE_1_OFFSET UNITYSDK_OFFSET(0x1D2D88B0)
#define SYSTEM_THREADING_TASKS_TASK_ATOMICSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1D2D8840)
#define SYSTEM_THREADING_TASKS_TASK_CANCELLATIONCLEANUPLOGIC_OFFSET UNITYSDK_OFFSET(0x1D2DC470)
#define SYSTEM_THREADING_TASKS_TASK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2E14D0)
#define SYSTEM_THREADING_TASKS_TASK_CONFIGUREAWAIT_OFFSET UNITYSDK_OFFSET(0x1D2DC760)
#define SYSTEM_THREADING_TASKS_TASK_CONTINUEWITHCORE_OFFSET UNITYSDK_OFFSET(0x1D2DE0F0)
#define SYSTEM_THREADING_TASKS_TASK_CONTINUEWITH_1_OFFSET UNITYSDK_OFFSET(0x1D2DDED0)
#define SYSTEM_THREADING_TASKS_TASK_CONTINUEWITH_2_OFFSET UNITYSDK_OFFSET(0x1D2DE350)
#define SYSTEM_THREADING_TASKS_TASK_CONTINUEWITH_3_OFFSET UNITYSDK_OFFSET(0x1D2DE510)
#define SYSTEM_THREADING_TASKS_TASK_CONTINUEWITH_4_OFFSET UNITYSDK_OFFSET(0x1D2DE390)
#define SYSTEM_THREADING_TASKS_TASK_CONTINUEWITH_OFFSET UNITYSDK_OFFSET(0x1D2DDD40)
#define SYSTEM_THREADING_TASKS_TASK_COPYEXECUTIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1D2D9700)
#define SYSTEM_THREADING_TASKS_TASK_CREATEREPLICATASK_OFFSET UNITYSDK_OFFSET(0x1D2DBFD0)
#define SYSTEM_THREADING_TASKS_TASK_CREATIONOPTIONSFROMCONTINUATIONOPTIONS_OFFSET UNITYSDK_OFFSET(0x1D2DE010)
#define SYSTEM_THREADING_TASKS_TASK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D2D7D10)
#define SYSTEM_THREADING_TASKS_TASK_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D2D7D20)
#define SYSTEM_THREADING_TASKS_TASK_CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D2D6080)
#define SYSTEM_THREADING_TASKS_TASK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D7CA0)
#define SYSTEM_THREADING_TASKS_TASK_DELAY_1_OFFSET UNITYSDK_OFFSET(0x1D2E0A50)
#define SYSTEM_THREADING_TASKS_TASK_DELAY_OFFSET UNITYSDK_OFFSET(0x1D2E0A20)
#define SYSTEM_THREADING_TASKS_TASK_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1D2D9840)
#define SYSTEM_THREADING_TASKS_TASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D2D9760)
#define SYSTEM_THREADING_TASKS_TASK_DISREGARDCHILD_OFFSET UNITYSDK_OFFSET(0x1D2D8460)
#define SYSTEM_THREADING_TASKS_TASK_ENSURECONTINGENTPROPERTIESINITIALIZEDCORE_OFFSET UNITYSDK_OFFSET(0x1D2D9160)
#define SYSTEM_THREADING_TASKS_TASK_ENSURECONTINGENTPROPERTIESINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1D2D83B0)
#define SYSTEM_THREADING_TASKS_TASK_EXECUTEENTRY_OFFSET UNITYSDK_OFFSET(0x1D2D7960)
#define SYSTEM_THREADING_TASKS_TASK_EXECUTESELFREPLICATING_OFFSET UNITYSDK_OFFSET(0x1D2DBD10)
#define SYSTEM_THREADING_TASKS_TASK_EXECUTEWITHTHREADLOCAL_OFFSET UNITYSDK_OFFSET(0x1D2DC150)
#define SYSTEM_THREADING_TASKS_TASK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D2DBB40)
#define SYSTEM_THREADING_TASKS_TASK_EXECUTIONCONTEXTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D2DC670)
#define SYSTEM_THREADING_TASKS_TASK_FINISHCONTINUATIONS_OFFSET UNITYSDK_OFFSET(0x1D2DB2B0)
#define SYSTEM_THREADING_TASKS_TASK_FINISHSTAGETHREE_OFFSET UNITYSDK_OFFSET(0x1D2DB010)
#define SYSTEM_THREADING_TASKS_TASK_FINISHSTAGETWO_OFFSET UNITYSDK_OFFSET(0x1D2DA860)
#define SYSTEM_THREADING_TASKS_TASK_FINISHTHREADABORTEDTASK_OFFSET UNITYSDK_OFFSET(0x1D2D9A40)
#define SYSTEM_THREADING_TASKS_TASK_FINISH_OFFSET UNITYSDK_OFFSET(0x1D2D9BF0)
#define SYSTEM_THREADING_TASKS_TASK_FIRETASKSCHEDULEDIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1D2D8AB0)
#define SYSTEM_THREADING_TASKS_TASK_FROMCANCELLATION_OFFSET UNITYSDK_OFFSET(0x1D2E08C0)
#define SYSTEM_THREADING_TASKS_TASK_FROMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D2E0890)
#define SYSTEM_THREADING_TASKS_TASK_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x1D2DC750)
#define SYSTEM_THREADING_TASKS_TASK_GETCANCELLATIONEXCEPTIONDISPATCHINFO_OFFSET UNITYSDK_OFFSET(0x1D2DA6A0)
#define SYSTEM_THREADING_TASKS_TASK_GETEXCEPTIONDISPATCHINFOS_OFFSET UNITYSDK_OFFSET(0x1D2DA4F0)
#define SYSTEM_THREADING_TASKS_TASK_GETEXCEPTIONS_OFFSET UNITYSDK_OFFSET(0x1D2D8E60)
#define SYSTEM_THREADING_TASKS_TASK_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1D2D9510)
#define SYSTEM_THREADING_TASKS_TASK_GET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x1D2D91D0)
#define SYSTEM_THREADING_TASKS_TASK_GET_CAPTUREDCONTEXT_OFFSET UNITYSDK_OFFSET(0x1D2D9690)
#define SYSTEM_THREADING_TASKS_TASK_GET_COMPLETEDEVENT_OFFSET UNITYSDK_OFFSET(0x1D2D9330)
#define SYSTEM_THREADING_TASKS_TASK_GET_COMPLETEDTASK_OFFSET UNITYSDK_OFFSET(0x1D2D9570)
#define SYSTEM_THREADING_TASKS_TASK_GET_CREATIONOPTIONS_OFFSET UNITYSDK_OFFSET(0x1D2D7F70)
#define SYSTEM_THREADING_TASKS_TASK_GET_CURRENTSTACKGUARD_OFFSET UNITYSDK_OFFSET(0x1D2D8D60)
#define SYSTEM_THREADING_TASKS_TASK_GET_EXCEPTIONRECORDED_OFFSET UNITYSDK_OFFSET(0x1D2D9630)
#define SYSTEM_THREADING_TASKS_TASK_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D2D8E30)
#define SYSTEM_THREADING_TASKS_TASK_GET_EXECUTINGTASKSCHEDULER_OFFSET UNITYSDK_OFFSET(0x1D2D9530)
#define SYSTEM_THREADING_TASKS_TASK_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x1D2D9540)
#define SYSTEM_THREADING_TASKS_TASK_GET_HANDEDOVERCHILDREPLICA_OFFSET UNITYSDK_OFFSET(0x1D2DC0B0)
#define SYSTEM_THREADING_TASKS_TASK_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D2D6450)
#define SYSTEM_THREADING_TASKS_TASK_GET_INTERNALCURRENT_OFFSET UNITYSDK_OFFSET(0x1D2D8D00)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISCANCELED_OFFSET UNITYSDK_OFFSET(0x1D2D6810)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISCANCELLATIONACKNOWLEDGED_OFFSET UNITYSDK_OFFSET(0x1D2D91F0)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISCANCELLATIONREQUESTED_OFFSET UNITYSDK_OFFSET(0x1D2D9120)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISCHILDREPLICA_OFFSET UNITYSDK_OFFSET(0x1D2D9600)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1D2D9200)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISDELEGATEINVOKED_OFFSET UNITYSDK_OFFSET(0x1D2DA850)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISEXCEPTIONOBSERVEDBYPARENT_OFFSET UNITYSDK_OFFSET(0x1D2DA840)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISFAULTED_OFFSET UNITYSDK_OFFSET(0x1D2D8E50)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISRANTOCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1D2D67F0)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISSELFREPLICATINGROOT_OFFSET UNITYSDK_OFFSET(0x1D2D8AC0)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISWAITNOTIFICATIONENABLEDORNOTRANTOCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1D2D8A10)
#define SYSTEM_THREADING_TASKS_TASK_GET_ISWAITNOTIFICATIONENABLED_OFFSET UNITYSDK_OFFSET(0x1D2D89E0)
#define SYSTEM_THREADING_TASKS_TASK_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1D2D8430)
#define SYSTEM_THREADING_TASKS_TASK_GET_SAVEDSTATEFORNEXTREPLICA_OFFSET UNITYSDK_OFFSET(0x1D2DC090)
#define SYSTEM_THREADING_TASKS_TASK_GET_SHOULDNOTIFYDEBUGGEROFWAITCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1D2D8A30)
#define SYSTEM_THREADING_TASKS_TASK_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1D2D90C0)
#define SYSTEM_THREADING_TASKS_TASK_HANDLEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D2DBE10)
#define SYSTEM_THREADING_TASKS_TASK_INNERINVOKEWITHARG_OFFSET UNITYSDK_OFFSET(0x1D2DC710)
#define SYSTEM_THREADING_TASKS_TASK_INNERINVOKE_OFFSET UNITYSDK_OFFSET(0x1D2DC6C0)
#define SYSTEM_THREADING_TASKS_TASK_INTERNALCANCEL_OFFSET UNITYSDK_OFFSET(0x1D2D6C50)
#define SYSTEM_THREADING_TASKS_TASK_INTERNALCURRENTIFATTACHED_OFFSET UNITYSDK_OFFSET(0x1D2D6000)
#define SYSTEM_THREADING_TASKS_TASK_INTERNALSTARTNEW_OFFSET UNITYSDK_OFFSET(0x1D2D8B00)
#define SYSTEM_THREADING_TASKS_TASK_INTERNALWAIT_OFFSET UNITYSDK_OFFSET(0x1D2DCF20)
#define SYSTEM_THREADING_TASKS_TASK_ISCOMPLETEDMETHOD_OFFSET UNITYSDK_OFFSET(0x1D2D9240)
#define SYSTEM_THREADING_TASKS_TASK_LOGFINISHCOMPLETIONNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1D2DDD30)
#define SYSTEM_THREADING_TASKS_TASK_MARKSTARTED_OFFSET UNITYSDK_OFFSET(0x1D2D8A40)
#define SYSTEM_THREADING_TASKS_TASK_NEWID_OFFSET UNITYSDK_OFFSET(0x1D2D8CB0)
#define SYSTEM_THREADING_TASKS_TASK_NOTIFYDEBUGGEROFWAITCOMPLETIONIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x1D2D62E0)
#define SYSTEM_THREADING_TASKS_TASK_NOTIFYDEBUGGEROFWAITCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1D2D89F0)
#define SYSTEM_THREADING_TASKS_TASK_OPTIONSMETHOD_OFFSET UNITYSDK_OFFSET(0x1D2D8830)
#define SYSTEM_THREADING_TASKS_TASK_POSSIBLYCAPTURECONTEXT_OFFSET UNITYSDK_OFFSET(0x1D2D6110)
#define SYSTEM_THREADING_TASKS_TASK_PROCESSCHILDCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1D2DB090)
#define SYSTEM_THREADING_TASKS_TASK_RECORDINTERNALCANCELLATIONREQUEST_1_OFFSET UNITYSDK_OFFSET(0x1D2DDB10)
#define SYSTEM_THREADING_TASKS_TASK_RECORDINTERNALCANCELLATIONREQUEST_2_OFFSET UNITYSDK_OFFSET(0x1D2DDC00)
#define SYSTEM_THREADING_TASKS_TASK_RECORDINTERNALCANCELLATIONREQUEST_OFFSET UNITYSDK_OFFSET(0x1D2DDAA0)
#define SYSTEM_THREADING_TASKS_TASK_REMOVECONTINUATION_OFFSET UNITYSDK_OFFSET(0x1D2D8570)
#define SYSTEM_THREADING_TASKS_TASK_REMOVEFROMACTIVETASKS_OFFSET UNITYSDK_OFFSET(0x1D2D7B60)
#define SYSTEM_THREADING_TASKS_TASK_RUN_OFFSET UNITYSDK_OFFSET(0x1D2E0980)
#define SYSTEM_THREADING_TASKS_TASK_SCHEDULEANDSTART_OFFSET UNITYSDK_OFFSET(0x1D2D69F0)
#define SYSTEM_THREADING_TASKS_TASK_SETCANCELLATIONACKNOWLEDGED_OFFSET UNITYSDK_OFFSET(0x1D2DC740)
#define SYSTEM_THREADING_TASKS_TASK_SETCONTINUATIONFORAWAIT_OFFSET UNITYSDK_OFFSET(0x1D2DC780)
#define SYSTEM_THREADING_TASKS_TASK_SETNOTIFICATIONFORWAITCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1D2D8930)
#define SYSTEM_THREADING_TASKS_TASK_SET_CAPTUREDCONTEXT_OFFSET UNITYSDK_OFFSET(0x1D2D87D0)
#define SYSTEM_THREADING_TASKS_TASK_SET_HANDEDOVERCHILDREPLICA_OFFSET UNITYSDK_OFFSET(0x1D2DC0C0)
#define SYSTEM_THREADING_TASKS_TASK_SET_SAVEDSTATEFROMPREVIOUSREPLICA_OFFSET UNITYSDK_OFFSET(0x1D2DC0A0)
#define SYSTEM_THREADING_TASKS_TASK_SHOULDREPLICATE_OFFSET UNITYSDK_OFFSET(0x1D2DBFC0)
#define SYSTEM_THREADING_TASKS_TASK_SPINTHENBLOCKINGWAIT_OFFSET UNITYSDK_OFFSET(0x1D2DD370)
#define SYSTEM_THREADING_TASKS_TASK_SPINWAIT_OFFSET UNITYSDK_OFFSET(0x1D2DD620)
#define SYSTEM_THREADING_TASKS_TASK_SYSTEM_IASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1D2D9250)
#define SYSTEM_THREADING_TASKS_TASK_SYSTEM_IASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1D2D9520)
#define SYSTEM_THREADING_TASKS_TASK_SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET UNITYSDK_OFFSET(0x1D2DC0E0)
#define SYSTEM_THREADING_TASKS_TASK_SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET UNITYSDK_OFFSET(0x1D2DC0F0)
#define SYSTEM_THREADING_TASKS_TASK_TASKCANCELCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D2D84D0)
#define SYSTEM_THREADING_TASKS_TASK_TASKCONSTRUCTORCORE_OFFSET UNITYSDK_OFFSET(0x1D2D7E20)
#define SYSTEM_THREADING_TASKS_TASK_THROWIFEXCEPTIONAL_OFFSET UNITYSDK_OFFSET(0x1D2DA6C0)
#define SYSTEM_THREADING_TASKS_TASK_UPDATEEXCEPTIONOBSERVEDSTATUS_OFFSET UNITYSDK_OFFSET(0x1D2DA720)
#define SYSTEM_THREADING_TASKS_TASK_WAITALLBLOCKINGCORE_OFFSET UNITYSDK_OFFSET(0x1D2E0340)
#define SYSTEM_THREADING_TASKS_TASK_WAITALL_1_OFFSET UNITYSDK_OFFSET(0x1D2DE960)
#define SYSTEM_THREADING_TASKS_TASK_WAITALL_2_OFFSET UNITYSDK_OFFSET(0x1D2DE9F0)
#define SYSTEM_THREADING_TASKS_TASK_WAITALL_OFFSET UNITYSDK_OFFSET(0x1D2DE920)
#define SYSTEM_THREADING_TASKS_TASK_WAIT_1_OFFSET UNITYSDK_OFFSET(0x1D2DCD40)
#define SYSTEM_THREADING_TASKS_TASK_WAIT_OFFSET UNITYSDK_OFFSET(0x1D2DCD30)
#define SYSTEM_THREADING_TASKS_TASK_WHENANY_OFFSET UNITYSDK_OFFSET(0x1D2E0F50)
#define SYSTEM_THREADING_TASKS_TASK_WRAPPEDTRYRUNINLINE_OFFSET UNITYSDK_OFFSET(0x1D2DD030)
#define SYSTEM_THREADING_TASKS_TASK_YIELD_OFFSET UNITYSDK_OFFSET(0x1D2DCD20)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Task_TypeDefinitionIndex = 899;

	class Task : public ::System::Object
	{
	public:
		::System::Threading::Tasks::Task_ContingentProperties* m_contingentProperties; // 0x10
		::System::Object* m_stateObject; // 0x18
		::System::Threading::Tasks::TaskScheduler* m_taskScheduler; // 0x20
		::System::Object* m_continuationObject; // 0x28
		::System::Object* m_action; // 0x30
		::System::Threading::Tasks::Task* m_parent; // 0x38
		::System::Int32 m_taskId; // 0x40
		::System::Int32 m_stateFlags; // 0x44
		static ::System::Threading::Tasks::TaskFactory** StaticGet_s_factory()
		{
			return (::System::Threading::Tasks::TaskFactory**)UnitySDK::FromName("System.Threading.Tasks", "Task")->GetStaticField(0x19790);
		}

		static ::System::Predicate_1<::System::Object*>** StaticGet_s_IsTaskContinuationNullPredicate()
		{
			return (::System::Predicate_1<::System::Object*>**)UnitySDK::FromName("System.Threading.Tasks", "Task")->GetStaticField(0x19798);
		}

		static ::System::Threading::ContextCallback** StaticGet_s_ecCallback()
		{
			return (::System::Threading::ContextCallback**)UnitySDK::FromName("System.Threading.Tasks", "Task")->GetStaticField(0x197A0);
		}

		static ::System::Action_1<::System::Object*>** StaticGet_s_taskCancelCallback()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("System.Threading.Tasks", "Task")->GetStaticField(0x197A8);
		}

		static ::System::Object** StaticGet_s_activeTasksLock()
		{
			return (::System::Object**)UnitySDK::FromName("System.Threading.Tasks", "Task")->GetStaticField(0x197B0);
		}

		static ::System::Predicate_1<::System::Threading::Tasks::Task*>** StaticGet_s_IsExceptionObservedByParentPredicate()
		{
			return (::System::Predicate_1<::System::Threading::Tasks::Task*>**)UnitySDK::FromName("System.Threading.Tasks", "Task")->GetStaticField(0x197B8);
		}

		static ::System::Object** StaticGet_s_taskCompletionSentinel()
		{
			return (::System::Object**)UnitySDK::FromName("System.Threading.Tasks", "Task")->GetStaticField(0x197C0);
		}

		static ::System::Threading::Tasks::Task** StaticGet_s_completedTask()
		{
			return (::System::Threading::Tasks::Task**)UnitySDK::FromName("System.Threading.Tasks", "Task")->GetStaticField(0x197C8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Threading::Tasks::Task*>** StaticGet_s_currentActiveTasks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Threading::Tasks::Task*>**)UnitySDK::FromName("System.Threading.Tasks", "Task")->GetStaticField(0x197D0);
		}

		static ::System::Func_1<::System::Object*>** StaticGet_s_createContingentProperties()
		{
			return (::System::Func_1<::System::Object*>**)UnitySDK::FromName("System.Threading.Tasks", "Task")->GetStaticField(0x197D8);
		}

		static ::System::Int32* StaticGet_s_taskIdCounter()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Threading.Tasks", "Task")->GetStaticField(0x53D0);
		}

		static ::System::Boolean* StaticGet_s_asyncDebuggingEnabled()
		{
			return (::System::Boolean*)UnitySDK::FromName("System.Threading.Tasks", "Task")->GetStaticField(0x53D4);
		}

		static ::System::Threading::Tasks::StackGuard** StaticGet_t_stackGuard()
		{
			return (::System::Threading::Tasks::StackGuard**)UnitySDK::FromName("System.Threading.Tasks", "Task")->GetStaticField(0x0);
		}

		static ::System::Threading::Tasks::Task** StaticGet_t_currentTask()
		{
			return (::System::Threading::Tasks::Task**)UnitySDK::FromName("System.Threading.Tasks", "Task")->GetStaticField(0x0);
		}

		::System::Void _ctor(::System::Boolean a1, ::System::Threading::Tasks::TaskCreationOptions a2, ::System::Threading::CancellationToken a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::Object* a1, ::System::Threading::Tasks::TaskCreationOptions a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_3(::System::Delegate* a1, ::System::Object* a2, ::System::Threading::Tasks::Task* a3, ::System::Threading::CancellationToken a4, ::System::Threading::Tasks::TaskCreationOptions a5, ::System::Threading::Tasks::InternalTaskOptions a6, ::System::Threading::Tasks::TaskScheduler* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::Task*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions, ::System::Threading::Tasks::TaskScheduler*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CCTOR_OFFSET))();
		}

		static ::System::Boolean AddToActiveTasks(::System::Threading::Tasks::Task* a1)
		{
			return ((::System::Boolean(*)(::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ADDTOACTIVETASKS_OFFSET))(a1);
		}

		static ::System::Void RemoveFromActiveTasks(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_REMOVEFROMACTIVETASKS_OFFSET))(a1);
		}

		::System::Void TaskConstructorCore(::System::Object* a1, ::System::Object* a2, ::System::Threading::CancellationToken a3, ::System::Threading::Tasks::TaskCreationOptions a4, ::System::Threading::Tasks::InternalTaskOptions a5, ::System::Threading::Tasks::TaskScheduler* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions, ::System::Threading::Tasks::TaskScheduler*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_TASKCONSTRUCTORCORE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void AssignCancellationToken(::System::Threading::CancellationToken a1, ::System::Threading::Tasks::Task* a2, ::System::Threading::Tasks::TaskContinuation* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*, ::System::Threading::Tasks::TaskContinuation*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ASSIGNCANCELLATIONTOKEN_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void TaskCancelCallback(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_TASKCANCELCALLBACK_OFFSET))(a1);
		}

		::System::Void PossiblyCaptureContext(::System::Threading::StackCrawlMark a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::StackCrawlMark))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_POSSIBLYCAPTURECONTEXT_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::TaskCreationOptions get_Options()
		{
			return ((::System::Threading::Tasks::TaskCreationOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_OPTIONS_OFFSET))(this);
		}

		static ::System::Threading::Tasks::TaskCreationOptions OptionsMethod(::System::Int32 a1)
		{
			return ((::System::Threading::Tasks::TaskCreationOptions(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_OPTIONSMETHOD_OFFSET))(a1);
		}

		::System::Boolean AtomicStateUpdate(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ATOMICSTATEUPDATE_OFFSET))(this, a1, a2);
		}

		::System::Boolean AtomicStateUpdate_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ATOMICSTATEUPDATE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetNotificationForWaitCompletion(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SETNOTIFICATIONFORWAITCOMPLETION_OFFSET))(this, a1);
		}

		::System::Boolean NotifyDebuggerOfWaitCompletionIfNecessary()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_NOTIFYDEBUGGEROFWAITCOMPLETIONIFNECESSARY_OFFSET))(this);
		}

		::System::Boolean get_IsWaitNotificationEnabledOrNotRanToCompletion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISWAITNOTIFICATIONENABLEDORNOTRANTOCOMPLETION_OFFSET))(this);
		}

		::System::Boolean get_ShouldNotifyDebuggerOfWaitCompletion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_SHOULDNOTIFYDEBUGGEROFWAITCOMPLETION_OFFSET))(this);
		}

		::System::Boolean get_IsWaitNotificationEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISWAITNOTIFICATIONENABLED_OFFSET))(this);
		}

		::System::Void NotifyDebuggerOfWaitCompletion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_NOTIFYDEBUGGEROFWAITCOMPLETION_OFFSET))(this);
		}

		::System::Boolean MarkStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_MARKSTARTED_OFFSET))(this);
		}

		::System::Boolean FireTaskScheduledIfNeeded(::System::Threading::Tasks::TaskScheduler* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::Tasks::TaskScheduler*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_FIRETASKSCHEDULEDIFNEEDED_OFFSET))(this, a1);
		}

		::System::Void AddNewChild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ADDNEWCHILD_OFFSET))(this);
		}

		::System::Void DisregardChild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_DISREGARDCHILD_OFFSET))(this);
		}

		static ::System::Threading::Tasks::Task* InternalStartNew(::System::Threading::Tasks::Task* a1, ::System::Delegate* a2, ::System::Object* a3, ::System::Threading::CancellationToken a4, ::System::Threading::Tasks::TaskScheduler* a5, ::System::Threading::Tasks::TaskCreationOptions a6, ::System::Threading::Tasks::InternalTaskOptions a7, ::System::Threading::StackCrawlMark a8)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::Threading::Tasks::Task*, ::System::Delegate*, ::System::Object*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskScheduler*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions, ::System::Threading::StackCrawlMark))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_INTERNALSTARTNEW_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Int32 NewId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_NEWID_OFFSET))();
		}

		::System::Int32 get_Id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ID_OFFSET))(this);
		}

		static ::System::Threading::Tasks::Task* get_InternalCurrent()
		{
			return ((::System::Threading::Tasks::Task*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_INTERNALCURRENT_OFFSET))();
		}

		static ::System::Threading::Tasks::Task* InternalCurrentIfAttached(::System::Threading::Tasks::TaskCreationOptions a1)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::Threading::Tasks::TaskCreationOptions))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_INTERNALCURRENTIFATTACHED_OFFSET))(a1);
		}

		static ::System::Threading::Tasks::StackGuard* get_CurrentStackGuard()
		{
			return ((::System::Threading::Tasks::StackGuard*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_CURRENTSTACKGUARD_OFFSET))();
		}

		::System::AggregateException* get_Exception()
		{
			return ((::System::AggregateException*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_EXCEPTION_OFFSET))(this);
		}

		::System::Threading::Tasks::TaskStatus get_Status()
		{
			return ((::System::Threading::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_STATUS_OFFSET))(this);
		}

		::System::Boolean get_IsCanceled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISCANCELED_OFFSET))(this);
		}

		::System::Boolean get_IsCancellationRequested()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISCANCELLATIONREQUESTED_OFFSET))(this);
		}

		::System::Threading::Tasks::Task_ContingentProperties* EnsureContingentPropertiesInitialized(::System::Boolean a1)
		{
			return ((::System::Threading::Tasks::Task_ContingentProperties*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ENSURECONTINGENTPROPERTIESINITIALIZED_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task_ContingentProperties* EnsureContingentPropertiesInitializedCore(::System::Boolean a1)
		{
			return ((::System::Threading::Tasks::Task_ContingentProperties*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ENSURECONTINGENTPROPERTIESINITIALIZEDCORE_OFFSET))(this, a1);
		}

		::System::Threading::CancellationToken get_CancellationToken()
		{
			return ((::System::Threading::CancellationToken(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_CANCELLATIONTOKEN_OFFSET))(this);
		}

		::System::Boolean get_IsCancellationAcknowledged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISCANCELLATIONACKNOWLEDGED_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISCOMPLETED_OFFSET))(this);
		}

		static ::System::Boolean IsCompletedMethod(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ISCOMPLETEDMETHOD_OFFSET))(a1);
		}

		::System::Boolean get_IsRanToCompletion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISRANTOCOMPLETION_OFFSET))(this);
		}

		::System::Threading::Tasks::TaskCreationOptions get_CreationOptions()
		{
			return ((::System::Threading::Tasks::TaskCreationOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_CREATIONOPTIONS_OFFSET))(this);
		}

		::System::Threading::WaitHandle* System_IAsyncResult_get_AsyncWaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SYSTEM_IASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(this);
		}

		::System::Object* get_AsyncState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ASYNCSTATE_OFFSET))(this);
		}

		::System::Boolean System_IAsyncResult_get_CompletedSynchronously()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SYSTEM_IASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(this);
		}

		::System::Threading::Tasks::TaskScheduler* get_ExecutingTaskScheduler()
		{
			return ((::System::Threading::Tasks::TaskScheduler*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_EXECUTINGTASKSCHEDULER_OFFSET))(this);
		}

		static ::System::Threading::Tasks::TaskFactory* get_Factory()
		{
			return ((::System::Threading::Tasks::TaskFactory*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_FACTORY_OFFSET))();
		}

		static ::System::Threading::Tasks::Task* get_CompletedTask()
		{
			return ((::System::Threading::Tasks::Task*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_COMPLETEDTASK_OFFSET))();
		}

		::System::Threading::ManualResetEventSlim* get_CompletedEvent()
		{
			return ((::System::Threading::ManualResetEventSlim*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_COMPLETEDEVENT_OFFSET))(this);
		}

		::System::Boolean get_IsSelfReplicatingRoot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISSELFREPLICATINGROOT_OFFSET))(this);
		}

		::System::Boolean get_IsChildReplica()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISCHILDREPLICA_OFFSET))(this);
		}

		::System::Boolean get_ExceptionRecorded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_EXCEPTIONRECORDED_OFFSET))(this);
		}

		::System::Boolean get_IsFaulted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISFAULTED_OFFSET))(this);
		}

		::System::Threading::ExecutionContext* get_CapturedContext()
		{
			return ((::System::Threading::ExecutionContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_CAPTUREDCONTEXT_OFFSET))(this);
		}

		::System::Void set_CapturedContext(::System::Threading::ExecutionContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ExecutionContext*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SET_CAPTUREDCONTEXT_OFFSET))(this, a1);
		}

		static ::System::Threading::ExecutionContext* CopyExecutionContext(::System::Threading::ExecutionContext* a1)
		{
			return ((::System::Threading::ExecutionContext*(*)(::System::Threading::ExecutionContext*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_COPYEXECUTIONCONTEXT_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void ScheduleAndStart(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SCHEDULEANDSTART_OFFSET))(this, a1);
		}

		::System::Void AddException(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ADDEXCEPTION_OFFSET))(this, a1);
		}

		::System::Void AddException_1(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ADDEXCEPTION_1_OFFSET))(this, a1, a2);
		}

		::System::AggregateException* GetExceptions(::System::Boolean a1)
		{
			return ((::System::AggregateException*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GETEXCEPTIONS_OFFSET))(this, a1);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* GetExceptionDispatchInfos()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GETEXCEPTIONDISPATCHINFOS_OFFSET))(this);
		}

		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* GetCancellationExceptionDispatchInfo()
		{
			return ((::System::Runtime::ExceptionServices::ExceptionDispatchInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GETCANCELLATIONEXCEPTIONDISPATCHINFO_OFFSET))(this);
		}

		::System::Void ThrowIfExceptional(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_THROWIFEXCEPTIONAL_OFFSET))(this, a1);
		}

		::System::Void UpdateExceptionObservedStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_UPDATEEXCEPTIONOBSERVEDSTATUS_OFFSET))(this);
		}

		::System::Boolean get_IsExceptionObservedByParent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISEXCEPTIONOBSERVEDBYPARENT_OFFSET))(this);
		}

		::System::Boolean get_IsDelegateInvoked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_ISDELEGATEINVOKED_OFFSET))(this);
		}

		::System::Void Finish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_FINISH_OFFSET))(this, a1);
		}

		::System::Void FinishStageTwo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_FINISHSTAGETWO_OFFSET))(this);
		}

		::System::Void FinishStageThree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_FINISHSTAGETHREE_OFFSET))(this);
		}

		::System::Void ProcessChildCompletion(::System::Threading::Tasks::Task* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_PROCESSCHILDCOMPLETION_OFFSET))(this, a1);
		}

		::System::Void AddExceptionsFromChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ADDEXCEPTIONSFROMCHILDREN_OFFSET))(this);
		}

		::System::Void FinishThreadAbortedTask(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_FINISHTHREADABORTEDTASK_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_EXECUTE_OFFSET))(this);
		}

		::System::Boolean ShouldReplicate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SHOULDREPLICATE_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* CreateReplicaTask(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Threading::Tasks::Task* a3, ::System::Threading::Tasks::TaskScheduler* a4, ::System::Threading::Tasks::TaskCreationOptions a5, ::System::Threading::Tasks::InternalTaskOptions a6)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Threading::Tasks::Task*, ::System::Threading::Tasks::TaskScheduler*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CREATEREPLICATASK_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Object* get_SavedStateForNextReplica()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_SAVEDSTATEFORNEXTREPLICA_OFFSET))(this);
		}

		::System::Void set_SavedStateFromPreviousReplica(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SET_SAVEDSTATEFROMPREVIOUSREPLICA_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task* get_HandedOverChildReplica()
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GET_HANDEDOVERCHILDREPLICA_OFFSET))(this);
		}

		::System::Void set_HandedOverChildReplica(::System::Threading::Tasks::Task* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SET_HANDEDOVERCHILDREPLICA_OFFSET))(this, a1);
		}

		static ::System::Void ExecuteSelfReplicating(::System::Threading::Tasks::Task* a1)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_EXECUTESELFREPLICATING_OFFSET))(a1);
		}

		::System::Void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET))(this);
		}

		::System::Void System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadAbortException*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET))(this, a1);
		}

		::System::Boolean ExecuteEntry(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_EXECUTEENTRY_OFFSET))(this, a1);
		}

		::System::Void ExecuteWithThreadLocal(::System::Threading::Tasks::Task* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_EXECUTEWITHTHREADLOCAL_OFFSET))(this, a1);
		}

		static ::System::Void ExecutionContextCallback(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_EXECUTIONCONTEXTCALLBACK_OFFSET))(a1);
		}

		::System::Void InnerInvoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_INNERINVOKE_OFFSET))(this);
		}

		::System::Void InnerInvokeWithArg(::System::Threading::Tasks::Task* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_INNERINVOKEWITHARG_OFFSET))(this, a1);
		}

		::System::Void HandleException(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_HANDLEEXCEPTION_OFFSET))(this, a1);
		}

		::System::Runtime::CompilerServices::TaskAwaiter GetAwaiter()
		{
			return ((::System::Runtime::CompilerServices::TaskAwaiter(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_GETAWAITER_OFFSET))(this);
		}

		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable ConfigureAwait(::System::Boolean a1)
		{
			return ((::System::Runtime::CompilerServices::ConfiguredTaskAwaitable(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CONFIGUREAWAIT_OFFSET))(this, a1);
		}

		::System::Void SetContinuationForAwait(::System::Action* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Threading::StackCrawlMark a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SETCONTINUATIONFORAWAIT_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Runtime::CompilerServices::YieldAwaitable Yield()
		{
			return ((::System::Runtime::CompilerServices::YieldAwaitable(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_YIELD_OFFSET))();
		}

		::System::Void Wait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_WAIT_OFFSET))(this);
		}

		::System::Boolean Wait_1(::System::Int32 a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_WAIT_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean WrappedTryRunInline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_WRAPPEDTRYRUNINLINE_OFFSET))(this);
		}

		::System::Boolean InternalWait(::System::Int32 a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_INTERNALWAIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean SpinThenBlockingWait(::System::Int32 a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SPINTHENBLOCKINGWAIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean SpinWait(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SPINWAIT_OFFSET))(this, a1);
		}

		::System::Boolean InternalCancel(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_INTERNALCANCEL_OFFSET))(this, a1);
		}

		::System::Void RecordInternalCancellationRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_RECORDINTERNALCANCELLATIONREQUEST_OFFSET))(this);
		}

		::System::Void RecordInternalCancellationRequest_1(::System::Threading::CancellationToken a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_RECORDINTERNALCANCELLATIONREQUEST_1_OFFSET))(this, a1);
		}

		::System::Void RecordInternalCancellationRequest_2(::System::Threading::CancellationToken a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_RECORDINTERNALCANCELLATIONREQUEST_2_OFFSET))(this, a1, a2);
		}

		::System::Void CancellationCleanupLogic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CANCELLATIONCLEANUPLOGIC_OFFSET))(this);
		}

		::System::Void SetCancellationAcknowledged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_SETCANCELLATIONACKNOWLEDGED_OFFSET))(this);
		}

		::System::Void FinishContinuations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_FINISHCONTINUATIONS_OFFSET))(this);
		}

		::System::Void LogFinishCompletionNotification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_LOGFINISHCOMPLETIONNOTIFICATION_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task*>* a1)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Action_1<::System::Threading::Tasks::Task*>*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CONTINUEWITH_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task* ContinueWith_1(::System::Action_1<::System::Threading::Tasks::Task*>* a1, ::System::Threading::Tasks::TaskScheduler* a2, ::System::Threading::CancellationToken a3, ::System::Threading::Tasks::TaskContinuationOptions a4, ::System::Threading::StackCrawlMark a5)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Action_1<::System::Threading::Tasks::Task*>*, ::System::Threading::Tasks::TaskScheduler*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskContinuationOptions, ::System::Threading::StackCrawlMark))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CONTINUEWITH_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Threading::Tasks::Task* ContinueWith_2(::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>* a1, ::System::Object* a2, ::System::Threading::Tasks::TaskScheduler* a3)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>*, ::System::Object*, ::System::Threading::Tasks::TaskScheduler*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CONTINUEWITH_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Threading::Tasks::Task* ContinueWith_3(::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>* a1, ::System::Object* a2, ::System::Threading::CancellationToken a3, ::System::Threading::Tasks::TaskContinuationOptions a4, ::System::Threading::Tasks::TaskScheduler* a5)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>*, ::System::Object*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskContinuationOptions, ::System::Threading::Tasks::TaskScheduler*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CONTINUEWITH_3_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Threading::Tasks::Task* ContinueWith_4(::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>* a1, ::System::Object* a2, ::System::Threading::Tasks::TaskScheduler* a3, ::System::Threading::CancellationToken a4, ::System::Threading::Tasks::TaskContinuationOptions a5, ::System::Threading::StackCrawlMark a6)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>*, ::System::Object*, ::System::Threading::Tasks::TaskScheduler*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskContinuationOptions, ::System::Threading::StackCrawlMark))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CONTINUEWITH_4_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void CreationOptionsFromContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions a1, ::System::Threading::Tasks::TaskCreationOptions a2, ::System::Threading::Tasks::InternalTaskOptions a3)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::TaskContinuationOptions, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CREATIONOPTIONSFROMCONTINUATIONOPTIONS_OFFSET))(a1, a2, a3);
		}

		::System::Void ContinueWithCore(::System::Threading::Tasks::Task* a1, ::System::Threading::Tasks::TaskScheduler* a2, ::System::Threading::CancellationToken a3, ::System::Threading::Tasks::TaskContinuationOptions a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Threading::Tasks::TaskScheduler*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskContinuationOptions))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_CONTINUEWITHCORE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AddCompletionAction(::System::Threading::Tasks::ITaskCompletionAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::ITaskCompletionAction*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ADDCOMPLETIONACTION_OFFSET))(this, a1);
		}

		::System::Void AddCompletionAction_1(::System::Threading::Tasks::ITaskCompletionAction* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::ITaskCompletionAction*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ADDCOMPLETIONACTION_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean AddTaskContinuationComplex(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ADDTASKCONTINUATIONCOMPLEX_OFFSET))(this, a1, a2);
		}

		::System::Boolean AddTaskContinuation(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ADDTASKCONTINUATION_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveContinuation(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_REMOVECONTINUATION_OFFSET))(this, a1);
		}

		static ::System::Void WaitAll(::Il2CppArray<::System::Threading::Tasks::Task*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Threading::Tasks::Task*>*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_WAITALL_OFFSET))(a1);
		}

		static ::System::Boolean WaitAll_1(::Il2CppArray<::System::Threading::Tasks::Task*>* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Threading::Tasks::Task*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_WAITALL_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean WaitAll_2(::Il2CppArray<::System::Threading::Tasks::Task*>* a1, ::System::Int32 a2, ::System::Threading::CancellationToken a3)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Threading::Tasks::Task*>*, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_WAITALL_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean WaitAllBlockingCore(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>* a1, ::System::Int32 a2, ::System::Threading::CancellationToken a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_WAITALLBLOCKINGCORE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AddExceptionsForCompletedTask(::System::Object* a1, ::System::Threading::Tasks::Task* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_ADDEXCEPTIONSFORCOMPLETEDTASK_OFFSET))(a1, a2);
		}

		static ::System::Threading::Tasks::Task* FromException(::System::Exception* a1)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_FROMEXCEPTION_OFFSET))(a1);
		}

		static ::System::Threading::Tasks::Task* FromCancellation(::System::Threading::CancellationToken a1)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_FROMCANCELLATION_OFFSET))(a1);
		}

		static ::System::Threading::Tasks::Task* Run(::System::Action* a1)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::Action*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_RUN_OFFSET))(a1);
		}

		static ::System::Threading::Tasks::Task* Delay(::System::Int32 a1)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_DELAY_OFFSET))(a1);
		}

		static ::System::Threading::Tasks::Task* Delay_1(::System::Int32 a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_DELAY_1_OFFSET))(a1, a2);
		}

		static ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>* WhenAny(::Il2CppArray<::System::Threading::Tasks::Task*>* a1)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*(*)(::Il2CppArray<::System::Threading::Tasks::Task*>*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_WHENANY_OFFSET))(a1);
		}

	};
}
