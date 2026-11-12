#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGrowthGuideItem.h"
class DBNNKHADPJG;

#define RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xD14A810)
#define RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM_GOACQUIRE_OFFSET UNITYSDK_OFFSET(0xD14A620)
#define RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM_HASACQUIRECOMMAND_OFFSET UNITYSDK_OFFSET(0xD14A7C0)
#define RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM_SETACQUIRECOMMAND_OFFSET UNITYSDK_OFFSET(0xD14A770)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseLightConeRecommendGuideItem_TypeDefinitionIndex = 67465;

	class BaseLightConeRecommendGuideItem : public ::RPG::Client::BaseGrowthGuideItem
	{
	public:
		::DBNNKHADPJG* _AcquireCommand; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM_CTOR_OFFSET))(this);
		}

		::System::Void GoAcquire()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM_GOACQUIRE_OFFSET))(this);
		}

		::System::Void SetAcquireCommand(::DBNNKHADPJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBNNKHADPJG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM_SETACQUIRECOMMAND_OFFSET))(this, a1);
		}

		::System::Boolean HasAcquireCommand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM_HASACQUIRECOMMAND_OFFSET))(this);
		}

	};
}
