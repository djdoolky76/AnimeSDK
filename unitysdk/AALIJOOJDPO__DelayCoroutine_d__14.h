#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define AALIJOOJDPO__DELAYCOROUTINE_D__14_CTOR_OFFSET UNITYSDK_OFFSET(0x18C7E4D0)
#define AALIJOOJDPO__DELAYCOROUTINE_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18C7E530)
#define AALIJOOJDPO__DELAYCOROUTINE_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18C7E5A0)
#define AALIJOOJDPO__DELAYCOROUTINE_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18C7E600)
#define AALIJOOJDPO__DELAYCOROUTINE_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18C7E5B0)
#define AALIJOOJDPO__DELAYCOROUTINE_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18C7E520)

inline static constexpr unsigned int AALIJOOJDPO__DelayCoroutine_d__14_TypeDefinitionIndex = 48873;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
	class AALIJOOJDPO__DelayCoroutine_d__14 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single seconds; // 0x20
		::System::Int32 __1__state; // 0x24
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AALIJOOJDPO__DELAYCOROUTINE_D__14_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AALIJOOJDPO__DELAYCOROUTINE_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AALIJOOJDPO__DELAYCOROUTINE_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AALIJOOJDPO__DELAYCOROUTINE_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AALIJOOJDPO__DELAYCOROUTINE_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AALIJOOJDPO__DELAYCOROUTINE_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
