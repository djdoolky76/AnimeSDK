#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJLGNEMNIKI;
class OBPJIBCAKEK;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::IO { class FileInfo; }

#define DJLGNEMNIKI__GETNEEDCLEARFILES_D__31_CTOR_OFFSET UNITYSDK_OFFSET(0xF23AC80)
#define DJLGNEMNIKI__GETNEEDCLEARFILES_D__31_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF23B6E0)
#define DJLGNEMNIKI__GETNEEDCLEARFILES_D__31_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xF23C270)
#define DJLGNEMNIKI__GETNEEDCLEARFILES_D__31_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF23C200)
#define DJLGNEMNIKI__GETNEEDCLEARFILES_D__31_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xF23C2D0)
#define DJLGNEMNIKI__GETNEEDCLEARFILES_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF23C260)
#define DJLGNEMNIKI__GETNEEDCLEARFILES_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xF23C210)
#define DJLGNEMNIKI__GETNEEDCLEARFILES_D__31_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF23B5A0)
#define DJLGNEMNIKI__GETNEEDCLEARFILES_D__31___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xF23B5E0)

inline static constexpr unsigned int DJLGNEMNIKI__GetNeedClearFiles_d__31_TypeDefinitionIndex = 59465;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31>
	class DJLGNEMNIKI__GetNeedClearFiles_d__31 : public ::System::Object
	{
	public:
		::System::Tuple_2<::System::String*, ::System::Boolean>* __2__current; // 0x10
		::OBPJIBCAKEK* _indexInfo_5__2; // 0x18
		::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>* __7__wrap3; // 0x20
		::DJLGNEMNIKI* __4__this; // 0x28
		::System::String* _rootPath_5__3; // 0x30
		::System::Int32 __l__initialThreadId; // 0x38
		::System::Boolean __3__usePersistIndex; // 0x3C
		::System::Boolean usePersistIndex; // 0x3D
		::System::Byte _padding0[0x2];
		::System::Int32 __1__state; // 0x40
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DJLGNEMNIKI__GETNEEDCLEARFILES_D__31_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI__GETNEEDCLEARFILES_D__31_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI__GETNEEDCLEARFILES_D__31_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI__GETNEEDCLEARFILES_D__31___M__FINALLY1_OFFSET))(this);
		}

		::System::Tuple_2<::System::String*, ::System::Boolean>* System_Collections_Generic_IEnumerator_System_Tuple_System_String_System_Boolean___get_Current()
		{
			return ((::System::Tuple_2<::System::String*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI__GETNEEDCLEARFILES_D__31_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI__GETNEEDCLEARFILES_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI__GETNEEDCLEARFILES_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* System_Collections_Generic_IEnumerable_System_Tuple_System_String_System_Boolean___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI__GETNEEDCLEARFILES_D__31_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI__GETNEEDCLEARFILES_D__31_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
