#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ICSharpCode::SharpZipLib::Tar { class ProgressMessageHandler; }
namespace ICSharpCode::SharpZipLib::Tar { class TarEntry; }
namespace ICSharpCode::SharpZipLib::Tar { class TarInputStream; }
namespace ICSharpCode::SharpZipLib::Tar { class TarOutputStream; }
namespace System { class String; }
namespace System::IO { class Stream; }

#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_ADD_PROGRESSMESSAGEEVENT_OFFSET UNITYSDK_OFFSET(0x1FD3E6D0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_CLOSEARCHIVE_OFFSET UNITYSDK_OFFSET(0x1FD3F640)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1FD41B10)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_CREATEINPUTTARARCHIVE_1_OFFSET UNITYSDK_OFFSET(0x1FD3E9E0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_CREATEINPUTTARARCHIVE_OFFSET UNITYSDK_OFFSET(0x1FD3E8F0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_CREATEOUTPUTTARARCHIVE_1_OFFSET UNITYSDK_OFFSET(0x1FD3ECC0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_CREATEOUTPUTTARARCHIVE_OFFSET UNITYSDK_OFFSET(0x1FD3EBD0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1FD419E0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FD41930)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_ENSUREDIRECTORYEXISTS_OFFSET UNITYSDK_OFFSET(0x1FD404C0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_EXTRACTCONTENTS_OFFSET UNITYSDK_OFFSET(0x1FD3FD50)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_EXTRACTENTRY_OFFSET UNITYSDK_OFFSET(0x1FD3FDF0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1FD41B30)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_GET_APPLYUSERINFOOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1FD3F280)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_GET_ASCIITRANSLATE_OFFSET UNITYSDK_OFFSET(0x1FD3EEE0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1FD3F440)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_GET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x1FD3F4B0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_GET_PATHPREFIX_OFFSET UNITYSDK_OFFSET(0x1FD3F030)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_GET_RECORDSIZE_OFFSET UNITYSDK_OFFSET(0x1FD3F520)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_GET_ROOTPATH_OFFSET UNITYSDK_OFFSET(0x1FD3F110)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_GET_USERID_OFFSET UNITYSDK_OFFSET(0x1FD3F360)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1FD3F3D0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_ISBINARY_OFFSET UNITYSDK_OFFSET(0x1FD40620)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_LISTCONTENTS_OFFSET UNITYSDK_OFFSET(0x1FD3F650)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_ONPROGRESSMESSAGEEVENT_OFFSET UNITYSDK_OFFSET(0x1FD3E7B0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_REMOVE_PROGRESSMESSAGEEVENT_OFFSET UNITYSDK_OFFSET(0x1FD3E740)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_SETASCIITRANSLATION_OFFSET UNITYSDK_OFFSET(0x1FD3EFC0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_SETKEEPOLDFILES_OFFSET UNITYSDK_OFFSET(0x1FD3EE70)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_SETUSERINFO_OFFSET UNITYSDK_OFFSET(0x1FD3F1F0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_SET_APPLYUSERINFOOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1FD3F2F0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_SET_ASCIITRANSLATE_OFFSET UNITYSDK_OFFSET(0x1FD3EF50)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_SET_ISSTREAMOWNER_OFFSET UNITYSDK_OFFSET(0x1FD3F5E0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_SET_PATHPREFIX_OFFSET UNITYSDK_OFFSET(0x1FD3F0A0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_SET_ROOTPATH_OFFSET UNITYSDK_OFFSET(0x1FD3F180)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_WRITEENTRYCORE_OFFSET UNITYSDK_OFFSET(0x1FD40D90)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_WRITEENTRY_OFFSET UNITYSDK_OFFSET(0x1FD40AD0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD3E7F0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FD3E870)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD3E7D0)

namespace ICSharpCode::SharpZipLib::Tar
{
	inline static constexpr unsigned int TarArchive_TypeDefinitionIndex = 6825;

	class TarArchive : public ::System::Object
	{
	public:
		::System::String* userName; // 0x10
		::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler* ProgressMessageEvent; // 0x18
		::ICSharpCode::SharpZipLib::Tar::TarInputStream* tarIn; // 0x20
		::System::String* pathPrefix; // 0x28
		::System::String* rootPath; // 0x30
		::System::String* groupName; // 0x38
		::ICSharpCode::SharpZipLib::Tar::TarOutputStream* tarOut; // 0x40
		::System::Int32 userId; // 0x48
		::System::Boolean asciiTranslate; // 0x4C
		::System::Boolean applyUserInfoOverrides; // 0x4D
		::System::Boolean keepOldFiles; // 0x4E
		::System::Boolean isDisposed; // 0x4F
		::System::Int32 groupId; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ICSharpCode::SharpZipLib::Tar::TarInputStream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Tar::TarInputStream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE__CTOR_1_OFFSET))(this, stream);
		}

		::System::Void _ctor_2(::ICSharpCode::SharpZipLib::Tar::TarOutputStream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Tar::TarOutputStream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE__CTOR_2_OFFSET))(this, stream);
		}

		::System::Void add_ProgressMessageEvent(::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_ADD_PROGRESSMESSAGEEVENT_OFFSET))(this, value);
		}

		::System::Void remove_ProgressMessageEvent(::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_REMOVE_PROGRESSMESSAGEEVENT_OFFSET))(this, value);
		}

		::System::Void OnProgressMessageEvent(::ICSharpCode::SharpZipLib::Tar::TarEntry* entry, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Tar::TarEntry*, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_ONPROGRESSMESSAGEEVENT_OFFSET))(this, entry, message);
		}

		static ::ICSharpCode::SharpZipLib::Tar::TarArchive* CreateInputTarArchive(::System::IO::Stream* inputStream)
		{
			return ((::ICSharpCode::SharpZipLib::Tar::TarArchive*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_CREATEINPUTTARARCHIVE_OFFSET))(inputStream);
		}

		static ::ICSharpCode::SharpZipLib::Tar::TarArchive* CreateInputTarArchive_1(::System::IO::Stream* inputStream, ::System::Int32 blockFactor)
		{
			return ((::ICSharpCode::SharpZipLib::Tar::TarArchive*(*)(::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_CREATEINPUTTARARCHIVE_1_OFFSET))(inputStream, blockFactor);
		}

		static ::ICSharpCode::SharpZipLib::Tar::TarArchive* CreateOutputTarArchive(::System::IO::Stream* outputStream)
		{
			return ((::ICSharpCode::SharpZipLib::Tar::TarArchive*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_CREATEOUTPUTTARARCHIVE_OFFSET))(outputStream);
		}

		static ::ICSharpCode::SharpZipLib::Tar::TarArchive* CreateOutputTarArchive_1(::System::IO::Stream* outputStream, ::System::Int32 blockFactor)
		{
			return ((::ICSharpCode::SharpZipLib::Tar::TarArchive*(*)(::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_CREATEOUTPUTTARARCHIVE_1_OFFSET))(outputStream, blockFactor);
		}

		::System::Void SetKeepOldFiles(::System::Boolean keepExistingFiles)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_SETKEEPOLDFILES_OFFSET))(this, keepExistingFiles);
		}

		::System::Boolean get_AsciiTranslate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_GET_ASCIITRANSLATE_OFFSET))(this);
		}

		::System::Void set_AsciiTranslate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_SET_ASCIITRANSLATE_OFFSET))(this, value);
		}

		::System::Void SetAsciiTranslation(::System::Boolean translateAsciiFiles)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_SETASCIITRANSLATION_OFFSET))(this, translateAsciiFiles);
		}

		::System::String* get_PathPrefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_GET_PATHPREFIX_OFFSET))(this);
		}

		::System::Void set_PathPrefix(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_SET_PATHPREFIX_OFFSET))(this, value);
		}

		::System::String* get_RootPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_GET_ROOTPATH_OFFSET))(this);
		}

		::System::Void set_RootPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_SET_ROOTPATH_OFFSET))(this, value);
		}

		::System::Void SetUserInfo(::System::Int32 userId, ::System::String* userName, ::System::Int32 groupId, ::System::String* groupName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_SETUSERINFO_OFFSET))(this, userId, userName, groupId, groupName);
		}

		::System::Boolean get_ApplyUserInfoOverrides()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_GET_APPLYUSERINFOOVERRIDES_OFFSET))(this);
		}

		::System::Void set_ApplyUserInfoOverrides(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_SET_APPLYUSERINFOOVERRIDES_OFFSET))(this, value);
		}

		::System::Int32 get_UserId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_GET_USERID_OFFSET))(this);
		}

		::System::String* get_UserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_GET_USERNAME_OFFSET))(this);
		}

		::System::Int32 get_GroupId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_GET_GROUPID_OFFSET))(this);
		}

		::System::String* get_GroupName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_GET_GROUPNAME_OFFSET))(this);
		}

		::System::Int32 get_RecordSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_GET_RECORDSIZE_OFFSET))(this);
		}

		::System::Void set_IsStreamOwner(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_SET_ISSTREAMOWNER_OFFSET))(this, value);
		}

		::System::Void CloseArchive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_CLOSEARCHIVE_OFFSET))(this);
		}

		::System::Void ListContents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_LISTCONTENTS_OFFSET))(this);
		}

		::System::Void ExtractContents(::System::String* destinationDirectory)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_EXTRACTCONTENTS_OFFSET))(this, destinationDirectory);
		}

		::System::Void ExtractEntry(::System::String* destDir, ::ICSharpCode::SharpZipLib::Tar::TarEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ICSharpCode::SharpZipLib::Tar::TarEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_EXTRACTENTRY_OFFSET))(this, destDir, entry);
		}

		::System::Void WriteEntry(::ICSharpCode::SharpZipLib::Tar::TarEntry* sourceEntry, ::System::Boolean recurse)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Tar::TarEntry*, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_WRITEENTRY_OFFSET))(this, sourceEntry, recurse);
		}

		::System::Void WriteEntryCore(::ICSharpCode::SharpZipLib::Tar::TarEntry* sourceEntry, ::System::Boolean recurse)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Tar::TarEntry*, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_WRITEENTRYCORE_OFFSET))(this, sourceEntry, recurse);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_CLOSE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_FINALIZE_OFFSET))(this);
		}

		static ::System::Void EnsureDirectoryExists(::System::String* directoryName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_ENSUREDIRECTORYEXISTS_OFFSET))(directoryName);
		}

		static ::System::Boolean IsBinary(::System::String* filename)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARARCHIVE_ISBINARY_OFFSET))(filename);
		}
	};
}
