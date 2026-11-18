#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileAccess.h"
#include "unitysdk/System/IO/FileAttributes.h"
#include "unitysdk/System/IO/FileMode.h"
#include "unitysdk/System/IO/FileOptions.h"
#include "unitysdk/System/IO/FileShare.h"
#include "unitysdk/System/IO/MonoFileType.h"
#include "unitysdk/System/IO/MonoIOError.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/IO/MonoIOStat.h"
#include "unitysdk/System/DateTime.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::InteropServices { class SafeHandle; }

#define SYSTEM_IO_MONOIO_CLOSE_OFFSET UNITYSDK_OFFSET(0x1D1B1EB0)
#define SYSTEM_IO_MONOIO_COPYFILE_1_OFFSET UNITYSDK_OFFSET(0x1D1B1BF0)
#define SYSTEM_IO_MONOIO_COPYFILE_OFFSET UNITYSDK_OFFSET(0x1D1B1BE0)
#define SYSTEM_IO_MONOIO_CREATEDIRECTORY_1_OFFSET UNITYSDK_OFFSET(0x1D1B1B70)
#define SYSTEM_IO_MONOIO_CREATEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1D1B1B60)
#define SYSTEM_IO_MONOIO_CREATEPIPE_OFFSET UNITYSDK_OFFSET(0x1D1B29E0)
#define SYSTEM_IO_MONOIO_DELETEFILE_1_OFFSET UNITYSDK_OFFSET(0x1D1B1C20)
#define SYSTEM_IO_MONOIO_DELETEFILE_OFFSET UNITYSDK_OFFSET(0x1D1B1C10)
#define SYSTEM_IO_MONOIO_DUMPHANDLES_OFFSET UNITYSDK_OFFSET(0x1D1B1B50)
#define SYSTEM_IO_MONOIO_DUPLICATEHANDLE_OFFSET UNITYSDK_OFFSET(0x1D1B2A30)
#define SYSTEM_IO_MONOIO_EXISTSDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1D1B1E00)
#define SYSTEM_IO_MONOIO_EXISTSFILE_OFFSET UNITYSDK_OFFSET(0x1D1B1DE0)
#define SYSTEM_IO_MONOIO_EXISTSSYMLINK_OFFSET UNITYSDK_OFFSET(0x1D1B1E40)
#define SYSTEM_IO_MONOIO_EXISTS_OFFSET UNITYSDK_OFFSET(0x1D1B1DC0)
#define SYSTEM_IO_MONOIO_FINDCLOSEFILE_OFFSET UNITYSDK_OFFSET(0x1D1B1D70)
#define SYSTEM_IO_MONOIO_FINDFIRSTFILE_1_OFFSET UNITYSDK_OFFSET(0x1D1B1D50)
#define SYSTEM_IO_MONOIO_FINDFIRSTFILE_OFFSET UNITYSDK_OFFSET(0x1D1B1D40)
#define SYSTEM_IO_MONOIO_FINDNEXTFILE_OFFSET UNITYSDK_OFFSET(0x1D1B1D60)
#define SYSTEM_IO_MONOIO_GETCURRENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1D1B1BA0)
#define SYSTEM_IO_MONOIO_GETEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1D1B0BF0)
#define SYSTEM_IO_MONOIO_GETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D1B0A60)
#define SYSTEM_IO_MONOIO_GETFILEATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1D1B1C40)
#define SYSTEM_IO_MONOIO_GETFILEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1D1B1C30)
#define SYSTEM_IO_MONOIO_GETFILESTAT_1_OFFSET UNITYSDK_OFFSET(0x1D1B1E80)
#define SYSTEM_IO_MONOIO_GETFILESTAT_OFFSET UNITYSDK_OFFSET(0x1D1B1E70)
#define SYSTEM_IO_MONOIO_GETFILETYPE_1_OFFSET UNITYSDK_OFFSET(0x1D1B1C80)
#define SYSTEM_IO_MONOIO_GETFILETYPE_OFFSET UNITYSDK_OFFSET(0x1D1B1C70)
#define SYSTEM_IO_MONOIO_GETLENGTH_1_OFFSET UNITYSDK_OFFSET(0x1D1B2340)
#define SYSTEM_IO_MONOIO_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1D1B2300)
#define SYSTEM_IO_MONOIO_GET_ALTDIRECTORYSEPARATORCHAR_OFFSET UNITYSDK_OFFSET(0x1D1B2AA0)
#define SYSTEM_IO_MONOIO_GET_CONSOLEERROR_OFFSET UNITYSDK_OFFSET(0x1D1B29D0)
#define SYSTEM_IO_MONOIO_GET_CONSOLEINPUT_OFFSET UNITYSDK_OFFSET(0x1D1B29C0)
#define SYSTEM_IO_MONOIO_GET_CONSOLEOUTPUT_OFFSET UNITYSDK_OFFSET(0x1D1B29B0)
#define SYSTEM_IO_MONOIO_GET_DIRECTORYSEPARATORCHAR_OFFSET UNITYSDK_OFFSET(0x1D1B2A90)
#define SYSTEM_IO_MONOIO_GET_PATHSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1D1B2AB0)
#define SYSTEM_IO_MONOIO_GET_VOLUMESEPARATORCHAR_OFFSET UNITYSDK_OFFSET(0x1D1B2A80)
#define SYSTEM_IO_MONOIO_MOVEFILE_1_OFFSET UNITYSDK_OFFSET(0x1D1B1BC0)
#define SYSTEM_IO_MONOIO_MOVEFILE_OFFSET UNITYSDK_OFFSET(0x1D1B1BB0)
#define SYSTEM_IO_MONOIO_OPEN_1_OFFSET UNITYSDK_OFFSET(0x1D1B1EA0)
#define SYSTEM_IO_MONOIO_OPEN_OFFSET UNITYSDK_OFFSET(0x1D1B1E90)
#define SYSTEM_IO_MONOIO_READ_1_OFFSET UNITYSDK_OFFSET(0x1D1B1F50)
#define SYSTEM_IO_MONOIO_READ_OFFSET UNITYSDK_OFFSET(0x1D1B1EE0)
#define SYSTEM_IO_MONOIO_REMAPPATH_OFFSET UNITYSDK_OFFSET(0x1D1B2AC0)
#define SYSTEM_IO_MONOIO_REMOVEDIRECTORY_1_OFFSET UNITYSDK_OFFSET(0x1D1B1B90)
#define SYSTEM_IO_MONOIO_REMOVEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1D1B1B80)
#define SYSTEM_IO_MONOIO_SEEK_1_OFFSET UNITYSDK_OFFSET(0x1D1B2200)
#define SYSTEM_IO_MONOIO_SEEK_OFFSET UNITYSDK_OFFSET(0x1D1B21C0)
#define SYSTEM_IO_MONOIO_SETFILEATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1D1B1C60)
#define SYSTEM_IO_MONOIO_SETFILEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1D1B1C50)
#define SYSTEM_IO_MONOIO_SETFILETIME_1_OFFSET UNITYSDK_OFFSET(0x1D1B2670)
#define SYSTEM_IO_MONOIO_SETFILETIME_2_OFFSET UNITYSDK_OFFSET(0x1D1B27D0)
#define SYSTEM_IO_MONOIO_SETFILETIME_OFFSET UNITYSDK_OFFSET(0x1D1B2600)
#define SYSTEM_IO_MONOIO_SETLASTWRITETIME_OFFSET UNITYSDK_OFFSET(0x1D1B2790)
#define SYSTEM_IO_MONOIO_SETLENGTH_1_OFFSET UNITYSDK_OFFSET(0x1D1B24C0)
#define SYSTEM_IO_MONOIO_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1D1B2430)
#define SYSTEM_IO_MONOIO_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1D1B20C0)
#define SYSTEM_IO_MONOIO_WRITE_OFFSET UNITYSDK_OFFSET(0x1D1B2090)
#define SYSTEM_IO_MONOIO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1B2AD0)

namespace System::IO
{
	inline static constexpr unsigned int MonoIO_TypeDefinitionIndex = 684;

	class MonoIO : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_dump_handles()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoIO_TypeDefinitionIndex)->GetStaticField(0xE0);
		}
		static ::System::IntPtr* StaticGet_InvalidHandle()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(MonoIO_TypeDefinitionIndex)->GetStaticField(0xE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO__CCTOR_OFFSET))();
		}

		static ::System::Exception* GetException(::System::IO::MonoIOError error)
		{
			return ((::System::Exception*(*)(::System::IO::MonoIOError))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETEXCEPTION_OFFSET))(error);
		}

		static ::System::Exception* GetException_1(::System::String* path, ::System::IO::MonoIOError error)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::IO::MonoIOError))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETEXCEPTION_1_OFFSET))(path, error);
		}

		static ::System::Boolean CreateDirectory(::PVOID path, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_CREATEDIRECTORY_OFFSET))(path, error);
		}

		static ::System::Boolean CreateDirectory_1(::System::String* path, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_CREATEDIRECTORY_1_OFFSET))(path, error);
		}

		static ::System::Boolean RemoveDirectory(::PVOID path, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_REMOVEDIRECTORY_OFFSET))(path, error);
		}

		static ::System::Boolean RemoveDirectory_1(::System::String* path, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_REMOVEDIRECTORY_1_OFFSET))(path, error);
		}

		static ::System::String* GetCurrentDirectory(::System::IO::MonoIOError& error)
		{
			return ((::System::String*(*)(::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETCURRENTDIRECTORY_OFFSET))(error);
		}

		static ::System::Boolean MoveFile(::PVOID path, ::PVOID dest, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::PVOID, ::PVOID, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_MOVEFILE_OFFSET))(path, dest, error);
		}

		static ::System::Boolean MoveFile_1(::System::String* path, ::System::String* dest, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_MOVEFILE_1_OFFSET))(path, dest, error);
		}

		static ::System::Boolean CopyFile(::PVOID path, ::PVOID dest, ::System::Boolean overwrite, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::PVOID, ::PVOID, ::System::Boolean, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_COPYFILE_OFFSET))(path, dest, overwrite, error);
		}

		static ::System::Boolean CopyFile_1(::System::String* path, ::System::String* dest, ::System::Boolean overwrite, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_COPYFILE_1_OFFSET))(path, dest, overwrite, error);
		}

		static ::System::Boolean DeleteFile(::PVOID path, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_DELETEFILE_OFFSET))(path, error);
		}

		static ::System::Boolean DeleteFile_1(::System::String* path, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_DELETEFILE_1_OFFSET))(path, error);
		}

		static ::System::IO::FileAttributes GetFileAttributes(::PVOID path, ::System::IO::MonoIOError& error)
		{
			return ((::System::IO::FileAttributes(*)(::PVOID, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETFILEATTRIBUTES_OFFSET))(path, error);
		}

		static ::System::IO::FileAttributes GetFileAttributes_1(::System::String* path, ::System::IO::MonoIOError& error)
		{
			return ((::System::IO::FileAttributes(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETFILEATTRIBUTES_1_OFFSET))(path, error);
		}

		static ::System::Boolean SetFileAttributes(::PVOID path, ::System::IO::FileAttributes attrs, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IO::FileAttributes, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETFILEATTRIBUTES_OFFSET))(path, attrs, error);
		}

		static ::System::Boolean SetFileAttributes_1(::System::String* path, ::System::IO::FileAttributes attrs, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::FileAttributes, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETFILEATTRIBUTES_1_OFFSET))(path, attrs, error);
		}

		static ::System::IO::MonoFileType GetFileType(::System::IntPtr handle, ::System::IO::MonoIOError& error)
		{
			return ((::System::IO::MonoFileType(*)(::System::IntPtr, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETFILETYPE_OFFSET))(handle, error);
		}

		static ::System::IO::MonoFileType GetFileType_1(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::System::IO::MonoIOError& error)
		{
			return ((::System::IO::MonoFileType(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETFILETYPE_1_OFFSET))(safeHandle, error);
		}

		static ::System::IntPtr FindFirstFile(::PVOID pathWithPattern, ::System::String*& fileName, ::System::Int32& fileAttr, ::System::Int32& error)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::String*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_FINDFIRSTFILE_OFFSET))(pathWithPattern, fileName, fileAttr, error);
		}

		static ::System::IntPtr FindFirstFile_1(::System::String* pathWithPattern, ::System::String*& fileName, ::System::Int32& fileAttr, ::System::Int32& error)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::String*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_FINDFIRSTFILE_1_OFFSET))(pathWithPattern, fileName, fileAttr, error);
		}

		static ::System::Boolean FindNextFile(::System::IntPtr hnd, ::System::String*& fileName, ::System::Int32& fileAttr, ::System::Int32& error)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_FINDNEXTFILE_OFFSET))(hnd, fileName, fileAttr, error);
		}

		static ::System::Boolean FindCloseFile(::System::IntPtr hnd)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_FINDCLOSEFILE_OFFSET))(hnd);
		}

		static ::System::Boolean Exists(::System::String* path, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_EXISTS_OFFSET))(path, error);
		}

		static ::System::Boolean ExistsFile(::System::String* path, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_EXISTSFILE_OFFSET))(path, error);
		}

		static ::System::Boolean ExistsDirectory(::System::String* path, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_EXISTSDIRECTORY_OFFSET))(path, error);
		}

		static ::System::Boolean ExistsSymlink(::System::String* path, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_EXISTSSYMLINK_OFFSET))(path, error);
		}

		static ::System::Boolean GetFileStat(::PVOID path, ::System::IO::MonoIOStat& stat, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IO::MonoIOStat&, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETFILESTAT_OFFSET))(path, stat, error);
		}

		static ::System::Boolean GetFileStat_1(::System::String* path, ::System::IO::MonoIOStat& stat, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOStat&, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETFILESTAT_1_OFFSET))(path, stat, error);
		}

		static ::System::IntPtr Open(::PVOID filename, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, ::System::IO::FileOptions options, ::System::IO::MonoIOError& error)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::IO::FileOptions, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_OPEN_OFFSET))(filename, mode, access, share, options, error);
		}

		static ::System::IntPtr Open_1(::System::String* filename, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, ::System::IO::FileOptions options, ::System::IO::MonoIOError& error)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::IO::FileOptions, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_OPEN_1_OFFSET))(filename, mode, access, share, options, error);
		}

		static ::System::Boolean Close(::System::IntPtr handle, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_CLOSE_OFFSET))(handle, error);
		}

		static ::System::Int32 Read(::System::IntPtr handle, ::Il2CppArray<::System::Byte>* dest, ::System::Int32 dest_offset, ::System::Int32 count, ::System::IO::MonoIOError& error)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_READ_OFFSET))(handle, dest, dest_offset, count, error);
		}

		static ::System::Int32 Read_1(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::Il2CppArray<::System::Byte>* dest, ::System::Int32 dest_offset, ::System::Int32 count, ::System::IO::MonoIOError& error)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::SafeHandle*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_READ_1_OFFSET))(safeHandle, dest, dest_offset, count, error);
		}

		static ::System::Int32 Write(::System::IntPtr handle, ::Il2CppArray<::System::Byte>* src, ::System::Int32 src_offset, ::System::Int32 count, ::System::IO::MonoIOError& error)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_WRITE_OFFSET))(handle, src, src_offset, count, error);
		}

		static ::System::Int32 Write_1(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::Il2CppArray<::System::Byte>* src, ::System::Int32 src_offset, ::System::Int32 count, ::System::IO::MonoIOError& error)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::SafeHandle*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_WRITE_1_OFFSET))(safeHandle, src, src_offset, count, error);
		}

		static ::System::Int64 Seek(::System::IntPtr handle, ::System::Int64 offset, ::System::IO::SeekOrigin origin, ::System::IO::MonoIOError& error)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::Int64, ::System::IO::SeekOrigin, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SEEK_OFFSET))(handle, offset, origin, error);
		}

		static ::System::Int64 Seek_1(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::System::Int64 offset, ::System::IO::SeekOrigin origin, ::System::IO::MonoIOError& error)
		{
			return ((::System::Int64(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::Int64, ::System::IO::SeekOrigin, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SEEK_1_OFFSET))(safeHandle, offset, origin, error);
		}

		static ::System::Int64 GetLength(::System::IntPtr handle, ::System::IO::MonoIOError& error)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETLENGTH_OFFSET))(handle, error);
		}

		static ::System::Int64 GetLength_1(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::System::IO::MonoIOError& error)
		{
			return ((::System::Int64(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETLENGTH_1_OFFSET))(safeHandle, error);
		}

		static ::System::Boolean SetLength(::System::IntPtr handle, ::System::Int64 length, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int64, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETLENGTH_OFFSET))(handle, length, error);
		}

		static ::System::Boolean SetLength_1(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::System::Int64 length, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::Int64, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETLENGTH_1_OFFSET))(safeHandle, length, error);
		}

		static ::System::Boolean SetFileTime(::System::IntPtr handle, ::System::Int64 creation_time, ::System::Int64 last_access_time, ::System::Int64 last_write_time, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int64, ::System::Int64, ::System::Int64, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETFILETIME_OFFSET))(handle, creation_time, last_access_time, last_write_time, error);
		}

		static ::System::Boolean SetFileTime_1(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::System::Int64 creation_time, ::System::Int64 last_access_time, ::System::Int64 last_write_time, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETFILETIME_1_OFFSET))(safeHandle, creation_time, last_access_time, last_write_time, error);
		}

		static ::System::Boolean SetLastWriteTime(::System::String* path, ::System::DateTime dateTime, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::DateTime, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETLASTWRITETIME_OFFSET))(path, dateTime, error);
		}

		static ::System::Boolean SetFileTime_2(::System::String* path, ::System::Int32 type, ::System::Int64 creation_time, ::System::Int64 last_access_time, ::System::Int64 last_write_time, ::System::DateTime dateTime, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int64, ::System::Int64, ::System::Int64, ::System::DateTime, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETFILETIME_2_OFFSET))(path, type, creation_time, last_access_time, last_write_time, dateTime, error);
		}

		static ::System::IntPtr get_ConsoleOutput()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GET_CONSOLEOUTPUT_OFFSET))();
		}

		static ::System::IntPtr get_ConsoleInput()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GET_CONSOLEINPUT_OFFSET))();
		}

		static ::System::IntPtr get_ConsoleError()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GET_CONSOLEERROR_OFFSET))();
		}

		static ::System::Boolean CreatePipe(::System::IntPtr& read_handle, ::System::IntPtr& write_handle, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::IntPtr&, ::System::IntPtr&, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_CREATEPIPE_OFFSET))(read_handle, write_handle, error);
		}

		static ::System::Boolean DuplicateHandle(::System::IntPtr source_process_handle, ::System::IntPtr source_handle, ::System::IntPtr target_process_handle, ::System::IntPtr& target_handle, ::System::Int32 access, ::System::Int32 inherit, ::System::Int32 options, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr&, ::System::Int32, ::System::Int32, ::System::Int32, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_DUPLICATEHANDLE_OFFSET))(source_process_handle, source_handle, target_process_handle, target_handle, access, inherit, options, error);
		}

		static ::System::Char get_VolumeSeparatorChar()
		{
			return ((::System::Char(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GET_VOLUMESEPARATORCHAR_OFFSET))();
		}

		static ::System::Char get_DirectorySeparatorChar()
		{
			return ((::System::Char(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GET_DIRECTORYSEPARATORCHAR_OFFSET))();
		}

		static ::System::Char get_AltDirectorySeparatorChar()
		{
			return ((::System::Char(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GET_ALTDIRECTORYSEPARATORCHAR_OFFSET))();
		}

		static ::System::Char get_PathSeparator()
		{
			return ((::System::Char(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GET_PATHSEPARATOR_OFFSET))();
		}

		static ::System::Void DumpHandles()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_DUMPHANDLES_OFFSET))();
		}

		static ::System::Boolean RemapPath(::System::String* path, ::System::String*& newPath)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_REMAPPATH_OFFSET))(path, newPath);
		}
	};
}
