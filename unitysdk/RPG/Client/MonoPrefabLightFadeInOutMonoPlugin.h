#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_MONOPREFABLIGHTFADEINOUTMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D26EAC0)
#define RPG_CLIENT_MONOPREFABLIGHTFADEINOUTMONOPLUGIN_ISFORBIDFASTFADING_OFFSET UNITYSDK_OFFSET(0x1D26EA80)
#define RPG_CLIENT_MONOPREFABLIGHTFADEINOUTMONOPLUGIN_SETFADEINOUTINTENSITY_OFFSET UNITYSDK_OFFSET(0x1D26E9E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPrefabLightFadeInOutMonoPlugin_TypeDefinitionIndex = 72904;

	class MonoPrefabLightFadeInOutMonoPlugin
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPREFABLIGHTFADEINOUTMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::Void SetFadeInOutIntensity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPREFABLIGHTFADEINOUTMONOPLUGIN_SETFADEINOUTINTENSITY_OFFSET))(this, a1);
		}

		::System::Boolean IsForbidFastFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPREFABLIGHTFADEINOUTMONOPLUGIN_ISFORBIDFASTFADING_OFFSET))(this);
		}

	};
}
