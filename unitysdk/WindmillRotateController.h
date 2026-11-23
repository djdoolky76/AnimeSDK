#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/WindmillRotateController_B95423B90E3A5449.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define WINDMILLROTATECONTROLLER_AD970635A668CF89_OFFSET UNITYSDK_OFFSET(0x1925A40)
#define WINDMILLROTATECONTROLLER_B19B589331A23DD0_OFFSET UNITYSDK_OFFSET(0x2880CB0)
#define WINDMILLROTATECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x2880C60)

inline static constexpr unsigned int WindmillRotateController_TypeDefinitionIndex = 16092;

class WindmillRotateController
{
public:
	::System::Boolean A9DFDCA2E45F66C0; // 0x28
	::System::Byte _padding0[0x3];
	::WindmillRotateController_B95423B90E3A5449 RotationAxis; // 0x2C
	::System::Single RotationSpeed; // 0x30

	::System::Boolean AD970635A668CF89()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WINDMILLROTATECONTROLLER_AD970635A668CF89_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WINDMILLROTATECONTROLLER__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 B19B589331A23DD0()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + WINDMILLROTATECONTROLLER_B19B589331A23DD0_OFFSET))(this);
	}
};
