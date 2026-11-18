#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/CompressionMethod.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/TestStrategy.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/UseZip64.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/ZipFile_HeaderTest.h"
#include "unitysdk/System/Object.h"

namespace ICSharpCode::SharpZipLib::Core { class INameTransform; }
namespace ICSharpCode::SharpZipLib::Zip { class IArchiveStorage; }
namespace ICSharpCode::SharpZipLib::Zip { class IDynamicDataSource; }
namespace ICSharpCode::SharpZipLib::Zip { class IEntryFactory; }
namespace ICSharpCode::SharpZipLib::Zip { class IStaticDataSource; }
namespace ICSharpCode::SharpZipLib::Zip { class ZipEntry; }
namespace ICSharpCode::SharpZipLib::Zip { class ZipFile_KeysRequiredEventHandler; }
namespace ICSharpCode::SharpZipLib::Zip { class ZipFile_ZipString; }
namespace ICSharpCode::SharpZipLib::Zip { class ZipFile_ZipUpdate; }
namespace ICSharpCode::SharpZipLib::Zip { class ZipTestResultHandler; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IEnumerator; }
namespace System::IO { class FileStream; }
namespace System::IO { class Stream; }
namespace System::Security::Cryptography { class CryptoStream; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ABORTUPDATE_OFFSET UNITYSDK_OFFSET(0x1F0C8A90)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ADDDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1F0C9BA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ADDENTRY_OFFSET UNITYSDK_OFFSET(0x1F0CC510)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ADDUPDATE_OFFSET UNITYSDK_OFFSET(0x1F0C8C60)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ADD_1_OFFSET UNITYSDK_OFFSET(0x1F0C90B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ADD_2_OFFSET UNITYSDK_OFFSET(0x1F0C9260)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ADD_3_OFFSET UNITYSDK_OFFSET(0x1F0C9390)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ADD_4_OFFSET UNITYSDK_OFFSET(0x1F0C9500)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ADD_5_OFFSET UNITYSDK_OFFSET(0x1F0C9670)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ADD_6_OFFSET UNITYSDK_OFFSET(0x1F0C9850)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ADD_7_OFFSET UNITYSDK_OFFSET(0x1F0C9A50)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ADD_OFFSET UNITYSDK_OFFSET(0x1F0C8EB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_BEGINUPDATE_1_OFFSET UNITYSDK_OFFSET(0x1F0C6B70)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_BEGINUPDATE_2_OFFSET UNITYSDK_OFFSET(0x1F0C6BC0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_BEGINUPDATE_OFFSET UNITYSDK_OFFSET(0x1F0C64C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_CHECKCLASSICPASSWORD_OFFSET UNITYSDK_OFFSET(0x1F0CD750)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_CHECKUPDATING_OFFSET UNITYSDK_OFFSET(0x1F0C6F80)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1F0C1700)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_COMMITUPDATE_OFFSET UNITYSDK_OFFSET(0x1F0C6CB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_COPYBYTES_OFFSET UNITYSDK_OFFSET(0x1F0CB7D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_COPYDESCRIPTORBYTESDIRECT_OFFSET UNITYSDK_OFFSET(0x1F0CBB80)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_COPYDESCRIPTORBYTES_OFFSET UNITYSDK_OFFSET(0x1F0CB500)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_COPYENTRYDATADIRECT_OFFSET UNITYSDK_OFFSET(0x1F0CBDE0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_COPYENTRYDIRECT_OFFSET UNITYSDK_OFFSET(0x1F0CCF50)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_COPYENTRY_OFFSET UNITYSDK_OFFSET(0x1F0CD1C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_CREATEANDINITDECRYPTIONSTREAM_OFFSET UNITYSDK_OFFSET(0x1F0C2300)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_CREATEANDINITENCRYPTIONSTREAM_OFFSET UNITYSDK_OFFSET(0x1F0CC320)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1F0C1900)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_CREATE_OFFSET UNITYSDK_OFFSET(0x1F0C1760)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_DELETE_1_OFFSET UNITYSDK_OFFSET(0x1F0C9E30)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_DELETE_OFFSET UNITYSDK_OFFSET(0x1F0C9CC0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_DISPOSEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F0C1170)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F0CD510)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F0C1690)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_FINDENTRY_OFFSET UNITYSDK_OFFSET(0x1F0C1CA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_FINDEXISTINGUPDATE_1_OFFSET UNITYSDK_OFFSET(0x1F0C8DB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_FINDEXISTINGUPDATE_OFFSET UNITYSDK_OFFSET(0x1F0C9F70)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GETBUFFER_OFFSET UNITYSDK_OFFSET(0x1F0CB4A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GETDESCRIPTORSIZE_OFFSET UNITYSDK_OFFSET(0x1F0CB730)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GETENTRY_OFFSET UNITYSDK_OFFSET(0x1F0C1DA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F0C1C10)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GETINPUTSTREAM_1_OFFSET UNITYSDK_OFFSET(0x1F0C2030)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GETINPUTSTREAM_OFFSET UNITYSDK_OFFSET(0x1F0C1EB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GETOUTPUTSTREAM_OFFSET UNITYSDK_OFFSET(0x1F0CC1A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GETTRANSFORMEDDIRECTORYNAME_OFFSET UNITYSDK_OFFSET(0x1F0CB3A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GETTRANSFORMEDFILENAME_OFFSET UNITYSDK_OFFSET(0x1F0CB2B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_BUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1F0C63F0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1F0C1B40)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_ENTRYBYINDEX_OFFSET UNITYSDK_OFFSET(0x1F0C1B60)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_ENTRYFACTORY_OFFSET UNITYSDK_OFFSET(0x1F0C6350)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_HAVEKEYS_OFFSET UNITYSDK_OFFSET(0x1F0C0520)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_ISEMBEDDEDARCHIVE_OFFSET UNITYSDK_OFFSET(0x1F0C1AE0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_ISNEWARCHIVE_OFFSET UNITYSDK_OFFSET(0x1F0C1AF0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_ISSTREAMOWNER_OFFSET UNITYSDK_OFFSET(0x1F0C1AC0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_ISUPDATING_OFFSET UNITYSDK_OFFSET(0x1F0C6490)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1F0C0490)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_NAMETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F0C62D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1F0C1B10)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1F0C1B20)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_USEZIP64_OFFSET UNITYSDK_OFFSET(0x1F0C64A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_ZIPFILECOMMENT_OFFSET UNITYSDK_OFFSET(0x1F0C1B00)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_LOCATEBLOCKWITHSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1F0CD580)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_LOCATEENTRY_OFFSET UNITYSDK_OFFSET(0x1F0C22F0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_MODIFYENTRY_OFFSET UNITYSDK_OFFSET(0x1F0CCC00)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ONKEYSREQUIRED_OFFSET UNITYSDK_OFFSET(0x1F0C03C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_POSTUPDATECLEANUP_OFFSET UNITYSDK_OFFSET(0x1F0C89A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_READENTRIES_OFFSET UNITYSDK_OFFSET(0x1F0C06F0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_READLEUINT_OFFSET UNITYSDK_OFFSET(0x1F0C61D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_READLEULONG_OFFSET UNITYSDK_OFFSET(0x1F0CD520)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_READLEUSHORT_OFFSET UNITYSDK_OFFSET(0x1F0C6200)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_REOPEN_1_OFFSET UNITYSDK_OFFSET(0x1F0CD360)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_REOPEN_OFFSET UNITYSDK_OFFSET(0x1F0CD2E0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_RUNUPDATES_OFFSET UNITYSDK_OFFSET(0x1F0C6FF0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_SETCOMMENT_OFFSET UNITYSDK_OFFSET(0x1F0C8AA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_SET_BUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1F0C6400)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_SET_ENTRYFACTORY_OFFSET UNITYSDK_OFFSET(0x1F0C6360)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_SET_ISSTREAMOWNER_OFFSET UNITYSDK_OFFSET(0x1F0C1AD0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1F0C04A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_SET_NAMETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F0C62F0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1F0C04B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_SET_USEZIP64_OFFSET UNITYSDK_OFFSET(0x1F0C64B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F0CD4B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_TESTARCHIVE_1_OFFSET UNITYSDK_OFFSET(0x1F0C27F0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_TESTARCHIVE_OFFSET UNITYSDK_OFFSET(0x1F0C27E0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_TESTLOCALHEADER_OFFSET UNITYSDK_OFFSET(0x1F0C3050)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UPDATECOMMENTONLY_OFFSET UNITYSDK_OFFSET(0x1F0C8230)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_WRITECENTRALDIRECTORYHEADER_OFFSET UNITYSDK_OFFSET(0x1F0CAA00)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_WRITEENCRYPTIONHEADER_OFFSET UNITYSDK_OFFSET(0x1F0CD810)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_WRITELEINT_OFFSET UNITYSDK_OFFSET(0x1F0CA120)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_WRITELELONG_OFFSET UNITYSDK_OFFSET(0x1F0CA240)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_WRITELESHORT_OFFSET UNITYSDK_OFFSET(0x1F0CA080)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_WRITELEUINT_OFFSET UNITYSDK_OFFSET(0x1F0CA1B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_WRITELEULONG_OFFSET UNITYSDK_OFFSET(0x1F0CA270)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_WRITELEUSHORT_OFFSET UNITYSDK_OFFSET(0x1F0CA0D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_WRITELOCALENTRYHEADER_OFFSET UNITYSDK_OFFSET(0x1F0CA2A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F0C1280)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F0C1410)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1F0C15E0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0C0530)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipFile_TypeDefinitionIndex = 6877;

	class ZipFile : public ::System::Object
	{
	public:
		// static const ::System::Int32 DefaultBufferSize = 0x1000; // 0x0
		::Il2CppArray<::System::Byte>* copyBuffer_; // 0x10
		::ICSharpCode::SharpZipLib::Zip::IEntryFactory* updateEntryFactory_; // 0x18
		::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource* updateDataSource_; // 0x20
		::System::IO::Stream* baseStream_; // 0x28
		::System::String* rawPassword_; // 0x30
		::ICSharpCode::SharpZipLib::Zip::IArchiveStorage* archiveStorage_; // 0x38
		::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString* newComment_; // 0x40
		::System::String* comment_; // 0x48
		::System::Collections::Hashtable* updateIndex_; // 0x50
		::System::String* name_; // 0x58
		::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler* KeysRequired; // 0x60
		::Il2CppArray<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>* entries_; // 0x68
		::Il2CppArray<::System::Byte>* key; // 0x70
		::System::Collections::ArrayList* updates_; // 0x78
		::System::Int64 updateCount_; // 0x80
		::System::Int32 bufferSize_; // 0x88
		::System::Boolean isDisposed_; // 0x8C
		::System::Boolean contentsEdited_; // 0x8D
		::System::Boolean commentEdited_; // 0x8E
		::System::Byte _padding0[0x1];
		::System::Int64 offsetOfFirstEntry; // 0x90
		::System::Boolean isStreamOwner; // 0x98
		::System::Boolean isNewArchive_; // 0x99
		::System::Byte _padding1[0x2];
		::ICSharpCode::SharpZipLib::Zip::UseZip64 useZip64_; // 0x9C

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::System::IO::FileStream* file)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::FileStream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE__CTOR_1_OFFSET))(this, file);
		}

		::System::Void _ctor_2(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE__CTOR_2_OFFSET))(this, stream);
		}

		::System::Void _ctor_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE__CTOR_3_OFFSET))(this);
		}

		::System::Void OnKeysRequired(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ONKEYSREQUIRED_OFFSET))(this, fileName);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_SET_KEY_OFFSET))(this, value);
		}

		::System::Void set_Password(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_SET_PASSWORD_OFFSET))(this, value);
		}

		::System::Boolean get_HaveKeys()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_HAVEKEYS_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_FINALIZE_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_CLOSE_OFFSET))(this);
		}

		static ::ICSharpCode::SharpZipLib::Zip::ZipFile* Create(::System::String* fileName)
		{
			return ((::ICSharpCode::SharpZipLib::Zip::ZipFile*(*)(::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_CREATE_OFFSET))(fileName);
		}

		static ::ICSharpCode::SharpZipLib::Zip::ZipFile* Create_1(::System::IO::Stream* outStream)
		{
			return ((::ICSharpCode::SharpZipLib::Zip::ZipFile*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_CREATE_1_OFFSET))(outStream);
		}

		::System::Boolean get_IsStreamOwner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_ISSTREAMOWNER_OFFSET))(this);
		}

		::System::Void set_IsStreamOwner(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_SET_ISSTREAMOWNER_OFFSET))(this, value);
		}

		::System::Boolean get_IsEmbeddedArchive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_ISEMBEDDEDARCHIVE_OFFSET))(this);
		}

		::System::Boolean get_IsNewArchive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_ISNEWARCHIVE_OFFSET))(this);
		}

		::System::String* get_ZipFileComment()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_ZIPFILECOMMENT_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_Size()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_SIZE_OFFSET))(this);
		}

		::System::Int64 get_Count()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_COUNT_OFFSET))(this);
		}

		::ICSharpCode::SharpZipLib::Zip::ZipEntry* get_EntryByIndex(::System::Int32 index)
		{
			return ((::ICSharpCode::SharpZipLib::Zip::ZipEntry*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_ENTRYBYINDEX_OFFSET))(this, index);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 FindEntry(::System::String* name, ::System::Boolean ignoreCase)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_FINDENTRY_OFFSET))(this, name, ignoreCase);
		}

		::ICSharpCode::SharpZipLib::Zip::ZipEntry* GetEntry(::System::String* name)
		{
			return ((::ICSharpCode::SharpZipLib::Zip::ZipEntry*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GETENTRY_OFFSET))(this, name);
		}

		::System::IO::Stream* GetInputStream(::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GETINPUTSTREAM_OFFSET))(this, entry);
		}

		::System::IO::Stream* GetInputStream_1(::System::Int64 entryIndex)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GETINPUTSTREAM_1_OFFSET))(this, entryIndex);
		}

		::System::Boolean TestArchive(::System::Boolean testData)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_TESTARCHIVE_OFFSET))(this, testData);
		}

		::System::Boolean TestArchive_1(::System::Boolean testData, ::ICSharpCode::SharpZipLib::Zip::TestStrategy strategy, ::ICSharpCode::SharpZipLib::Zip::ZipTestResultHandler* resultHandler)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::ICSharpCode::SharpZipLib::Zip::TestStrategy, ::ICSharpCode::SharpZipLib::Zip::ZipTestResultHandler*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_TESTARCHIVE_1_OFFSET))(this, testData, strategy, resultHandler);
		}

		::System::Int64 TestLocalHeader(::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry, ::ICSharpCode::SharpZipLib::Zip::ZipFile_HeaderTest tests)
		{
			return ((::System::Int64(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*, ::ICSharpCode::SharpZipLib::Zip::ZipFile_HeaderTest))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_TESTLOCALHEADER_OFFSET))(this, entry, tests);
		}

		::ICSharpCode::SharpZipLib::Core::INameTransform* get_NameTransform()
		{
			return ((::ICSharpCode::SharpZipLib::Core::INameTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_NAMETRANSFORM_OFFSET))(this);
		}

		::System::Void set_NameTransform(::ICSharpCode::SharpZipLib::Core::INameTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Core::INameTransform*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_SET_NAMETRANSFORM_OFFSET))(this, value);
		}

		::ICSharpCode::SharpZipLib::Zip::IEntryFactory* get_EntryFactory()
		{
			return ((::ICSharpCode::SharpZipLib::Zip::IEntryFactory*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_ENTRYFACTORY_OFFSET))(this);
		}

		::System::Void set_EntryFactory(::ICSharpCode::SharpZipLib::Zip::IEntryFactory* value)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::IEntryFactory*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_SET_ENTRYFACTORY_OFFSET))(this, value);
		}

		::System::Int32 get_BufferSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_BUFFERSIZE_OFFSET))(this);
		}

		::System::Void set_BufferSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_SET_BUFFERSIZE_OFFSET))(this, value);
		}

		::System::Boolean get_IsUpdating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_ISUPDATING_OFFSET))(this);
		}

		::ICSharpCode::SharpZipLib::Zip::UseZip64 get_UseZip64()
		{
			return ((::ICSharpCode::SharpZipLib::Zip::UseZip64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GET_USEZIP64_OFFSET))(this);
		}

		::System::Void set_UseZip64(::ICSharpCode::SharpZipLib::Zip::UseZip64 value)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::UseZip64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_SET_USEZIP64_OFFSET))(this, value);
		}

		::System::Void BeginUpdate(::ICSharpCode::SharpZipLib::Zip::IArchiveStorage* archiveStorage, ::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource* dataSource)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*, ::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_BEGINUPDATE_OFFSET))(this, archiveStorage, dataSource);
		}

		::System::Void BeginUpdate_1(::ICSharpCode::SharpZipLib::Zip::IArchiveStorage* archiveStorage)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_BEGINUPDATE_1_OFFSET))(this, archiveStorage);
		}

		::System::Void BeginUpdate_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_BEGINUPDATE_2_OFFSET))(this);
		}

		::System::Void CommitUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_COMMITUPDATE_OFFSET))(this);
		}

		::System::Void AbortUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ABORTUPDATE_OFFSET))(this);
		}

		::System::Void SetComment(::System::String* comment)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_SETCOMMENT_OFFSET))(this, comment);
		}

		::System::Void AddUpdate(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* update)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ADDUPDATE_OFFSET))(this, update);
		}

		::System::Void Add(::System::String* fileName, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod compressionMethod, ::System::Boolean useUnicodeText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ADD_OFFSET))(this, fileName, compressionMethod, useUnicodeText);
		}

		::System::Void Add_1(::System::String* fileName, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod compressionMethod)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ADD_1_OFFSET))(this, fileName, compressionMethod);
		}

		::System::Void Add_2(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ADD_2_OFFSET))(this, fileName);
		}

		::System::Void Add_3(::System::String* fileName, ::System::String* entryName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ADD_3_OFFSET))(this, fileName, entryName);
		}

		::System::Void Add_4(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource* dataSource, ::System::String* entryName)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ADD_4_OFFSET))(this, dataSource, entryName);
		}

		::System::Void Add_5(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource* dataSource, ::System::String* entryName, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod compressionMethod)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*, ::System::String*, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ADD_5_OFFSET))(this, dataSource, entryName, compressionMethod);
		}

		::System::Void Add_6(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource* dataSource, ::System::String* entryName, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod compressionMethod, ::System::Boolean useUnicodeText)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*, ::System::String*, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ADD_6_OFFSET))(this, dataSource, entryName, compressionMethod, useUnicodeText);
		}

		::System::Void Add_7(::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ADD_7_OFFSET))(this, entry);
		}

		::System::Void AddDirectory(::System::String* directoryName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ADDDIRECTORY_OFFSET))(this, directoryName);
		}

		::System::Boolean Delete(::System::String* fileName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_DELETE_OFFSET))(this, fileName);
		}

		::System::Void Delete_1(::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_DELETE_1_OFFSET))(this, entry);
		}

		::System::Void WriteLEShort(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_WRITELESHORT_OFFSET))(this, value);
		}

		::System::Void WriteLEUshort(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_WRITELEUSHORT_OFFSET))(this, value);
		}

		::System::Void WriteLEInt(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_WRITELEINT_OFFSET))(this, value);
		}

		::System::Void WriteLEUint(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_WRITELEUINT_OFFSET))(this, value);
		}

		::System::Void WriteLeLong(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_WRITELELONG_OFFSET))(this, value);
		}

		::System::Void WriteLEUlong(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_WRITELEULONG_OFFSET))(this, value);
		}

		::System::Void WriteLocalEntryHeader(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* update)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_WRITELOCALENTRYHEADER_OFFSET))(this, update);
		}

		::System::Int32 WriteCentralDirectoryHeader(::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry)
		{
			return ((::System::Int32(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_WRITECENTRALDIRECTORYHEADER_OFFSET))(this, entry);
		}

		::System::Void PostUpdateCleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_POSTUPDATECLEANUP_OFFSET))(this);
		}

		::System::String* GetTransformedFileName(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GETTRANSFORMEDFILENAME_OFFSET))(this, name);
		}

		::System::String* GetTransformedDirectoryName(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GETTRANSFORMEDDIRECTORYNAME_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Byte>* GetBuffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GETBUFFER_OFFSET))(this);
		}

		::System::Void CopyDescriptorBytes(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* update, ::System::IO::Stream* dest, ::System::IO::Stream* source)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*, ::System::IO::Stream*, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_COPYDESCRIPTORBYTES_OFFSET))(this, update, dest, source);
		}

		::System::Void CopyBytes(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* update, ::System::IO::Stream* destination, ::System::IO::Stream* source, ::System::Int64 bytesToCopy, ::System::Boolean updateCrc)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*, ::System::IO::Stream*, ::System::IO::Stream*, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_COPYBYTES_OFFSET))(this, update, destination, source, bytesToCopy, updateCrc);
		}

		::System::Int32 GetDescriptorSize(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* update)
		{
			return ((::System::Int32(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GETDESCRIPTORSIZE_OFFSET))(this, update);
		}

		::System::Void CopyDescriptorBytesDirect(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* update, ::System::IO::Stream* stream, ::System::Int64& destinationPosition, ::System::Int64 sourcePosition)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*, ::System::IO::Stream*, ::System::Int64&, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_COPYDESCRIPTORBYTESDIRECT_OFFSET))(this, update, stream, destinationPosition, sourcePosition);
		}

		::System::Void CopyEntryDataDirect(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* update, ::System::IO::Stream* stream, ::System::Boolean updateCrc, ::System::Int64& destinationPosition, ::System::Int64& sourcePosition)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*, ::System::IO::Stream*, ::System::Boolean, ::System::Int64&, ::System::Int64&))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_COPYENTRYDATADIRECT_OFFSET))(this, update, stream, updateCrc, destinationPosition, sourcePosition);
		}

		::System::Int32 FindExistingUpdate(::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry)
		{
			return ((::System::Int32(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_FINDEXISTINGUPDATE_OFFSET))(this, entry);
		}

		::System::Int32 FindExistingUpdate_1(::System::String* fileName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_FINDEXISTINGUPDATE_1_OFFSET))(this, fileName);
		}

		::System::IO::Stream* GetOutputStream(::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_GETOUTPUTSTREAM_OFFSET))(this, entry);
		}

		::System::Void AddEntry(::ICSharpCode::SharpZipLib::Zip::ZipFile* workFile, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* update)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipFile*, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ADDENTRY_OFFSET))(this, workFile, update);
		}

		::System::Void ModifyEntry(::ICSharpCode::SharpZipLib::Zip::ZipFile* workFile, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* update)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipFile*, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_MODIFYENTRY_OFFSET))(this, workFile, update);
		}

		::System::Void CopyEntryDirect(::ICSharpCode::SharpZipLib::Zip::ZipFile* workFile, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* update, ::System::Int64& destinationPosition)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipFile*, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*, ::System::Int64&))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_COPYENTRYDIRECT_OFFSET))(this, workFile, update, destinationPosition);
		}

		::System::Void CopyEntry(::ICSharpCode::SharpZipLib::Zip::ZipFile* workFile, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* update)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipFile*, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_COPYENTRY_OFFSET))(this, workFile, update);
		}

		::System::Void Reopen(::System::IO::Stream* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_REOPEN_OFFSET))(this, source);
		}

		::System::Void Reopen_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_REOPEN_1_OFFSET))(this);
		}

		::System::Void UpdateCommentOnly()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UPDATECOMMENTONLY_OFFSET))(this);
		}

		::System::Void RunUpdates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_RUNUPDATES_OFFSET))(this);
		}

		::System::Void CheckUpdating()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_CHECKUPDATING_OFFSET))(this);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void DisposeInternal(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_DISPOSEINTERNAL_OFFSET))(this, disposing);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_DISPOSE_OFFSET))(this, disposing);
		}

		::System::UInt16 ReadLEUshort()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_READLEUSHORT_OFFSET))(this);
		}

		::System::UInt32 ReadLEUint()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_READLEUINT_OFFSET))(this);
		}

		::System::UInt64 ReadLEUlong()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_READLEULONG_OFFSET))(this);
		}

		::System::Int64 LocateBlockWithSignature(::System::Int32 signature, ::System::Int64 endLocation, ::System::Int32 minimumBlockSize, ::System::Int32 maximumVariableData)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32, ::System::Int64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_LOCATEBLOCKWITHSIGNATURE_OFFSET))(this, signature, endLocation, minimumBlockSize, maximumVariableData);
		}

		::System::Void ReadEntries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_READENTRIES_OFFSET))(this);
		}

		::System::Int64 LocateEntry(::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry)
		{
			return ((::System::Int64(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_LOCATEENTRY_OFFSET))(this, entry);
		}

		::System::IO::Stream* CreateAndInitDecryptionStream(::System::IO::Stream* baseStream, ::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::IO::Stream*, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_CREATEANDINITDECRYPTIONSTREAM_OFFSET))(this, baseStream, entry);
		}

		::System::IO::Stream* CreateAndInitEncryptionStream(::System::IO::Stream* baseStream, ::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::IO::Stream*, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_CREATEANDINITENCRYPTIONSTREAM_OFFSET))(this, baseStream, entry);
		}

		static ::System::Void CheckClassicPassword(::System::Security::Cryptography::CryptoStream* classicCryptoStream, ::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry)
		{
			return ((::System::Void(*)(::System::Security::Cryptography::CryptoStream*, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_CHECKCLASSICPASSWORD_OFFSET))(classicCryptoStream, entry);
		}

		static ::System::Void WriteEncryptionHeader(::System::IO::Stream* stream, ::System::Int64 crcValue)
		{
			return ((::System::Void(*)(::System::IO::Stream*, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_WRITEENCRYPTIONHEADER_OFFSET))(stream, crcValue);
		}
	};
}
