#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::FateRin::View::Battle { class FateRinBezierTrailEffect; }
namespace RPG::Client::FateRin::View::Battle { class FateRinEffectController; }
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4F2390)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER___C__DISPLAYCLASS10_0__PLAYTRAIL_B__0_OFFSET UNITYSDK_OFFSET(0x1C4F3840)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinEffectController___c__DisplayClass10_0_TypeDefinitionIndex = 83469;

	class FateRinEffectController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::View::Battle::FateRinBezierTrailEffect* trail; // 0x10
		::System::Object* owner; // 0x18
		::System::Action* onComplete; // 0x20
		::RPG::Client::FateRin::View::Battle::FateRinEffectController* __4__this; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayTrail_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINEFFECTCONTROLLER___C__DISPLAYCLASS10_0__PLAYTRAIL_B__0_OFFSET))(this);
		}

	};
}
