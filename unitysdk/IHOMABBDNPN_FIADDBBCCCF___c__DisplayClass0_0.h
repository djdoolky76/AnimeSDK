#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class IHOMABBDNPN;
class IHOMABBDNPN_FIADDBBCCCF;
namespace RPG::Client { class MonoEffect; }

#define IHOMABBDNPN_FIADDBBCCCF___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1642CAB0)
#define IHOMABBDNPN_FIADDBBCCCF___C__DISPLAYCLASS0_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1642CBB0)

	class IHOMABBDNPN_FIADDBBCCCF___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::IHOMABBDNPN_FIADDBBCCCF* __4__this; // 0x10
		::IHOMABBDNPN* monoEffectComponent; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOMABBDNPN_FIADDBBCCCF___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + IHOMABBDNPN_FIADDBBCCCF___C__DISPLAYCLASS0_0___CTOR_B__0_OFFSET))(this, a1, a2);
		}

	};
