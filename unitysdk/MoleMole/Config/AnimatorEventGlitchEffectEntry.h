#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTGLITCHEFFECTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1BA1AF90)
#define MOLEMOLE_CONFIG_ANIMATOREVENTGLITCHEFFECTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1B010)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventGlitchEffectEntry_TypeDefinitionIndex = 70362;

	class AnimatorEventGlitchEffectEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* GlitchEffectKey; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTGLITCHEFFECTENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTGLITCHEFFECTENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
