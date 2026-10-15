#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
namespace RPG::Client { class MonoEffect; }

#define IHOMABBDNPN___C__DISPLAYCLASS38_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1642BAE0)
#define IHOMABBDNPN___C__DISPLAYCLASS38_0__TRIGGERADVEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1642C910)

	class IHOMABBDNPN___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::System::Boolean followTargetAlways; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOMABBDNPN___C__DISPLAYCLASS38_0_CTOR_OFFSET))(this);
		}

		::System::Void _TriggerAdvEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + IHOMABBDNPN___C__DISPLAYCLASS38_0__TRIGGERADVEFFECT_B__0_OFFSET))(this, a1, a2);
		}

	};
