#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAMIOFOKCEB.h"
#include "unitysdk/System/Object.h"

#define PMPJHCAAAAD___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1849E470)
#define PMPJHCAAAAD___C__DISPLAYCLASS1_0__PLAYPENDING_B__0_OFFSET UNITYSDK_OFFSET(0x1849E500)

inline static constexpr unsigned int PMPJHCAAAAD___c__DisplayClass1_0_TypeDefinitionIndex = 77124;

	class PMPJHCAAAAD___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::BAMIOFOKCEB cycleId; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPJHCAAAAD___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayPending_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPJHCAAAAD___C__DISPLAYCLASS1_0__PLAYPENDING_B__0_OFFSET))(this);
		}

	};
