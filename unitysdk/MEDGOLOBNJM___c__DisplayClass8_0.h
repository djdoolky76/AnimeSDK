#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define MEDGOLOBNJM___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BCC30)
#define MEDGOLOBNJM___C__DISPLAYCLASS8_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0xB8BCD70)

inline static constexpr unsigned int MEDGOLOBNJM___c__DisplayClass8_0_TypeDefinitionIndex = 71328;

	class MEDGOLOBNJM___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* modifier; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDGOLOBNJM___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint _Create_b__0(::RPG::GameCore::DynamicFloat* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + MEDGOLOBNJM___C__DISPLAYCLASS8_0__CREATE_B__0_OFFSET))(this, a1);
		}

	};
