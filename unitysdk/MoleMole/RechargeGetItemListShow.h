#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GetItemListShow.h"

class GEAEOIGGMIE;

#define MOLEMOLE_RECHARGEGETITEMLISTSHOW_ORDERCONFIRM_OFFSET UNITYSDK_OFFSET(0x146A9130)
#define MOLEMOLE_RECHARGEGETITEMLISTSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x146A90C0)
#define MOLEMOLE_RECHARGEGETITEMLISTSHOW___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x146A9270)

namespace MoleMole
{
	inline static constexpr unsigned int RechargeGetItemListShow_TypeDefinitionIndex = 86991;

	class RechargeGetItemListShow : public ::MoleMole::GetItemListShow
	{
	public:
		::System::Void _ctor(::GEAEOIGGMIE* context)
		{
			return ((::System::Void(*)(::PVOID, ::GEAEOIGGMIE*))((::PBYTE)hIl2Cpp + MOLEMOLE_RECHARGEGETITEMLISTSHOW__CTOR_OFFSET))(this, context);
		}

		::System::Void OrderConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RECHARGEGETITEMLISTSHOW_ORDERCONFIRM_OFFSET))(this);
		}

		::System::Void __ctor_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RECHARGEGETITEMLISTSHOW___CTOR_B__0_0_OFFSET))(this);
		}
	};
}
