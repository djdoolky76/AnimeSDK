#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::IO { class FileInfo; }

#define CLHANDBGHIB__ENUMERATEFILES_D__29_CTOR_OFFSET UNITYSDK_OFFSET(0xD784390)
#define CLHANDBGHIB__ENUMERATEFILES_D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD78A690)
#define CLHANDBGHIB__ENUMERATEFILES_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_IO_FILEINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD78ADA0)
#define CLHANDBGHIB__ENUMERATEFILES_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_IO_FILEINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD78AD30)
#define CLHANDBGHIB__ENUMERATEFILES_D__29_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD78AE10)
#define CLHANDBGHIB__ENUMERATEFILES_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD78AD90)
#define CLHANDBGHIB__ENUMERATEFILES_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD78AD40)
#define CLHANDBGHIB__ENUMERATEFILES_D__29_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD78A530)
#define CLHANDBGHIB__ENUMERATEFILES_D__29___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xD78A590)
#define CLHANDBGHIB__ENUMERATEFILES_D__29___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0xD78A580)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29>
	class CLHANDBGHIB__EnumerateFiles_d__29 : public ::System::Object
	{
	public:
		::System::IO::FileInfo* __2__current; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* __3__exts; // 0x18
		::System::IO::FileInfo* _fileInfo_5__3; // 0x20
		::System::String* rootPath; // 0x28
		::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>* __7__wrap1; // 0x30
		::System::Object* __7__wrap3; // 0x38
		::System::Byte _padding0[0x10];
		::System::Collections::Generic::HashSet_1<::System::String*>* __3__excludeList; // 0x50
		::System::String* __3__rootPath; // 0x58
		::System::Collections::Generic::HashSet_1<::System::String*>* excludeList; // 0x60
		::System::Collections::Generic::HashSet_1<::System::String*>* exts; // 0x68
		::System::Int32 __1__state; // 0x70
		::System::Int32 __l__initialThreadId; // 0x74
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLHANDBGHIB__ENUMERATEFILES_D__29_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHANDBGHIB__ENUMERATEFILES_D__29_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHANDBGHIB__ENUMERATEFILES_D__29_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHANDBGHIB__ENUMERATEFILES_D__29___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHANDBGHIB__ENUMERATEFILES_D__29___M__FINALLY2_OFFSET))(this);
		}

		::System::IO::FileInfo* System_Collections_Generic_IEnumerator_System_IO_FileInfo__get_Current()
		{
			return ((::System::IO::FileInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHANDBGHIB__ENUMERATEFILES_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_IO_FILEINFO__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHANDBGHIB__ENUMERATEFILES_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHANDBGHIB__ENUMERATEFILES_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>* System_Collections_Generic_IEnumerable_System_IO_FileInfo__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHANDBGHIB__ENUMERATEFILES_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_IO_FILEINFO__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHANDBGHIB__ENUMERATEFILES_D__29_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
