#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PayProductResult.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PayModule; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS39_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE4EAE50)
#define RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS39_0___DOPAY_B__0_OFFSET UNITYSDK_OFFSET(0xE4EBA20)

namespace RPG::Client
{
	inline static constexpr unsigned int PayModule___c__DisplayClass39_0_TypeDefinitionIndex = 68376;

	class PayModule___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::PayProductResult>* onGetPayProductResult; // 0x10
		::RPG::Client::PayModule* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS39_0_CTOR_OFFSET))(this);
		}

		::System::Void __DoPay_b__0(::RPG::Client::PayProductResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PayProductResult))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS39_0___DOPAY_B__0_OFFSET))(this, a1);
		}

	};
}
