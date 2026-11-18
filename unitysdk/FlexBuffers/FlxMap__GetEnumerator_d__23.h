#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/FlexBuffers/FlxVector.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1ECD32B0)
#define FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_FLEXBUFFERS_FLXVALUE___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ECD3390)
#define FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ECD3400)
#define FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1ECD33B0)
#define FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ECD32A0)
#define FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECD31D0)

namespace FlexBuffers
{
	inline static constexpr unsigned int FlxMap__GetEnumerator_d__23_TypeDefinitionIndex = 6766;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
	class FlxMap__GetEnumerator_d__23 : public ::System::Object
	{
	public:
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::FlexBuffers::FlxValue> __2__current; // 0x10
		::System::Byte _padding0[0x10];
		::FlexBuffers::FlxVector _values_5__3; // 0x28
		::FlexBuffers::FlxVector _keys_5__2; // 0x40
		::FlexBuffers::FlxMap __4__this; // 0x58
		::System::Int32 _i_5__4; // 0x70
		::System::Int32 __1__state; // 0x74

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::FlexBuffers::FlxValue> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_FlexBuffers_FlxValue___get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::FlexBuffers::FlxValue>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_FLEXBUFFERS_FLXVALUE___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
