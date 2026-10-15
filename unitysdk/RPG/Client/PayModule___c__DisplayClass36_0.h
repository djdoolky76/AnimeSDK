#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PayProductResult.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PayModule; }
namespace RPG::Client { class Product; }
namespace System { class Action; }

#define RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS36_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDA94C00)
#define RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS36_0__PAY_B__0_OFFSET UNITYSDK_OFFSET(0xDA960E0)

namespace RPG::Client
{
	class PayModule___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::RPG::Client::Product* product; // 0x10
		::System::Action* onGetPayProductResult; // 0x18
		::RPG::Client::PayModule* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS36_0_CTOR_OFFSET))(this);
		}

		::System::Void _Pay_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS36_0__PAY_B__0_OFFSET))(this);
		}

	};
}
