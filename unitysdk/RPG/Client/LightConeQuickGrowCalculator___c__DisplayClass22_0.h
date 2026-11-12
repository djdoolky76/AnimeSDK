#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAIEKONLHAL;
namespace RPG::Client { class LightConeQuickGrowCalculator; }

#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS22_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDDCE100)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS22_0___FILLREQCOSTLISTS_B__0_OFFSET UNITYSDK_OFFSET(0xDDD0290)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS22_0___FILLREQCOSTLISTS_B__1_OFFSET UNITYSDK_OFFSET(0xDDD0300)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeQuickGrowCalculator___c__DisplayClass22_0_TypeDefinitionIndex = 67650;

	class LightConeQuickGrowCalculator___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::NAIEKONLHAL* actualPromotion; // 0x10
		::NAIEKONLHAL* nonPileCosts; // 0x18
		::RPG::Client::LightConeQuickGrowCalculator* __4__this; // 0x20
		::NAIEKONLHAL* actualTotal; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS22_0_CTOR_OFFSET))(this);
		}

		::System::Void __FillReqCostLists_b__0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS22_0___FILLREQCOSTLISTS_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void __FillReqCostLists_b__1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS22_0___FILLREQCOSTLISTS_B__1_OFFSET))(this, a1, a2);
		}

	};
}
