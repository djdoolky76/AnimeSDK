#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityVersionHotData.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class VersionBannerData; }
namespace RPG::GameCore { class ActivityHotVersionStatRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYVERSIONHOTMAINLINEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCF20B00)
#define RPG_CLIENT_ACTIVITYVERSIONHOTMAINLINEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCF20C20)
#define RPG_CLIENT_ACTIVITYVERSIONHOTMAINLINEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCF20B10)
#define RPG_CLIENT_ACTIVITYVERSIONHOTMAINLINEDATA_GET_TAGDESC_OFFSET UNITYSDK_OFFSET(0xCF20D00)
#define RPG_CLIENT_ACTIVITYVERSIONHOTMAINLINEDATA_GET_VERSIONBANNERDATA_OFFSET UNITYSDK_OFFSET(0xCF20DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityVersionHotMainlineData_TypeDefinitionIndex = 62928;

	class ActivityVersionHotMainlineData : public ::RPG::Client::ActivityVersionHotData
	{
	public:
		::RPG::Client::VersionBannerData* _VersionBannerData; // 0x28
		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::ActivityHotVersionStatRow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivityHotVersionStatRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTMAINLINEDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTMAINLINEDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTMAINLINEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_TagDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTMAINLINEDATA_GET_TAGDESC_OFFSET))(this);
		}

		::RPG::Client::VersionBannerData* get_VersionBannerData()
		{
			return ((::RPG::Client::VersionBannerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTMAINLINEDATA_GET_VERSIONBANNERDATA_OFFSET))(this);
		}

	};
}
