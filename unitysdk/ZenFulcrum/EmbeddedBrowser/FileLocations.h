#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace ZenFulcrum::EmbeddedBrowser { class FileLocations_CEFDirs; }

#define ZENFULCRUM_EMBEDDEDBROWSER_FILELOCATIONS_GETCEFDIRS_OFFSET UNITYSDK_OFFSET(0x1F65E110)
#define ZENFULCRUM_EMBEDDEDBROWSER_FILELOCATIONS_GET_DIRS_OFFSET UNITYSDK_OFFSET(0x1F637940)

namespace ZenFulcrum::EmbeddedBrowser
{
	class FileLocations : public ::System::Object
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::FileLocations_CEFDirs** StaticGet__dirs()
		{
			return (::ZenFulcrum::EmbeddedBrowser::FileLocations_CEFDirs**)UnitySDK::FromName("ZenFulcrum.EmbeddedBrowser", "FileLocations")->GetStaticField(0x529F0);
		}

		// static const ::System::String* SlaveExecutable; // 0x0
		static ::ZenFulcrum::EmbeddedBrowser::FileLocations_CEFDirs* get_Dirs()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::FileLocations_CEFDirs*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FILELOCATIONS_GET_DIRS_OFFSET))();
		}

		static ::ZenFulcrum::EmbeddedBrowser::FileLocations_CEFDirs* GetCEFDirs()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::FileLocations_CEFDirs*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FILELOCATIONS_GETCEFDIRS_OFFSET))();
		}

	};
}
