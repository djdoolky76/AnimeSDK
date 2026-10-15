#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPLHOPDDJCM;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Tuple; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HPLHOPDDJCM__GETPREDOWNLOADNEEDCLEARFILES_D__3_CTOR_OFFSET UNITYSDK_OFFSET(0x15DD21B0)
#define HPLHOPDDJCM__GETPREDOWNLOADNEEDCLEARFILES_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15DD2380)
#define HPLHOPDDJCM__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15DD2C20)
#define HPLHOPDDJCM__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15DD2BB0)
#define HPLHOPDDJCM__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15DD2CA0)
#define HPLHOPDDJCM__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15DD2C10)
#define HPLHOPDDJCM__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15DD2BC0)
#define HPLHOPDDJCM__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DD2240)
#define HPLHOPDDJCM__GETPREDOWNLOADNEEDCLEARFILES_D__3___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x15DD2280)

	template <typename T1, typename T2, typename T3>
	class HPLHOPDDJCM__GetPreDownloadNeedClearFiles_d__3 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* _notClearFileNameList_5__2; // 0x10
		::HPLHOPDDJCM* __4__this; // 0x18
		::System::Collections::Generic::IEnumerator_1<::System::Tuple*>* __7__wrap3; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* _excludeParentDirnames_5__3; // 0x28
		::System::Tuple* __2__current; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Int32 __l__initialThreadId; // 0x3C
		::System::Boolean usePersistIndex; // 0x40
		::System::Boolean __3__usePersistIndex; // 0x41
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HPLHOPDDJCM__GETPREDOWNLOADNEEDCLEARFILES_D__3_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHOPDDJCM__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHOPDDJCM__GETPREDOWNLOADNEEDCLEARFILES_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHOPDDJCM__GETPREDOWNLOADNEEDCLEARFILES_D__3___M__FINALLY1_OFFSET))(this);
		}

		::System::Tuple* System_Collections_Generic_IEnumerator_System_Tuple_System_String_System_Boolean___get_Current()
		{
			return ((::System::Tuple*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHOPDDJCM__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHOPDDJCM__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHOPDDJCM__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Tuple*>* System_Collections_Generic_IEnumerable_System_Tuple_System_String_System_Boolean___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Tuple*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHOPDDJCM__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHOPDDJCM__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
