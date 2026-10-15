#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDEONHDIGJG;
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }

#define CDEONHDIGJG___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC766060)
#define CDEONHDIGJG___C__DISPLAYCLASS13_0___TRYDESTORYMODIFIEREFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xC7662A0)

	class CDEONHDIGJG___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::BaseModifierInstance_ModifierEffectData* effectData; // 0x10
		::CDEONHDIGJG* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEONHDIGJG___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Void __TryDestoryModifierEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEONHDIGJG___C__DISPLAYCLASS13_0___TRYDESTORYMODIFIEREFFECT_B__0_OFFSET))(this);
		}

	};
