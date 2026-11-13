#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GachaModule; }

#define RPG_CLIENT_GACHAUTILS___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A802B50)
#define RPG_CLIENT_GACHAUTILS___C__DISPLAYCLASS1_0__GOTOCUMULATIVECONSUMPTIONEXEIDOLONRECOMMENDPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x1A802B60)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaUtils___c__DisplayClass1_0_TypeDefinitionIndex = 65771;

	class GachaUtils___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::Client::GachaModule* gachaModule; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAUTILS___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _GotoCumulativeConsumptionExEidolonRecommendPage_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAUTILS___C__DISPLAYCLASS1_0__GOTOCUMULATIVECONSUMPTIONEXEIDOLONRECOMMENDPAGE_B__0_OFFSET))(this, a1);
		}

	};
}
