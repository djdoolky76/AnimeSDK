#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoEffect; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPVIEW___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDD0260)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPVIEW___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDD02A0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPVIEW___C___FIREEFFECT_B__10_0_OFFSET UNITYSDK_OFFSET(0x1CDD02B0)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirEquipView___c_TypeDefinitionIndex = 79653;

	class PixAirEquipView___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>** StaticGet___9__10_0()
		{
			return (::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>**)UnitySDK::FromName("RPG.Client.LittleGame.PixAir", "<>c")->GetStaticField(0x4C8A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LittleGame.PixAir", "<>c")->GetStaticField(0x4C8A8);
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
