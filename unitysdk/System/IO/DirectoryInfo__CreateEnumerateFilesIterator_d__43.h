#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SearchOption.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::IO { class DirectoryInfo; }
namespace System::IO { class FileInfo; }

#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_CTOR_OFFSET UNITYSDK_OFFSET(0x1C224B40)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C225350)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_IO_FILEINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C225810)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_IO_FILEINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C2257A0)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C225880)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C225800)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C2257B0)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C225230)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1C225250)

namespace System::IO
{
	inline static constexpr unsigned int DirectoryInfo__CreateEnumerateFilesIterator_d__43_TypeDefinitionIndex = 710;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43>
	class DirectoryInfo__CreateEnumerateFilesIterator_d__43 : public ::System::Object
	{
	public:
		::System::String* __3__searchPattern; // 0x10
		::System::String* searchPattern; // 0x18
		::System::IO::DirectoryInfo* __4__this; // 0x20
		::System::Collections::Generic::IEnumerator_1<::System::String*>* __7__wrap1; // 0x28
		::System::IO::FileInfo* __2__current; // 0x30
		::System::IO::SearchOption __3__searchOption; // 0x38
		::System::Int32 __1__state; // 0x3C
		::System::IO::SearchOption searchOption; // 0x40
		::System::Int32 __l__initialThreadId; // 0x44
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43___M__FINALLY1_OFFSET))(this);
		}

		::System::IO::FileInfo* System_Collections_Generic_IEnumerator_System_IO_FileInfo__get_Current()
		{
			return ((::System::IO::FileInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_IO_FILEINFO__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>* System_Collections_Generic_IEnumerable_System_IO_FileInfo__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_IO_FILEINFO__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
}
