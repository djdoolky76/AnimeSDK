#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAGPPDDBBIM;
class FBEOIDJHJMG;
class LPHINGPIEAJ;

#define FBEOIDJHJMG___C__DISPLAYCLASS16_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA46C80)
#define FBEOIDJHJMG___C__DISPLAYCLASS16_0__TRYBUILDPLAN_B__0_OFFSET UNITYSDK_OFFSET(0x1BA46F80)

inline static constexpr unsigned int FBEOIDJHJMG___c__DisplayClass16_0_TypeDefinitionIndex = 80064;

	class FBEOIDJHJMG___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::FBEOIDJHJMG* __4__this; // 0x10
		::EAGPPDDBBIM* selection; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEOIDJHJMG___C__DISPLAYCLASS16_0_CTOR_OFFSET))(this);
		}

		::LPHINGPIEAJ* _TryBuildPlan_b__0()
		{
			return ((::LPHINGPIEAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEOIDJHJMG___C__DISPLAYCLASS16_0__TRYBUILDPLAN_B__0_OFFSET))(this);
		}

	};
