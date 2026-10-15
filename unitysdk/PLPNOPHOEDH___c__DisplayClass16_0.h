#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJLIOMPMHHI;
class HGCEOEHGPPE;
class PLPNOPHOEDH;

#define PLPNOPHOEDH___C__DISPLAYCLASS16_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC30FFF0)
#define PLPNOPHOEDH___C__DISPLAYCLASS16_0___STARTUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xC310AA0)
#define PLPNOPHOEDH___C__DISPLAYCLASS16_0___STARTUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0xC310AC0)

	class PLPNOPHOEDH___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::PLPNOPHOEDH* __4__this; // 0x10
		::EJLIOMPMHHI* queue; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPNOPHOEDH___C__DISPLAYCLASS16_0_CTOR_OFFSET))(this);
		}

		::System::Void __StartUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPNOPHOEDH___C__DISPLAYCLASS16_0___STARTUPDATE_B__0_OFFSET))(this);
		}

		::System::Void __StartUpdate_b__1(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + PLPNOPHOEDH___C__DISPLAYCLASS16_0___STARTUPDATE_B__1_OFFSET))(this, a1);
		}

	};
