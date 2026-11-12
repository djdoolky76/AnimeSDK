#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_AVATARENHANCEACTIVITYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD030230)
#define RPG_CLIENT_AVATARENHANCEACTIVITYDATA_GETSEASONID_OFFSET UNITYSDK_OFFSET(0xD0303C0)
#define RPG_CLIENT_AVATARENHANCEACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xD030240)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarEnhanceActivityData_TypeDefinitionIndex = 62989;

	class AvatarEnhanceActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEACTIVITYDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::UInt32 GetSeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEACTIVITYDATA_GETSEASONID_OFFSET))(this);
		}

	};
}
