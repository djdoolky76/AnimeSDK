#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDLIDAKBKMK;
namespace RPG::Client { class IChooseDeliveryEntry; }
namespace RPG::Client { class IChooseDeliveryToastEntry; }

#define RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS20_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD4D3880)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS20_0___ONCHOOSEDELIVERYSCRSP_B__0_OFFSET UNITYSDK_OFFSET(0xD4D47A0)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS20_0___ONCHOOSEDELIVERYSCRSP_B__1_OFFSET UNITYSDK_OFFSET(0xD4D48B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChooseDeliveryModule___c__DisplayClass20_0_TypeDefinitionIndex = 64962;

	class ChooseDeliveryModule___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::EDLIDAKBKMK* rsp; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS20_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnChooseDeliveryScRsp_b__0(::RPG::Client::IChooseDeliveryEntry* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IChooseDeliveryEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS20_0___ONCHOOSEDELIVERYSCRSP_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __OnChooseDeliveryScRsp_b__1(::RPG::Client::IChooseDeliveryToastEntry* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IChooseDeliveryToastEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS20_0___ONCHOOSEDELIVERYSCRSP_B__1_OFFSET))(this, a1);
		}

	};
}
