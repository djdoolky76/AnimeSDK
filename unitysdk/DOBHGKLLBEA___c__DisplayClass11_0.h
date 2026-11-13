#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOBHGKLLBEA;
namespace RPG::Client { class BattleAvatarUltraSkillFlyEffect; }

#define DOBHGKLLBEA___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1919C940)
#define DOBHGKLLBEA___C__DISPLAYCLASS11_0___PLAYEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1919CDB0)

inline static constexpr unsigned int DOBHGKLLBEA___c__DisplayClass11_0_TypeDefinitionIndex = 73463;

	class DOBHGKLLBEA___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::RPG::Client::BattleAvatarUltraSkillFlyEffect* effect; // 0x10
		::DOBHGKLLBEA* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBHGKLLBEA___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Void __PlayEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBHGKLLBEA___C__DISPLAYCLASS11_0___PLAYEFFECT_B__0_OFFSET))(this);
		}

	};
