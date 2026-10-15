#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class CDEONHDIGJG;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }

#define CDEONHDIGJG___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC765430)
#define CDEONHDIGJG___C__DISPLAYCLASS7_0__RELOADEFFECTS_B__0_OFFSET UNITYSDK_OFFSET(0xC766300)

inline static constexpr unsigned int CDEONHDIGJG___c__DisplayClass7_0_TypeDefinitionIndex = 53745;

	class CDEONHDIGJG___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::BaseModifierInstance_ModifierEffectData* data; // 0x10
		::CDEONHDIGJG* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEONHDIGJG___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void _ReloadEffects_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CDEONHDIGJG___C__DISPLAYCLASS7_0__RELOADEFFECTS_B__0_OFFSET))(this, a1, a2);
		}

	};
