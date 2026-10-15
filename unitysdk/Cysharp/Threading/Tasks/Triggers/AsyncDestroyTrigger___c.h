#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F12C830)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F12C870)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER___C__ONDESTROYASYNC_B__7_0_OFFSET UNITYSDK_OFFSET(0x1F12C880)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncDestroyTrigger___c_TypeDefinitionIndex = 38497;

	class AsyncDestroyTrigger___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet___9__7_0()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Triggers", "<>c")->GetStaticField(0x40CF0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks.Triggers", "<>c")->GetStaticField(0x40CF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER___C_CTOR_OFFSET))(this);
		}

		::System::Void _OnDestroyAsync_b__7_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER___C__ONDESTROYASYNC_B__7_0_OFFSET))(this, a1);
		}

	};
}
