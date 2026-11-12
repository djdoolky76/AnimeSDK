#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIADLOGFPCD;
class AIADLOGFPCD_LPPEFOOHLMF;

#define AIADLOGFPCD___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BF9C0)
#define AIADLOGFPCD___C__DISPLAYCLASS12_0___SUBSCRIBE_B__0_OFFSET UNITYSDK_OFFSET(0x1D6C0070)

inline static constexpr unsigned int AIADLOGFPCD___c__DisplayClass12_0_TypeDefinitionIndex = 42829;

	class AIADLOGFPCD___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::AIADLOGFPCD_LPPEFOOHLMF* subject; // 0x10
		::AIADLOGFPCD* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIADLOGFPCD___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

		::System::Void __Subscribe_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIADLOGFPCD___C__DISPLAYCLASS12_0___SUBSCRIBE_B__0_OFFSET))(this);
		}

	};
