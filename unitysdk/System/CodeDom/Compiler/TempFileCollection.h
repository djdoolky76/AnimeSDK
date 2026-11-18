#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_ADDEXTENSION_1_OFFSET UNITYSDK_OFFSET(0x1E32EE20)
#define SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_ADDEXTENSION_OFFSET UNITYSDK_OFFSET(0x1E32EDE0)
#define SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_ADDFILE_OFFSET UNITYSDK_OFFSET(0x1E32EE60)
#define SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1E32EEA0)
#define SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_DELETE_OFFSET UNITYSDK_OFFSET(0x1E32EEE0)
#define SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E32EF20)
#define SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E32EF60)
#define SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_GET_BASEPATH_OFFSET UNITYSDK_OFFSET(0x1E32EBE0)
#define SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E32EC20)
#define SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_GET_KEEPFILES_OFFSET UNITYSDK_OFFSET(0x1E32EC60)
#define SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_GET_TEMPDIR_OFFSET UNITYSDK_OFFSET(0x1E32EDA0)
#define SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_SET_KEEPFILES_OFFSET UNITYSDK_OFFSET(0x1E32ECA0)
#define SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1E32EFA0)
#define SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E32ECE0)
#define SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1E32ED20)
#define SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1E32ED60)
#define SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E32EFE0)
#define SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E32F020)
#define SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E32EB60)
#define SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E32EBA0)
#define SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E32EB20)

namespace System::CodeDom::Compiler
{
	inline static constexpr unsigned int TempFileCollection_TypeDefinitionIndex = 4022;

	class TempFileCollection : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* tempDir)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION__CTOR_1_OFFSET))(this, tempDir);
		}

		::System::Void _ctor_2(::System::String* tempDir, ::System::Boolean keepFiles)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION__CTOR_2_OFFSET))(this, tempDir, keepFiles);
		}

		::System::String* get_BasePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_GET_BASEPATH_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_KeepFiles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_GET_KEEPFILES_OFFSET))(this);
		}

		::System::Void set_KeepFiles(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_SET_KEEPFILES_OFFSET))(this, value);
		}

		::System::Int32 System_Collections_ICollection_get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean System_Collections_ICollection_get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* System_Collections_ICollection_get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::String* get_TempDir()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_GET_TEMPDIR_OFFSET))(this);
		}

		::System::String* AddExtension(::System::String* fileExtension)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_ADDEXTENSION_OFFSET))(this, fileExtension);
		}

		::System::String* AddExtension_1(::System::String* fileExtension, ::System::Boolean keepFile)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_ADDEXTENSION_1_OFFSET))(this, fileExtension, keepFile);
		}

		::System::Void AddFile(::System::String* fileName, ::System::Boolean keepFile)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_ADDFILE_OFFSET))(this, fileName, keepFile);
		}

		::System::Void CopyTo(::Il2CppArray<::System::String*>* fileNames, ::System::Int32 start)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_COPYTO_OFFSET))(this, fileNames, start);
		}

		::System::Void Delete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_DELETE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* array, ::System::Int32 start)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, array, start);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_TEMPFILECOLLECTION_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}
	};
}
