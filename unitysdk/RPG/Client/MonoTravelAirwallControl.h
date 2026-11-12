#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoDroneAirwallControl.h"

#define RPG_CLIENT_MONOTRAVELAIRWALLCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE2C20A0)
#define RPG_CLIENT_MONOTRAVELAIRWALLCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xE2C1FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTravelAirwallControl_TypeDefinitionIndex = 70567;

	class MonoTravelAirwallControl : public ::RPG::Client::MonoDroneAirwallControl
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELAIRWALLCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELAIRWALLCONTROL_UPDATE_OFFSET))(this);
		}

	};
}
