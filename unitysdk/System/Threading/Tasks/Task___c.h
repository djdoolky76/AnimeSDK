#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System::Threading { class TimerCallback; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { class Task_ContingentProperties; }

#define SYSTEM_THREADING_TASKS_TASK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C15A400)
#define SYSTEM_THREADING_TASKS_TASK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C15A430)
#define SYSTEM_THREADING_TASKS_TASK___C__DELAY_B__276_0_OFFSET UNITYSDK_OFFSET(0x1C15A440)
#define SYSTEM_THREADING_TASKS_TASK___C__DELAY_B__276_1_OFFSET UNITYSDK_OFFSET(0x1C15A750)
#define SYSTEM_THREADING_TASKS_TASK___C___CCTOR_B__295_0_OFFSET UNITYSDK_OFFSET(0x1C15A7B0)
#define SYSTEM_THREADING_TASKS_TASK___C___CCTOR_B__295_1_OFFSET UNITYSDK_OFFSET(0x1C15A7D0)
#define SYSTEM_THREADING_TASKS_TASK___C___CCTOR_B__295_2_OFFSET UNITYSDK_OFFSET(0x1C15A7F0)

namespace System::Threading::Tasks
{
	class Task___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__276_0()
		{
			return (::System::Action**)UnitySDK::FromName("System.Threading.Tasks", "<>c")->GetStaticField(0x20A60);
		}

		static ::System::Threading::TimerCallback** StaticGet___9__276_1()
		{
			return (::System::Threading::TimerCallback**)UnitySDK::FromName("System.Threading.Tasks", "<>c")->GetStaticField(0x20A68);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("System.Threading.Tasks", "<>c")->GetStaticField(0x20A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C_CTOR_OFFSET))(this);
		}

		::System::Void _Delay_b__276_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C__DELAY_B__276_0_OFFSET))(this, a1);
		}

		::System::Void _Delay_b__276_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C__DELAY_B__276_1_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task_ContingentProperties* __cctor_b__295_0()
		{
			return ((::System::Threading::Tasks::Task_ContingentProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C___CCTOR_B__295_0_OFFSET))(this);
		}

		::System::Boolean __cctor_b__295_1(::System::Threading::Tasks::Task* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C___CCTOR_B__295_1_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__295_2(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C___CCTOR_B__295_2_OFFSET))(this, a1);
		}

	};
}
