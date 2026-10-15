#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraFightStateCommonConfig.h"
namespace RPG::Client { class CameraFightStateOrbitCruiseConfigData; }

#define RPG_CLIENT_CAMERAFIGHTSTATEORBITCRUISECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xC936710)

namespace RPG::Client
{
	class CameraFightStateOrbitCruiseConfig : public ::RPG::Client::CameraFightStateCommonConfig
	{
	public:
		::RPG::Client::CameraFightStateOrbitCruiseConfigData* ConfigData; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFIGHTSTATEORBITCRUISECONFIG_CTOR_OFFSET))(this);
		}

	};
}
