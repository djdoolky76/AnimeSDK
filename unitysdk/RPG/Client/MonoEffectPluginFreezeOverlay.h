#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"

#define RPG_CLIENT_MONOEFFECTPLUGINFREEZEOVERLAY_CTOR_OFFSET UNITYSDK_OFFSET(0xD8000B0)
#define RPG_CLIENT_MONOEFFECTPLUGINFREEZEOVERLAY_IFOEAAAKONL_OFFSET UNITYSDK_OFFSET(0xD7FFEC0)

namespace RPG::Client
{
	class MonoEffectPluginFreezeOverlay : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		::System::Boolean FollowScale; // 0x220
		::System::Byte _padding0[0x3];
		::System::Single KABMCJNCNFE; // 0x224
		::System::Single DJOJMMKJGIJ; // 0x228
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFREEZEOVERLAY_CTOR_OFFSET))(this);
		}

		::System::Void IFOEAAAKONL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFREEZEOVERLAY_IFOEAAAKONL_OFFSET))(this);
		}

	};
}
