#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define PIOGONCBKIF___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9D9DC0)
#define PIOGONCBKIF___C__DISPLAYCLASS5_0__SETUPVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1A9D9E70)

inline static constexpr unsigned int PIOGONCBKIF___c__DisplayClass5_0_TypeDefinitionIndex = 73308;

	class PIOGONCBKIF___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* modifier; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOGONCBKIF___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint _SetupView_b__0(::RPG::GameCore::DynamicFloat* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + PIOGONCBKIF___C__DISPLAYCLASS5_0__SETUPVIEW_B__0_OFFSET))(this, a1);
		}

	};
