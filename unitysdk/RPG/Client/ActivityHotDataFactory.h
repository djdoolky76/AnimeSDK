#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivityHotVersionType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityVersionHotMergedData; }
namespace RPG::Client { class IActivityHotData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHOTDATAFACTORY_CREATEACTIVITYHOTDATA_OFFSET UNITYSDK_OFFSET(0x1D124D40)
#define RPG_CLIENT_ACTIVITYHOTDATAFACTORY_CREATEACTIVITYVERSIONHOTDATA_OFFSET UNITYSDK_OFFSET(0x1D124E90)
#define RPG_CLIENT_ACTIVITYHOTDATAFACTORY_CREATEACTIVITYVERSIONHOTMERGEDDATA_OFFSET UNITYSDK_OFFSET(0x1D1250B0)
#define RPG_CLIENT_ACTIVITYHOTDATAFACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1255A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHotDataFactory_TypeDefinitionIndex = 62919;

	class ActivityHotDataFactory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATAFACTORY_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::IActivityHotData* CreateActivityHotData(::System::UInt32 a1)
		{
			return ((::RPG::Client::IActivityHotData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATAFACTORY_CREATEACTIVITYHOTDATA_OFFSET))(a1);
		}

		static ::RPG::Client::IActivityHotData* CreateActivityVersionHotData(::System::UInt32 a1)
		{
			return ((::RPG::Client::IActivityHotData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATAFACTORY_CREATEACTIVITYVERSIONHOTDATA_OFFSET))(a1);
		}

		static ::RPG::Client::ActivityVersionHotMergedData* CreateActivityVersionHotMergedData(::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>* a1, ::RPG::GameCore::ActivityHotVersionType a2)
		{
			return ((::RPG::Client::ActivityVersionHotMergedData*(*)(::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>*, ::RPG::GameCore::ActivityHotVersionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATAFACTORY_CREATEACTIVITYVERSIONHOTMERGEDDATA_OFFSET))(a1, a2);
		}

	};
}
