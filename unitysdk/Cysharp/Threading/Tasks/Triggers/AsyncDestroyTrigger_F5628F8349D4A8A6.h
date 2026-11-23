#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_F5628F8349D4A8A6_F1270D6F5002495A_OFFSET UNITYSDK_OFFSET(0x3F2DA20)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F2E510)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncDestroyTrigger_F5628F8349D4A8A6_TypeDefinitionIndex = 19919;

	class AsyncDestroyTrigger_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(AsyncDestroyTrigger_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet_A11D69BF37F0CD6C()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AsyncDestroyTrigger_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void F1270D6F5002495A(::System::Object* E5EB06E4FD2C32F7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_F5628F8349D4A8A6_F1270D6F5002495A_OFFSET))(this, E5EB06E4FD2C32F7);
		}
	};
}
