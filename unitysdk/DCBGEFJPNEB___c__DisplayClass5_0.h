#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBHMKEHIDCA;

#define DCBGEFJPNEB___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC67F60)
#define DCBGEFJPNEB___C__DISPLAYCLASS5_0___ONTICKIMPLEMENT_B__0_OFFSET UNITYSDK_OFFSET(0x1EC685E0)

	class DCBGEFJPNEB___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Single deltaTime; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBGEFJPNEB___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnTickImplement_b__0(::CBHMKEHIDCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBHMKEHIDCA*))((::PBYTE)hIl2Cpp + DCBGEFJPNEB___C__DISPLAYCLASS5_0___ONTICKIMPLEMENT_B__0_OFFSET))(this, a1);
		}

	};
