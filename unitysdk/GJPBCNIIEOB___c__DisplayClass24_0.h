#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAHPNAEGACM;
class GJPBCNIIEOB;

#define GJPBCNIIEOB___C__DISPLAYCLASS24_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15A80DD0)
#define GJPBCNIIEOB___C__DISPLAYCLASS24_0__ONDETAILCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0x15A82240)

	class GJPBCNIIEOB___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::GAHPNAEGACM* detail; // 0x10
		::GJPBCNIIEOB* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPBCNIIEOB___C__DISPLAYCLASS24_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnDetailChange_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPBCNIIEOB___C__DISPLAYCLASS24_0__ONDETAILCHANGE_B__0_OFFSET))(this);
		}

	};
