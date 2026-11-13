#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"
namespace RPG::Client::ActivityRealityShow { class RealityShowActivityPanelViewModel; }

#define RPG_CLIENT_REALITYSHOWACTIVITYPANELDATA_CREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1D06F7F0)
#define RPG_CLIENT_REALITYSHOWACTIVITYPANELDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D06F7E0)
#define RPG_CLIENT_REALITYSHOWACTIVITYPANELDATA_ISSHOWDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0x1D06F9B0)
#define RPG_CLIENT_REALITYSHOWACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1D06F8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RealityShowActivityPanelData_TypeDefinitionIndex = 63059;

	class RealityShowActivityPanelData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_REALITYSHOWACTIVITYPANELDATA_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityRealityShow::RealityShowActivityPanelViewModel* CreateViewModel()
		{
			return ((::RPG::Client::ActivityRealityShow::RealityShowActivityPanelViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REALITYSHOWACTIVITYPANELDATA_CREATEVIEWMODEL_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REALITYSHOWACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowDailyRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REALITYSHOWACTIVITYPANELDATA_ISSHOWDAILYREDDOT_OFFSET))(this);
		}

	};
}
