#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_DOWNLOADUTIL_CHANGEFILEREADONLYACCESS_OFFSET UNITYSDK_OFFSET(0x1F4D8590)
#define FOUNDATION_DOWNLOADUTIL_CHANGEREADONLYANDDELETEIFEXIST_OFFSET UNITYSDK_OFFSET(0x1F4D8460)
#define FOUNDATION_DOWNLOADUTIL_CHECKCLEARRESINPERSISTDIR_OFFSET UNITYSDK_OFFSET(0x1F4D7850)
#define FOUNDATION_DOWNLOADUTIL_CHECKUNSAVEDNEWRES_1_OFFSET UNITYSDK_OFFSET(0x1F4D7BB0)
#define FOUNDATION_DOWNLOADUTIL_CHECKUNSAVEDNEWRES_OFFSET UNITYSDK_OFFSET(0x1F4D7900)
#define FOUNDATION_DOWNLOADUTIL_CHECKUNZIPPEDNEWRES_OFFSET UNITYSDK_OFFSET(0x1F4D80A0)
#define FOUNDATION_DOWNLOADUTIL_CLEARDOWNLOADTEMPFILE_OFFSET UNITYSDK_OFFSET(0x1F4D78C0)
#define FOUNDATION_DOWNLOADUTIL_GETDISPLAYSIZEB_OFFSET UNITYSDK_OFFSET(0x1F4D77A0)
#define FOUNDATION_DOWNLOADUTIL_GETDISPLAYSIZEKB_OFFSET UNITYSDK_OFFSET(0x1F4D76E0)
#define FOUNDATION_DOWNLOADUTIL_GETDISPLAYSIZEMB_OFFSET UNITYSDK_OFFSET(0x1F4D7620)
#define FOUNDATION_DOWNLOADUTIL_GETDISPLAYSIZE_OFFSET UNITYSDK_OFFSET(0x1F4D75B0)
#define FOUNDATION_DOWNLOADUTIL_GETDISPLAYSPEED_OFFSET UNITYSDK_OFFSET(0x1F4D7480)

namespace Foundation
{
	inline static constexpr unsigned int DownloadUtil_TypeDefinitionIndex = 8512;

	class DownloadUtil : public ::System::Object
	{
	public:
		// static const ::System::Single BYTES_2_MB; // 0x0

		static ::System::String* GetDisplaySpeed(::System::Single downloadSpeed)
		{
			return ((::System::String*(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADUTIL_GETDISPLAYSPEED_OFFSET))(downloadSpeed);
		}

		static ::System::String* GetDisplaySize(::System::Int64 downloadSize)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADUTIL_GETDISPLAYSIZE_OFFSET))(downloadSize);
		}

		static ::System::String* GetDisplaySizeMB(::System::Int64 downloadSize)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADUTIL_GETDISPLAYSIZEMB_OFFSET))(downloadSize);
		}

		static ::System::String* GetDisplaySizeKB(::System::Int64 downloadSize)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADUTIL_GETDISPLAYSIZEKB_OFFSET))(downloadSize);
		}

		static ::System::String* GetDisplaySizeB(::System::Int64 downloadSize)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADUTIL_GETDISPLAYSIZEB_OFFSET))(downloadSize);
		}

		static ::System::Void CheckClearResInPersistDir()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADUTIL_CHECKCLEARRESINPERSISTDIR_OFFSET))();
		}

		static ::System::Void ClearDownloadTempFile()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADUTIL_CLEARDOWNLOADTEMPFILE_OFFSET))();
		}

		static ::System::Void CheckUnsavedNewRes()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADUTIL_CHECKUNSAVEDNEWRES_OFFSET))();
		}

		static ::System::Void CheckUnsavedNewRes_1(::System::String* dirPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADUTIL_CHECKUNSAVEDNEWRES_1_OFFSET))(dirPath);
		}

		static ::System::Void CheckUnzippedNewRes(::System::String* dirPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADUTIL_CHECKUNZIPPEDNEWRES_OFFSET))(dirPath);
		}

		static ::System::Boolean ChangeReadOnlyAndDeleteIfExist(::System::String* filePath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADUTIL_CHANGEREADONLYANDDELETEIFEXIST_OFFSET))(filePath);
		}

		static ::System::Void ChangeFileReadOnlyAccess(::System::String* filePath, ::System::Boolean isReadOnly)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADUTIL_CHANGEFILEREADONLYACCESS_OFFSET))(filePath, isReadOnly);
		}
	};
}
