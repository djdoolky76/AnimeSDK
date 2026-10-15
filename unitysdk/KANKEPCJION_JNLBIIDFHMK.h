#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Object.h"
class EANKAFJCEEH;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }

#define KANKEPCJION_JNLBIIDFHMK_CTOR_OFFSET UNITYSDK_OFFSET(0xB2E4C10)

inline static constexpr unsigned int KANKEPCJION_JNLBIIDFHMK_TypeDefinitionIndex = 71896;

	class KANKEPCJION_JNLBIIDFHMK : public ::System::Object
	{
	public:
		::EANKAFJCEEH* HLIIPKKCPOM; // 0x10
		::RPG::GameCore::BattleInstance* DOLKMGHOGBM; // 0x18
		::RPG::GameCore::GameEntity* ALLAIOIIIBN; // 0x20
		::RPG::Client::UISkillIndex GMDBHJKEAEI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_JNLBIIDFHMK_CTOR_OFFSET))(this);
		}

	};
