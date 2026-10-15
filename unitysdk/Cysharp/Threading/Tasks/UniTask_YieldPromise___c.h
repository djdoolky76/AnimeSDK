#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F14D300)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F14D340)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE___C__CREATE_B__10_0_OFFSET UNITYSDK_OFFSET(0x1F14D3B0)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F14D350)

namespace Cysharp::Threading::Tasks
{
	class UniTask_YieldPromise___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__10_0()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x48150);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x48158);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE___C___CCTOR_B__4_0_OFFSET))(this);
		}

		::System::Void _Create_b__10_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE___C__CREATE_B__10_0_OFFSET))(this, a1);
		}

	};
}
