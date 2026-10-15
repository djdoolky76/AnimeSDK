#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMGLDNNFHFB;
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1252_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD9C6F10)
#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1252_0___REQUESTSERVERDISPATCH_B__0_OFFSET UNITYSDK_OFFSET(0xD9C6F20)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager___c__DisplayClass1252_0_TypeDefinitionIndex = 69372;

	class NetworkManager___c__DisplayClass1252_0 : public ::System::Object
	{
	public:
		::NMGLDNNFHFB* handleResult; // 0x10
		::System::Action_1<::NMGLDNNFHFB*>* __9__0; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1252_0_CTOR_OFFSET))(this);
		}

		::System::Void __RequestServerDispatch_b__0(::NMGLDNNFHFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMGLDNNFHFB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS1252_0___REQUESTSERVERDISPATCH_B__0_OFFSET))(this, a1);
		}

	};
}
