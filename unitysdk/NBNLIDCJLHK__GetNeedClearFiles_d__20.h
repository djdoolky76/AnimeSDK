#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLLOGIGNGAH;
class NBNLIDCJLHK;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::IO { class FileInfo; }

#define NBNLIDCJLHK__GETNEEDCLEARFILES_D__20_CTOR_OFFSET UNITYSDK_OFFSET(0xBADD8C0)
#define NBNLIDCJLHK__GETNEEDCLEARFILES_D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBADDA20)
#define NBNLIDCJLHK__GETNEEDCLEARFILES_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBADE5C0)
#define NBNLIDCJLHK__GETNEEDCLEARFILES_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBADE550)
#define NBNLIDCJLHK__GETNEEDCLEARFILES_D__20_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBADE620)
#define NBNLIDCJLHK__GETNEEDCLEARFILES_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBADE5B0)
#define NBNLIDCJLHK__GETNEEDCLEARFILES_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBADE560)
#define NBNLIDCJLHK__GETNEEDCLEARFILES_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBADD8E0)
#define NBNLIDCJLHK__GETNEEDCLEARFILES_D__20___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xBADD920)

inline static constexpr unsigned int NBNLIDCJLHK__GetNeedClearFiles_d__20_TypeDefinitionIndex = 59469;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
	class NBNLIDCJLHK__GetNeedClearFiles_d__20 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>* __7__wrap2; // 0x10
		::HLLOGIGNGAH* _indexInfo_5__2; // 0x18
		::NBNLIDCJLHK* __4__this; // 0x20
		::System::Tuple_2<::System::String*, ::System::Boolean>* __2__current; // 0x28
		::System::Int32 __l__initialThreadId; // 0x30
		::System::Boolean usePersistIndex; // 0x34
		::System::Boolean __3__usePersistIndex; // 0x35
		::System::Byte _padding0[0x2];
		::System::Int32 __1__state; // 0x38
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBNLIDCJLHK__GETNEEDCLEARFILES_D__20_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLIDCJLHK__GETNEEDCLEARFILES_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLIDCJLHK__GETNEEDCLEARFILES_D__20_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLIDCJLHK__GETNEEDCLEARFILES_D__20___M__FINALLY1_OFFSET))(this);
		}

		::System::Tuple_2<::System::String*, ::System::Boolean>* System_Collections_Generic_IEnumerator_System_Tuple_System_String_System_Boolean___get_Current()
		{
			return ((::System::Tuple_2<::System::String*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLIDCJLHK__GETNEEDCLEARFILES_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLIDCJLHK__GETNEEDCLEARFILES_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLIDCJLHK__GETNEEDCLEARFILES_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* System_Collections_Generic_IEnumerable_System_Tuple_System_String_System_Boolean___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLIDCJLHK__GETNEEDCLEARFILES_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLIDCJLHK__GETNEEDCLEARFILES_D__20_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
