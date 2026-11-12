#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMGLDNNFHFB;
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1295_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE467010)
#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1295_0___REQUESTSERVERDISPATCH_B__0_OFFSET UNITYSDK_OFFSET(0xE467020)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager___c__DisplayClass1295_0_TypeDefinitionIndex = 71328;

	class NetworkManager___c__DisplayClass1295_0 : public ::System::Object
	{
	public:
		::System::Action_1<::NMGLDNNFHFB*>* __9__0; // 0x10
		::NMGLDNNFHFB* handleResult; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1295_0_CTOR_OFFSET))(this);
		}

		::System::Void __RequestServerDispatch_b__0(::NMGLDNNFHFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMGLDNNFHFB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1295_0___REQUESTSERVERDISPATCH_B__0_OFFSET))(this, a1);
		}

	};
}
