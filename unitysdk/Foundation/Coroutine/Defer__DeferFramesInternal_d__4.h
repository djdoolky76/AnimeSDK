#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EE94680)
#define FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EE94730)
#define FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EE94790)
#define FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EE94740)
#define FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EE94670)
#define FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE94660)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int Defer__DeferFramesInternal_d__4_TypeDefinitionIndex = 8678;

	template <typename T1, typename T2, typename T3, typename T4>
	class Defer__DeferFramesInternal_d__4 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x10
		::System::Int32 __1__state; // 0x18
		::System::Int32 frameCount; // 0x1C
		::System::Single __2__current; // 0x20
		::System::Int32 _i_5__2; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
