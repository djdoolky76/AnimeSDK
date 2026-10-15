#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCKEHNGDJJF;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Tuple; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CCKEHNGDJJF__GETPREDOWNLOADNEEDCLEARFILES_D__2_CTOR_OFFSET UNITYSDK_OFFSET(0xC74B3C0)
#define CCKEHNGDJJF__GETPREDOWNLOADNEEDCLEARFILES_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC74B530)
#define CCKEHNGDJJF__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC74BD60)
#define CCKEHNGDJJF__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC74BCF0)
#define CCKEHNGDJJF__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC74BDE0)
#define CCKEHNGDJJF__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC74BD50)
#define CCKEHNGDJJF__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC74BD00)
#define CCKEHNGDJJF__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC74B3F0)
#define CCKEHNGDJJF__GETPREDOWNLOADNEEDCLEARFILES_D__2___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xC74B430)

inline static constexpr unsigned int CCKEHNGDJJF__GetPreDownloadNeedClearFiles_d__2_TypeDefinitionIndex = 59488;

	template <typename T1, typename T2>
	class CCKEHNGDJJF__GetPreDownloadNeedClearFiles_d__2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::Tuple*>* __7__wrap3; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* _excludeParentDirnames_5__3; // 0x18
		::System::Tuple* __2__current; // 0x20
		::System::Collections::Generic::HashSet_1<::System::String*>* _notClearFileNameList_5__2; // 0x28
		::CCKEHNGDJJF* __4__this; // 0x30
		::System::Boolean usePersistIndex; // 0x38
		::System::Boolean __3__usePersistIndex; // 0x39
		::System::Byte _padding0[0x2];
		::System::Int32 __l__initialThreadId; // 0x3C
		::System::Int32 __1__state; // 0x40
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CCKEHNGDJJF__GETPREDOWNLOADNEEDCLEARFILES_D__2_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKEHNGDJJF__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKEHNGDJJF__GETPREDOWNLOADNEEDCLEARFILES_D__2_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKEHNGDJJF__GETPREDOWNLOADNEEDCLEARFILES_D__2___M__FINALLY1_OFFSET))(this);
		}

		::System::Tuple* System_Collections_Generic_IEnumerator_System_Tuple_System_String_System_Boolean___get_Current()
		{
			return ((::System::Tuple*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKEHNGDJJF__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKEHNGDJJF__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKEHNGDJJF__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Tuple*>* System_Collections_Generic_IEnumerable_System_Tuple_System_String_System_Boolean___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Tuple*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKEHNGDJJF__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKEHNGDJJF__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
