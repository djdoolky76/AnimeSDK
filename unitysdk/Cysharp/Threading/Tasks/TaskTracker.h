#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace Cysharp::Threading::Tasks::Internal { template <typename T1, typename T2> class WeakDictionary_2; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define CYSHARP_THREADING_TASKS_TASKTRACKER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F125EE0)
#define CYSHARP_THREADING_TASKS_TASKTRACKER_CHECKANDRESETDIRTY_OFFSET UNITYSDK_OFFSET(0x1F125390)
#define CYSHARP_THREADING_TASKS_TASKTRACKER_FOREACHACTIVETASK_OFFSET UNITYSDK_OFFSET(0x1F1253F0)
#define CYSHARP_THREADING_TASKS_TASKTRACKER_REMOVETRACKING_OFFSET UNITYSDK_OFFSET(0x1F125380)
#define CYSHARP_THREADING_TASKS_TASKTRACKER_TRACKACTIVETASK_OFFSET UNITYSDK_OFFSET(0x1F125370)
#define CYSHARP_THREADING_TASKS_TASKTRACKER_TYPEBEAUTIFY_OFFSET UNITYSDK_OFFSET(0x1F1258D0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int TaskTracker_TypeDefinitionIndex = 38173;

	class TaskTracker : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair*>** StaticGet_listPool()
		{
			return (::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair*>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "TaskTracker")->GetStaticField(0x405C0);
		}

		static ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<::Cysharp::Threading::Tasks::IUniTaskSource*, ::System::ValueTuple>** StaticGet_tracking()
		{
			return (::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<::Cysharp::Threading::Tasks::IUniTaskSource*, ::System::ValueTuple>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "TaskTracker")->GetStaticField(0x405C8);
		}

		static ::System::Boolean* StaticGet_dirty()
		{
			return (::System::Boolean*)UnitySDK::FromName("Cysharp.Threading.Tasks", "TaskTracker")->GetStaticField(0xDB80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKTRACKER_CCTOR_OFFSET))();
		}

		static ::System::Void TrackActiveTask(::Cysharp::Threading::Tasks::IUniTaskSource* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::IUniTaskSource*, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKTRACKER_TRACKACTIVETASK_OFFSET))(a1, a2);
		}

		static ::System::Void RemoveTracking(::Cysharp::Threading::Tasks::IUniTaskSource* a1)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::IUniTaskSource*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKTRACKER_REMOVETRACKING_OFFSET))(a1);
		}

		static ::System::Boolean CheckAndResetDirty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKTRACKER_CHECKANDRESETDIRTY_OFFSET))();
		}

		static ::System::Void ForEachActiveTask(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKTRACKER_FOREACHACTIVETASK_OFFSET))(a1);
		}

		static ::System::Void TypeBeautify(::System::Type* a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKTRACKER_TYPEBEAUTIFY_OFFSET))(a1, a2);
		}

	};
}
