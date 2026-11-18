#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS31_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16262360)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS31_1__REFRESHLEVELPERFORMCAMERA_B__4_OFFSET UNITYSDK_OFFSET(0x16262370)

namespace MoleMole
{
	inline static constexpr unsigned int LevelPerformCameraSubSystem___c__DisplayClass31_1_TypeDefinitionIndex = 64202;

	template <typename T>
	class LevelPerformCameraSubSystem___c__DisplayClass31_1 : public ::System::Object
	{
	public:
		::System::Single finalYaw; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS31_1__CTOR_OFFSET))(this);
		}

		::System::Single _RefreshLevelPerformCamera_b__4()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS31_1__REFRESHLEVELPERFORMCAMERA_B__4_OFFSET))(this);
		}
	};
}
