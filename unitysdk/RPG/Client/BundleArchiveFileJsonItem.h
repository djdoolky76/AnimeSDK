#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BundleArchiveFileJsonItem; }
namespace System { class String; }

#define RPG_CLIENT_BUNDLEARCHIVEFILEJSONITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xC8CB980)
#define RPG_CLIENT_BUNDLEARCHIVEFILEJSONITEM_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0xC8CB8D0)

namespace RPG::Client
{
	class BundleArchiveFileJsonItem : public ::System::Object
	{
	public:
		::System::UInt32 MajorVersion; // 0x10
		::System::UInt32 MinorVersion; // 0x14
		::System::UInt32 PatchVersion; // 0x18
		::System::UInt32 PrevPatch; // 0x1C
		::System::String* ContentHash; // 0x20
		::System::Int64 FileSize; // 0x28
		::System::Int64 TimeStamp; // 0x30
		::System::String* FileName; // 0x38
		::System::String* BaseAssetsDownloadUrl; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUNDLEARCHIVEFILEJSONITEM_CTOR_OFFSET))(this);
		}

		::RPG::Client::BundleArchiveFileJsonItem* NBHCPBBGAKA()
		{
			return ((::RPG::Client::BundleArchiveFileJsonItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUNDLEARCHIVEFILEJSONITEM_NBHCPBBGAKA_OFFSET))(this);
		}

	};
}
