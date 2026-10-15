#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F148460)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1484A0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE___C__CREATE_B__13_0_OFFSET UNITYSDK_OFFSET(0x1F148510)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F1484B0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_DelayPromise___c_TypeDefinitionIndex = 38237;

	class UniTask_DelayPromise___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__13_0()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x466B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x466B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE___C___CCTOR_B__4_0_OFFSET))(this);
		}

		::System::Void _Create_b__13_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE___C__CREATE_B__13_0_OFFSET))(this, a1);
		}

	};
}
