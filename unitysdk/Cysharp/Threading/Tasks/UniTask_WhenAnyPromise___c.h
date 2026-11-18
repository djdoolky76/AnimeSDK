#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x20030D70)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x20030DB0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x20030DC0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WhenAnyPromise___c_TypeDefinitionIndex = 31328;

	class UniTask_WhenAnyPromise___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UniTask_WhenAnyPromise___c_TypeDefinitionIndex)->GetStaticField(0x280E0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UniTask_WhenAnyPromise___c_TypeDefinitionIndex)->GetStaticField(0x280E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__2_0(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE___C___CTOR_B__2_0_OFFSET))(this, state);
		}
	};
}
