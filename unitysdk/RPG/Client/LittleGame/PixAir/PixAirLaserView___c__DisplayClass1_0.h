#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
namespace RPG::Client { class MonoEffect; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD483410)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW___C__DISPLAYCLASS1_0___FIREEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xD483F60)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirLaserView___c__DisplayClass1_0_TypeDefinitionIndex = 77322;

	class PixAirLaserView___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Action* onLoaded; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void __FireEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW___C__DISPLAYCLASS1_0___FIREEFFECT_B__0_OFFSET))(this, a1, a2);
		}

	};
}
