#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILCANCELEDPROMISE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F14B250)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILCANCELEDPROMISE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F14B290)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILCANCELEDPROMISE___C__CREATE_B__10_0_OFFSET UNITYSDK_OFFSET(0x1F14B300)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILCANCELEDPROMISE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F14B2A0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WaitUntilCanceledPromise___c_TypeDefinitionIndex = 38261;

	class UniTask_WaitUntilCanceledPromise___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x470F0);
		}

		static ::System::Action_1<::System::Object*>** StaticGet___9__10_0()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x470F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILCANCELEDPROMISE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILCANCELEDPROMISE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILCANCELEDPROMISE___C___CCTOR_B__4_0_OFFSET))(this);
		}

		::System::Void _Create_b__10_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILCANCELEDPROMISE___C__CREATE_B__10_0_OFFSET))(this, a1);
		}

	};
}
