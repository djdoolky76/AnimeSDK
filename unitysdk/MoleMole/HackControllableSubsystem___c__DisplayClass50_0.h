#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE8D80)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS50_0__ENTERCONTROLLABLECAMERA_B__1_OFFSET UNITYSDK_OFFSET(0x13EE8D90)

namespace MoleMole
{
	inline static constexpr unsigned int HackControllableSubsystem___c__DisplayClass50_0_TypeDefinitionIndex = 41054;

	class HackControllableSubsystem___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::System::Single initPitch; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Single _EnterControllableCamera_b__1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS50_0__ENTERCONTROLLABLECAMERA_B__1_OFFSET))(this);
		}
	};
}
