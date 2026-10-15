#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoEffect; }
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPVIEW___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD47EA40)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPVIEW___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD47EA80)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPVIEW___C___FIREEFFECT_B__10_0_OFFSET UNITYSDK_OFFSET(0xD47EA90)

namespace RPG::Client::LittleGame::PixAir
{
	class PixAirEquipView___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__10_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.LittleGame.PixAir", "<>c")->GetStaticField(0x36510);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LittleGame.PixAir", "<>c")->GetStaticField(0x36518);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPVIEW___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPVIEW___C_CTOR_OFFSET))(this);
		}

		::System::Void __FireEffect_b__10_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPVIEW___C___FIREEFFECT_B__10_0_OFFSET))(this, a1, a2);
		}

	};
}
