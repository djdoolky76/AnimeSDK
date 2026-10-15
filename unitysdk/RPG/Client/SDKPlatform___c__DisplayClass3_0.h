#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PayProductResult.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SDKPlatform; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_SDKPLATFORM___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE090B10)
#define RPG_CLIENT_SDKPLATFORM___C__DISPLAYCLASS3_0__PAYORDER_B__0_OFFSET UNITYSDK_OFFSET(0xE091AC0)

namespace RPG::Client
{
	class SDKPlatform___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::RPG::Client::SDKPlatform* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKPLATFORM___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _PayOrder_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKPLATFORM___C__DISPLAYCLASS3_0__PAYORDER_B__0_OFFSET))(this, a1);
		}

	};
}
