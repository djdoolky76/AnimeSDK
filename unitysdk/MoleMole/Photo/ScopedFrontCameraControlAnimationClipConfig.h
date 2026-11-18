#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLANIMATIONCLIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14BC02B0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int ScopedFrontCameraControlAnimationClipConfig_TypeDefinitionIndex = 81388;

	class ScopedFrontCameraControlAnimationClipConfig
	{
	public:
		::System::Single blendIn; // 0x28
		::System::Single blendOut; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLANIMATIONCLIPCONFIG__CTOR_OFFSET))(this);
		}
	};
}
