#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Net::Http::Headers { class HttpHeaders; }

#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE531B0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EE542F0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING____GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EE545D0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EE54630)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EE545E0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EE542C0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1EE542E0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HttpHeaders__GetEnumerator_d__19_TypeDefinitionIndex = 3796;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
	class HttpHeaders__GetEnumerator_d__19 : public ::System::Object
	{
	public:
		::System::Net::Http::Headers::HttpHeaders* __4__this; // 0x10
		::System::Collections::Generic::KeyValuePair* __2__current; // 0x18
		::System::Byte _padding0[0x8];
		::System::Object* __7__wrap1; // 0x28
		::System::Byte _padding1[0x20];
		::System::Int32 __1__state; // 0x50
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19___M__FINALLY1_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair* System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Collections_Generic_IEnumerable_System_String____get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING____GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
