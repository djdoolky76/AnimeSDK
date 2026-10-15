#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDADEGMMPPD;

#define KPEKFHGKGFN___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB5B60D0)
#define KPEKFHGKGFN___C__DISPLAYCLASS4_0__GETSPONSOR_B__0_OFFSET UNITYSDK_OFFSET(0xB5B65C0)

	class KPEKFHGKGFN___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 sponsorID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPEKFHGKGFN___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSponsor_b__0(::GDADEGMMPPD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDADEGMMPPD*))((::PBYTE)hIl2Cpp + KPEKFHGKGFN___C__DISPLAYCLASS4_0__GETSPONSOR_B__0_OFFSET))(this, a1);
		}

	};
