#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/DelayType.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/ValueTuple_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/System/ValueTuple_5.h"
#include "unitysdk/System/ValueTuple_6.h"
#include "unitysdk/System/ValueTuple_7.h"
#include "unitysdk/System/ValueTuple_8.h"
namespace Cysharp::Threading::Tasks { class AsyncLazy; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ASTASK_1_OFFSET UNITYSDK_OFFSET(0x1F123960)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ASUNITASK_1_OFFSET UNITYSDK_OFFSET(0x1F123770)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATION_OFFSET UNITYSDK_OFFSET(0x1F123C80)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_CONTINUEWITH_4_OFFSET UNITYSDK_OFFSET(0x1F1242C0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_CONTINUEWITH_5_OFFSET UNITYSDK_OFFSET(0x1F124320)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGETCOREWITHCATCH_OFFSET UNITYSDK_OFFSET(0x1F124260)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGET_1_OFFSET UNITYSDK_OFFSET(0x1F1241E0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGET_OFFSET UNITYSDK_OFFSET(0x1F123D80)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_18_OFFSET UNITYSDK_OFFSET(0x1F120460)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_19_OFFSET UNITYSDK_OFFSET(0x1F1205E0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_1_OFFSET UNITYSDK_OFFSET(0x1F1203F0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_20_OFFSET UNITYSDK_OFFSET(0x1F1207A0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_21_OFFSET UNITYSDK_OFFSET(0x1F1209C0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_22_OFFSET UNITYSDK_OFFSET(0x1F120C50)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_23_OFFSET UNITYSDK_OFFSET(0x1F120F70)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_24_OFFSET UNITYSDK_OFFSET(0x1F121340)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_25_OFFSET UNITYSDK_OFFSET(0x1F1217D0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_26_OFFSET UNITYSDK_OFFSET(0x1F121AB0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_27_OFFSET UNITYSDK_OFFSET(0x1F121DB0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_28_OFFSET UNITYSDK_OFFSET(0x1F122190)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_29_OFFSET UNITYSDK_OFFSET(0x1F122610)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_30_OFFSET UNITYSDK_OFFSET(0x1F122B60)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_31_OFFSET UNITYSDK_OFFSET(0x1F1231A0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x1F1202B0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TIMEOUTWITHOUTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1F124140)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1F1240A0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOASYNCLAZY_OFFSET UNITYSDK_OFFSET(0x1F123C20)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINE_1_OFFSET UNITYSDK_OFFSET(0x1F111FD0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_UNWRAP_1_OFFSET UNITYSDK_OFFSET(0x1F124390)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_UNWRAP_4_OFFSET UNITYSDK_OFFSET(0x1F124420)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_UNWRAP_5_OFFSET UNITYSDK_OFFSET(0x1F124480)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_UNWRAP_8_OFFSET UNITYSDK_OFFSET(0x1F1244E0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_UNWRAP_9_OFFSET UNITYSDK_OFFSET(0x1F124560)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions_TypeDefinitionIndex = 38401;

	class UniTaskExtensions : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter(::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_1(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask>* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_1_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_18(::System::ValueTuple_2<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_2<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_18_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_19(::System::ValueTuple_3<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_3<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_19_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_20(::System::ValueTuple_4<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_4<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_20_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_21(::System::ValueTuple_5<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_5<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_21_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_22(::System::ValueTuple_6<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_6<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_22_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_23(::System::ValueTuple_7<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_7<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_23_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_24(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_1<::Cysharp::Threading::Tasks::UniTask>> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_1<::Cysharp::Threading::Tasks::UniTask>>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_24_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_25(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_2<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_2<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_25_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_26(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_3<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_3<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_26_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_27(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_4<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_4<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_27_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_28(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_5<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_5<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_28_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_29(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_6<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_6<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_29_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_30(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_7<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_7<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_30_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_31(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_1<::Cysharp::Threading::Tasks::UniTask>>> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_1<::Cysharp::Threading::Tasks::UniTask>>>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_31_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask AsUniTask_1(::System::Threading::Tasks::Task* a1, ::System::Boolean a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Threading::Tasks::Task*, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ASUNITASK_1_OFFSET))(a1, a2);
		}

		static ::System::Threading::Tasks::Task* AsTask_1(::Cysharp::Threading::Tasks::UniTask a1)
		{
			return ((::System::Threading::Tasks::Task*(*)(::Cysharp::Threading::Tasks::UniTask))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ASTASK_1_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::AsyncLazy* ToAsyncLazy(::Cysharp::Threading::Tasks::UniTask a1)
		{
			return ((::Cysharp::Threading::Tasks::AsyncLazy*(*)(::Cysharp::Threading::Tasks::UniTask))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOASYNCLAZY_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask AttachExternalCancellation(::Cysharp::Threading::Tasks::UniTask a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATION_OFFSET))(a1, a2);
		}

		static ::System::Collections::IEnumerator* ToCoroutine_1(::Cysharp::Threading::Tasks::UniTask a1, ::System::Action_1<::System::Exception*>* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINE_1_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask Timeout(::Cysharp::Threading::Tasks::UniTask a1, ::System::TimeSpan a2, ::Cysharp::Threading::Tasks::DelayType a3, ::Cysharp::Threading::Tasks::PlayerLoopTiming a4, ::System::Threading::CancellationTokenSource* a5)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::UniTask, ::System::TimeSpan, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TIMEOUT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> TimeoutWithoutException(::Cysharp::Threading::Tasks::UniTask a1, ::System::TimeSpan a2, ::Cysharp::Threading::Tasks::DelayType a3, ::Cysharp::Threading::Tasks::PlayerLoopTiming a4, ::System::Threading::CancellationTokenSource* a5)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::Cysharp::Threading::Tasks::UniTask, ::System::TimeSpan, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TIMEOUTWITHOUTEXCEPTION_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void Forget(::Cysharp::Threading::Tasks::UniTask a1)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::UniTask))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGET_OFFSET))(a1);
		}

		static ::System::Void Forget_1(::Cysharp::Threading::Tasks::UniTask a1, ::System::Action_1<::System::Exception*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Action_1<::System::Exception*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGET_1_OFFSET))(a1, a2, a3);
		}

		static ::Cysharp::Threading::Tasks::UniTaskVoid ForgetCoreWithCatch(::Cysharp::Threading::Tasks::UniTask a1, ::System::Action_1<::System::Exception*>* a2, ::System::Boolean a3)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Action_1<::System::Exception*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGETCOREWITHCATCH_OFFSET))(a1, a2, a3);
		}

		static ::Cysharp::Threading::Tasks::UniTask ContinueWith_4(::Cysharp::Threading::Tasks::UniTask a1, ::System::Action* a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_CONTINUEWITH_4_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask ContinueWith_5(::Cysharp::Threading::Tasks::UniTask a1, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_CONTINUEWITH_5_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask Unwrap_1(::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::UniTask> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::UniTask>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_UNWRAP_1_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask Unwrap_4(::System::Threading::Tasks::Task_1<::Cysharp::Threading::Tasks::UniTask>* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Threading::Tasks::Task_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_UNWRAP_4_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask Unwrap_5(::System::Threading::Tasks::Task_1<::Cysharp::Threading::Tasks::UniTask>* a1, ::System::Boolean a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Threading::Tasks::Task_1<::Cysharp::Threading::Tasks::UniTask>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_UNWRAP_5_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask Unwrap_8(::Cysharp::Threading::Tasks::UniTask_1<::System::Threading::Tasks::Task*> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::UniTask_1<::System::Threading::Tasks::Task*>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_UNWRAP_8_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask Unwrap_9(::Cysharp::Threading::Tasks::UniTask_1<::System::Threading::Tasks::Task*> a1, ::System::Boolean a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::UniTask_1<::System::Threading::Tasks::Task*>, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_UNWRAP_9_OFFSET))(a1, a2);
		}

	};
}
