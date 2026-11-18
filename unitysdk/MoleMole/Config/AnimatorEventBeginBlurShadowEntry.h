#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTBEGINBLURSHADOWENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1908C250)
#define MOLEMOLE_CONFIG_ANIMATOREVENTBEGINBLURSHADOWENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1908C2E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventBeginBlurShadowEntry_TypeDefinitionIndex = 54392;

	class AnimatorEventBeginBlurShadowEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* ConfigGhostEffectKey; // 0x58
		::System::String* Tag; // 0x60
		::System::Single LifeTime; // 0x68
		::System::Single EchoTime; // 0x6C
		::System::Boolean IgnoreOwnerTimescale; // 0x70
		::System::Boolean IgnoreWorldTimescale; // 0x71
		::System::Boolean NeedAlwaysHandleVisibilityState; // 0x72
		::System::Boolean HidePartsByEntity; // 0x73
		::System::UInt32 MaxGhostCount; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBEGINBLURSHADOWENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBEGINBLURSHADOWENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
