#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIGJONOOCLG;
class GAHPNAEGACM;

#define CIGJONOOCLG___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCF72580)
#define CIGJONOOCLG___C__DISPLAYCLASS11_0__ONDETAILCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0xCF72920)

	class CIGJONOOCLG___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::GAHPNAEGACM* detail; // 0x10
		::CIGJONOOCLG* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGJONOOCLG___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnDetailChange_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGJONOOCLG___C__DISPLAYCLASS11_0__ONDETAILCHANGE_B__0_OFFSET))(this);
		}

	};
