#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ICSharpCode::SharpZipLib::Zip { class ITaggedData; }
namespace System::IO { class MemoryStream; }
namespace System::IO { class Stream; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_ADDDATA_1_OFFSET UNITYSDK_OFFSET(0x1FD568A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_ADDDATA_OFFSET UNITYSDK_OFFSET(0x1FD56870)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_ADDENTRY_1_OFFSET UNITYSDK_OFFSET(0x1FD563A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_ADDENTRY_OFFSET UNITYSDK_OFFSET(0x1FD56210)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_ADDLEINT_OFFSET UNITYSDK_OFFSET(0x1FD56980)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_ADDLELONG_OFFSET UNITYSDK_OFFSET(0x1FD56A10)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_ADDLESHORT_OFFSET UNITYSDK_OFFSET(0x1FD56930)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_ADDNEWENTRY_OFFSET UNITYSDK_OFFSET(0x1FD56830)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1FD55BA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1FD55F10)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_DELETE_OFFSET UNITYSDK_OFFSET(0x1FD56640)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FD56D20)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_FIND_OFFSET UNITYSDK_OFFSET(0x1FD55E30)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x1FD55ED0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_GETENTRYDATA_OFFSET UNITYSDK_OFFSET(0x1FD55C50)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_GETSTREAMFORTAG_OFFSET UNITYSDK_OFFSET(0x1FD55DB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_GET_CURRENTREADINDEX_OFFSET UNITYSDK_OFFSET(0x1FD560C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1FD55D90)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_GET_UNREADCOUNT_OFFSET UNITYSDK_OFFSET(0x1FD560D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_GET_VALUELENGTH_OFFSET UNITYSDK_OFFSET(0x1FD560B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READBYTE_OFFSET UNITYSDK_OFFSET(0x1FD56CA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READCHECK_OFFSET UNITYSDK_OFFSET(0x1FD56A80)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READINT_OFFSET UNITYSDK_OFFSET(0x1FD56B70)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READLONG_OFFSET UNITYSDK_OFFSET(0x1FD56A40)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READSHORTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FD56150)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READSHORT_OFFSET UNITYSDK_OFFSET(0x1FD56C30)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_SETSHORT_OFFSET UNITYSDK_OFFSET(0x1FD56710)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_SKIP_OFFSET UNITYSDK_OFFSET(0x1FD56D00)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_STARTNEWENTRY_OFFSET UNITYSDK_OFFSET(0x1FD56780)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD55C00)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD55B40)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipExtraData_TypeDefinitionIndex = 6870;

	class ZipExtraData : public ::System::Object
	{
	public:
		::System::IO::MemoryStream* _newEntry; // 0x10
		::Il2CppArray<::System::Byte>* _data; // 0x18
		::System::Int32 _readValueStart; // 0x20
		::System::Int32 _index; // 0x24
		::System::Int32 _readValueLength; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA__CTOR_1_OFFSET))(this, data);
		}

		::Il2CppArray<::System::Byte>* GetEntryData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_GETENTRYDATA_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_CLEAR_OFFSET))(this);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_GET_LENGTH_OFFSET))(this);
		}

		::System::IO::Stream* GetStreamForTag(::System::Int32 tag)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_GETSTREAMFORTAG_OFFSET))(this, tag);
		}

		::ICSharpCode::SharpZipLib::Zip::ITaggedData* GetData(::System::Int16 tag)
		{
			return ((::ICSharpCode::SharpZipLib::Zip::ITaggedData*(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_GETDATA_OFFSET))(this, tag);
		}

		static ::ICSharpCode::SharpZipLib::Zip::ITaggedData* Create(::System::Int16 tag, ::Il2CppArray<::System::Byte>* data, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::ICSharpCode::SharpZipLib::Zip::ITaggedData*(*)(::System::Int16, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_CREATE_OFFSET))(tag, data, offset, count);
		}

		::System::Int32 get_ValueLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_GET_VALUELENGTH_OFFSET))(this);
		}

		::System::Int32 get_CurrentReadIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_GET_CURRENTREADINDEX_OFFSET))(this);
		}

		::System::Int32 get_UnreadCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_GET_UNREADCOUNT_OFFSET))(this);
		}

		::System::Boolean Find(::System::Int32 headerID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_FIND_OFFSET))(this, headerID);
		}

		::System::Void AddEntry(::ICSharpCode::SharpZipLib::Zip::ITaggedData* taggedData)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ITaggedData*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_ADDENTRY_OFFSET))(this, taggedData);
		}

		::System::Void AddEntry_1(::System::Int32 headerID, ::Il2CppArray<::System::Byte>* fieldData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_ADDENTRY_1_OFFSET))(this, headerID, fieldData);
		}

		::System::Void StartNewEntry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_STARTNEWENTRY_OFFSET))(this);
		}

		::System::Void AddNewEntry(::System::Int32 headerID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_ADDNEWENTRY_OFFSET))(this, headerID);
		}

		::System::Void AddData(::System::Byte data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_ADDDATA_OFFSET))(this, data);
		}

		::System::Void AddData_1(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_ADDDATA_1_OFFSET))(this, data);
		}

		::System::Void AddLeShort(::System::Int32 toAdd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_ADDLESHORT_OFFSET))(this, toAdd);
		}

		::System::Void AddLeInt(::System::Int32 toAdd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_ADDLEINT_OFFSET))(this, toAdd);
		}

		::System::Void AddLeLong(::System::Int64 toAdd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_ADDLELONG_OFFSET))(this, toAdd);
		}

		::System::Boolean Delete(::System::Int32 headerID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_DELETE_OFFSET))(this, headerID);
		}

		::System::Int64 ReadLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READLONG_OFFSET))(this);
		}

		::System::Int32 ReadInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READINT_OFFSET))(this);
		}

		::System::Int32 ReadShort()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READSHORT_OFFSET))(this);
		}

		::System::Int32 ReadByte()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READBYTE_OFFSET))(this);
		}

		::System::Void Skip(::System::Int32 amount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_SKIP_OFFSET))(this, amount);
		}

		::System::Void ReadCheck(::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READCHECK_OFFSET))(this, length);
		}

		::System::Int32 ReadShortInternal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READSHORTINTERNAL_OFFSET))(this);
		}

		::System::Void SetShort(::System::Int32& index, ::System::Int32 source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_SETSHORT_OFFSET))(this, index, source);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_DISPOSE_OFFSET))(this);
		}
	};
}
