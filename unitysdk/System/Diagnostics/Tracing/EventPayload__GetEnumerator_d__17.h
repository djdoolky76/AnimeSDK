#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Diagnostics::Tracing { class EventPayload; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD__GETENUMERATOR_D__17_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1DCC00)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD__GETENUMERATOR_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C1DCF30)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD__GETENUMERATOR_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C1DD170)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD__GETENUMERATOR_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C1DD1D0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD__GETENUMERATOR_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C1DD180)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD__GETENUMERATOR_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C1DCF20)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventPayload__GetEnumerator_d__17_TypeDefinitionIndex = 1603;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
	class EventPayload__GetEnumerator_d__17 : public ::System::Object
	{
	public:
		::System::Collections::Generic::KeyValuePair* __2__current; // 0x10
		::System::Byte _padding0[0x8];
		::System::Diagnostics::Tracing::EventPayload* __4__this; // 0x20
		::System::Int32 _i_5__1; // 0x28
		::System::Int32 __1__state; // 0x2C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD__GETENUMERATOR_D__17_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD__GETENUMERATOR_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD__GETENUMERATOR_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair* System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD__GETENUMERATOR_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD__GETENUMERATOR_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD__GETENUMERATOR_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
