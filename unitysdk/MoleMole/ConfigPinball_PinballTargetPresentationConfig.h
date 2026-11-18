#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGPINBALL_PINBALLTARGETPRESENTATIONCONFIG_SHOWSTARGETPRESENTATION_OFFSET UNITYSDK_OFFSET(0x1A05C9B0)
#define MOLEMOLE_CONFIGPINBALL_PINBALLTARGETPRESENTATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05BBD0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigPinball_PinballTargetPresentationConfig_TypeDefinitionIndex = 92186;

	class ConfigPinball_PinballTargetPresentationConfig : public ::System::Object
	{
	public:
		::System::Boolean PresentationEnabled; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single HitRotateAngle; // 0x14
		::System::Single HitRotateDuration; // 0x18
		::System::Byte _padding1[0x4];
		::System::String* HitRotateCurveKey; // 0x20
		::System::Single DeathMoveDistance; // 0x28
		::System::Single DeathMoveHeight; // 0x2C
		::System::Single DeathDuration; // 0x30
		::System::Single DeathSpinRounds; // 0x34
		::System::String* DeathCurveKey; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_PINBALLTARGETPRESENTATIONCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean ShowsTargetPresentation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_PINBALLTARGETPRESENTATIONCONFIG_SHOWSTARGETPRESENTATION_OFFSET))(this);
		}
	};
}
