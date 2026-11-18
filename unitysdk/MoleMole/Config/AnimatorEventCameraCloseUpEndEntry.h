#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTCAMERACLOSEUPENDENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x121A3C10)
#define MOLEMOLE_CONFIG_ANIMATOREVENTCAMERACLOSEUPENDENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x121A3C90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventCameraCloseUpEndEntry_TypeDefinitionIndex = 57164;

	class AnimatorEventCameraCloseUpEndEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* CloseUpKey; // 0x58
		::System::String* OverrideBlendCurve; // 0x60
		::System::Boolean OverrideBlendSetting; // 0x68
		::System::Byte _padding0[0x3];
		::System::Single OverrideBlendDuration; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCAMERACLOSEUPENDENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCAMERACLOSEUPENDENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
