#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityVersionHotData.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::GameCore { class ActivityHotVersionStatRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYVERSIONHOTTRIALDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x18D124F0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTTRIALDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x18D126C0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTTRIALDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18D12500)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityVersionHotTrialData_TypeDefinitionIndex = 62930;

	class ActivityVersionHotTrialData : public ::RPG::Client::ActivityVersionHotData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::ActivityHotVersionStatRow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivityHotVersionStatRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTTRIALDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTTRIALDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTTRIALDATA_GET_ICONPATH_OFFSET))(this);
		}

	};
}
