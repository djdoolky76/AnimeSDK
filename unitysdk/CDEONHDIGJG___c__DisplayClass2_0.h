#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class CDEONHDIGJG;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }

#define CDEONHDIGJG___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC764340)
#define CDEONHDIGJG___C__DISPLAYCLASS2_0__ATTACHEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xC7662D0)

	class CDEONHDIGJG___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::BaseModifierInstance_ModifierEffectData* effectData; // 0x10
		::CDEONHDIGJG* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEONHDIGJG___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void _AttachEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CDEONHDIGJG___C__DISPLAYCLASS2_0__ATTACHEFFECT_B__0_OFFSET))(this, a1, a2);
		}

	};
