#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIADLOGFPCD;
class AIADLOGFPCD_LPPEFOOHLMF;

#define AIADLOGFPCD___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C53E010)
#define AIADLOGFPCD___C__DISPLAYCLASS12_0___SUBSCRIBE_B__0_OFFSET UNITYSDK_OFFSET(0x1C53E6C0)

	class AIADLOGFPCD___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::AIADLOGFPCD* __4__this; // 0x10
		::AIADLOGFPCD_LPPEFOOHLMF* subject; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIADLOGFPCD___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

		::System::Void __Subscribe_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIADLOGFPCD___C__DISPLAYCLASS12_0___SUBSCRIBE_B__0_OFFSET))(this);
		}

	};
