#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Specialized { class StringDictionary_GenericAdapter; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER__GETENUMERATOR_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DD2F4D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER__GETENUMERATOR_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_STRING___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DD2F7C0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER__GETENUMERATOR_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DD2F820)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER__GETENUMERATOR_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1DD2F7D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER__GETENUMERATOR_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DD2F3D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER__GETENUMERATOR_D__25__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD2F3C0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER__GETENUMERATOR_D__25___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1DD2F3F0)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int StringDictionary_GenericAdapter__GetEnumerator_d__25_TypeDefinitionIndex = 3936;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
	class StringDictionary_GenericAdapter__GetEnumerator_d__25 : public ::System::Object
	{
	public:
		::System::Collections::Specialized::StringDictionary_GenericAdapter* __4__this; // 0x10
		::System::Collections::IEnumerator* __7__wrap1; // 0x18
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> __2__current; // 0x20
		::System::Byte _padding0[0x8];
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER__GETENUMERATOR_D__25__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER__GETENUMERATOR_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER__GETENUMERATOR_D__25_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER__GETENUMERATOR_D__25___M__FINALLY1_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_String___get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER__GETENUMERATOR_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_STRING___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER__GETENUMERATOR_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER__GETENUMERATOR_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
