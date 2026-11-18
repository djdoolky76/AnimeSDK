#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JArray; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq::JsonPath { class ArraySliceFilter; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER__EXECUTEFILTER_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FCB85B0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER__EXECUTEFILTER_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_NEWTONSOFT_JSON_LINQ_JTOKEN__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1FCB8E10)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER__EXECUTEFILTER_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FCB8DA0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER__EXECUTEFILTER_D__12_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1FCB9000)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER__EXECUTEFILTER_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FCB8E00)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER__EXECUTEFILTER_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1FCB8DB0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER__EXECUTEFILTER_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FCB83E0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER__EXECUTEFILTER_D__12__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCB8310)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER__EXECUTEFILTER_D__12___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1FCB84D0)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int ArraySliceFilter__ExecuteFilter_d__12_TypeDefinitionIndex = 7214;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
	class ArraySliceFilter__ExecuteFilter_d__12 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* __3__current; // 0x10
		::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter* __4__this; // 0x18
		::Newtonsoft::Json::Linq::JToken* __2__current; // 0x20
		::Newtonsoft::Json::Linq::JToken* _t_5__6; // 0x28
		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current; // 0x30
		::Newtonsoft::Json::Linq::JArray* _a_5__1; // 0x38
		::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap1; // 0x40
		::System::Int32 _stepCount_5__3; // 0x48
		::System::Int32 _stopIndex_5__4; // 0x4C
		::System::Int32 _i_5__2; // 0x50
		::System::Boolean __3__errorWhenNoMatch; // 0x54
		::System::Boolean errorWhenNoMatch; // 0x55
		::System::Boolean _positiveStep_5__5; // 0x56
		::System::Byte _padding0[0x1];
		::System::Int32 __l__initialThreadId; // 0x58
		::System::Int32 __1__state; // 0x5C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER__EXECUTEFILTER_D__12__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER__EXECUTEFILTER_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER__EXECUTEFILTER_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER__EXECUTEFILTER_D__12___M__FINALLY1_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER__EXECUTEFILTER_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER__EXECUTEFILTER_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER__EXECUTEFILTER_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER__EXECUTEFILTER_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_NEWTONSOFT_JSON_LINQ_JTOKEN__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER__EXECUTEFILTER_D__12_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
