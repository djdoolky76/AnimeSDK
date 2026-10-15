#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace SimpleJSON { class JSONArray; }
namespace System { class Object; }

#define SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__14_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC28200)
#define SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EC28EB0)
#define SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EC29020)
#define SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EC29080)
#define SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EC29030)
#define SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC28E90)
#define SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__14___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1EC28EA0)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONArray__GetEnumerator_d__14_TypeDefinitionIndex = 9958;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
	class JSONArray__GetEnumerator_d__14 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::SimpleJSON::JSONArray* __4__this; // 0x18
		::System::Object* __7__wrap1; // 0x20
		::System::Byte _padding0[0x10];
		::System::Int32 __1__state; // 0x38
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__14_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__14___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__GETENUMERATOR_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
