#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIEDDEJLAOD;
class GAHPNAEGACM;

#define DIEDDEJLAOD___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0xEBF1CE0)
#define DIEDDEJLAOD___C__DISPLAYCLASS13_0__ONDETAILCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0xEBF2770)

	class DIEDDEJLAOD___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::GAHPNAEGACM* detail; // 0x10
		::DIEDDEJLAOD* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEDDEJLAOD___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnDetailChange_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEDDEJLAOD___C__DISPLAYCLASS13_0__ONDETAILCHANGE_B__0_OFFSET))(this);
		}

	};
