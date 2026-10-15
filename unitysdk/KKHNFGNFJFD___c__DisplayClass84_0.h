#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"
class KKHNFGNFJFD;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define KKHNFGNFJFD___C__DISPLAYCLASS84_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB4C2060)
#define KKHNFGNFJFD___C__DISPLAYCLASS84_0__ONCASTERMODIFIERPREVIEWCREATEENTITIES_B__0_OFFSET UNITYSDK_OFFSET(0xB4C6070)

inline static constexpr unsigned int KKHNFGNFJFD___c__DisplayClass84_0_TypeDefinitionIndex = 71307;

	class KKHNFGNFJFD___c__DisplayClass84_0 : public ::System::Object
	{
	public:
		::KKHNFGNFJFD* __4__this; // 0x10
		::RPG::GameCore::SkillType skillType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD___C__DISPLAYCLASS84_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnCasterModifierPreviewCreateEntities_b__0(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD___C__DISPLAYCLASS84_0__ONCASTERMODIFIERPREVIEWCREATEENTITIES_B__0_OFFSET))(this, a1);
		}

	};
