#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class FNFGDHDIHHM;
namespace RPG::Client { class MonoEffect; }

#define CGBECAKCLFD___C__DISPLAYCLASS49_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCC6F0C0)
#define CGBECAKCLFD___C__DISPLAYCLASS49_0__FIRESPEEDEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xCC85170)
#define CGBECAKCLFD___C__DISPLAYCLASS49_0__FIRESPEEDEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0xCC85210)

	class CGBECAKCLFD___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::FNFGDHDIHHM* car; // 0x10
		::System::UInt32 speedEffectPartID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBECAKCLFD___C__DISPLAYCLASS49_0_CTOR_OFFSET))(this);
		}

		::System::Void _FireSpeedEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CGBECAKCLFD___C__DISPLAYCLASS49_0__FIRESPEEDEFFECT_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _FireSpeedEffect_b__1(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CGBECAKCLFD___C__DISPLAYCLASS49_0__FIRESPEEDEFFECT_B__1_OFFSET))(this, a1, a2);
		}

	};
