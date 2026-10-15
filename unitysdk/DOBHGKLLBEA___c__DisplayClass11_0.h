#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOBHGKLLBEA;
namespace RPG::Client { class BattleAvatarUltraSkillFlyEffect; }

#define DOBHGKLLBEA___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0x11FDEBE0)
#define DOBHGKLLBEA___C__DISPLAYCLASS11_0___PLAYEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x11FDF050)

	class DOBHGKLLBEA___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::DOBHGKLLBEA* __4__this; // 0x10
		::RPG::Client::BattleAvatarUltraSkillFlyEffect* effect; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBHGKLLBEA___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Void __PlayEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBHGKLLBEA___C__DISPLAYCLASS11_0___PLAYEFFECT_B__0_OFFSET))(this);
		}

	};
