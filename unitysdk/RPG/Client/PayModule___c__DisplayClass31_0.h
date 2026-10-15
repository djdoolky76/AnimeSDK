#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMBPFFMCJDF.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class Product; }

#define RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS31_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDA94460)
#define RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS31_0__TRYGETPRODUCTBYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0xDA960A0)

namespace RPG::Client
{
	class PayModule___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::IMBPFFMCJDF productType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS31_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _TryGetProductByType_b__0(::RPG::Client::Product* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Product*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS31_0__TRYGETPRODUCTBYTYPE_B__0_OFFSET))(this, a1);
		}

	};
}
