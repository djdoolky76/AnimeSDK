#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAHPNAEGACM;
class GBANCICKCLK;

#define GBANCICKCLK___C__DISPLAYCLASS19_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15946720)
#define GBANCICKCLK___C__DISPLAYCLASS19_0__ONDETAILCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0x15947440)

	class GBANCICKCLK___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::GBANCICKCLK* __4__this; // 0x10
		::GAHPNAEGACM* detail; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBANCICKCLK___C__DISPLAYCLASS19_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnDetailChange_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBANCICKCLK___C__DISPLAYCLASS19_0__ONDETAILCHANGE_B__0_OFFSET))(this);
		}

	};
