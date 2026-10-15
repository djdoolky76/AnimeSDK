#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Dynamic { class ExpandoObject; }
namespace System::Dynamic { class ExpandoObject_ExpandoData; }

#define SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED8BB20)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1ED8BD90)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ED8BFB0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ED8C010)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1ED8BFC0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ED8BD80)

namespace System::Dynamic
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51>
	class ExpandoObject__GetExpandoEnumerator_d__51 : public ::System::Object
	{
	public:
		::System::Dynamic::ExpandoObject_ExpandoData* data; // 0x10
		::System::Collections::Generic::KeyValuePair* __2__current; // 0x18
		::System::Byte _padding0[0x8];
		::System::Dynamic::ExpandoObject* __4__this; // 0x28
		::System::Int32 _i_5__1; // 0x30
		::System::Int32 __1__state; // 0x34
		::System::Int32 version; // 0x38
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51_MOVENEXT_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair* System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
