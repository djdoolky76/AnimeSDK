#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/InternalTaskOptions.h"
#include "unitysdk/System/Threading/Tasks/TaskCreationOptions.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_TASKS_TASK___C__DISPLAYCLASS178_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C154D90)
#define SYSTEM_THREADING_TASKS_TASK___C__DISPLAYCLASS178_0__EXECUTESELFREPLICATING_B__0_OFFSET UNITYSDK_OFFSET(0x1C15A800)

namespace System::Threading::Tasks
{
	class Task___c__DisplayClass178_0 : public ::System::Object
	{
	public:
		::System::Action* taskReplicaDelegate; // 0x10
		::System::Threading::Tasks::Task* root; // 0x18
		::System::Boolean replicasAreQuitting; // 0x20
		::System::Byte _padding0[0x3];
		::System::Threading::Tasks::TaskCreationOptions creationOptionsForReplicas; // 0x24
		::System::Threading::Tasks::InternalTaskOptions internalOptionsForReplicas; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C__DISPLAYCLASS178_0_CTOR_OFFSET))(this);
		}

		::System::Void _ExecuteSelfReplicating_b__0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C__DISPLAYCLASS178_0__EXECUTESELFREPLICATING_B__0_OFFSET))(this, a1);
		}

	};
}
