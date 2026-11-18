#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/Baker_ClipSettings_BasedUponRotation.h"
#include "unitysdk/RootMotion/Baker_ClipSettings_BasedUponXZ.h"
#include "unitysdk/RootMotion/Baker_ClipSettings_BasedUponY.h"
#include "unitysdk/System/Object.h"

#define ROOTMOTION_BAKER_CLIPSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC9D220)

namespace RootMotion
{
	inline static constexpr unsigned int Baker_ClipSettings_TypeDefinitionIndex = 36917;

	class Baker_ClipSettings : public ::System::Object
	{
	public:
		::System::Boolean loopTime; // 0x10
		::System::Boolean loopBlend; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single cycleOffset; // 0x14
		::System::Boolean loopBlendOrientation; // 0x18
		::System::Byte _padding1[0x3];
		::RootMotion::Baker_ClipSettings_BasedUponRotation basedUponRotation; // 0x1C
		::System::Single orientationOffsetY; // 0x20
		::System::Boolean loopBlendPositionY; // 0x24
		::System::Byte _padding2[0x3];
		::RootMotion::Baker_ClipSettings_BasedUponY basedUponY; // 0x28
		::System::Single level; // 0x2C
		::System::Boolean loopBlendPositionXZ; // 0x30
		::System::Byte _padding3[0x3];
		::RootMotion::Baker_ClipSettings_BasedUponXZ basedUponXZ; // 0x34
		::System::Boolean mirror; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKER_CLIPSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
