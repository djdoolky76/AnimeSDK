#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTMAINCITYNPCENDINTERACTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x18B834E0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTMAINCITYNPCENDINTERACTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x18B83560)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventMainCityNpcEndInteractEntry_TypeDefinitionIndex = 62451;

	class AnimatorEventMainCityNpcEndInteractEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTMAINCITYNPCENDINTERACTENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTMAINCITYNPCENDINTERACTENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
