#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFPOPEHNOAP;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__DISPLAYCLASS165_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE7CE2D0)
#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__DISPLAYCLASS165_0__REMOVEMODIFIEREXTRAMAXLAYER_B__1_OFFSET UNITYSDK_OFFSET(0xE7E41E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedAbilityComponent___c__DisplayClass165_0_TypeDefinitionIndex = 54853;

	class TurnBasedAbilityComponent___c__DisplayClass165_0 : public ::System::Object
	{
	public:
		::BFPOPEHNOAP* pCurConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__DISPLAYCLASS165_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveModifierExtraMaxLayer_b__1(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__DISPLAYCLASS165_0__REMOVEMODIFIEREXTRAMAXLAYER_B__1_OFFSET))(this, a1);
		}

	};
}
