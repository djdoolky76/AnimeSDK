#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Object.h"
class EANKAFJCEEH;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }

#define FENBKKMELOI_OJJNAJBJMLG_CTOR_OFFSET UNITYSDK_OFFSET(0x15728550)

	class FENBKKMELOI_OJJNAJBJMLG : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::EANKAFJCEEH* HLIIPKKCPOM; // 0x18
		::RPG::GameCore::SkillData* IJGAPCNDIAG; // 0x20
		::RPG::GameCore::BattleInstance* DOLKMGHOGBM; // 0x28
		::RPG::Client::UISkillIndex KNKEPHGJENN; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENBKKMELOI_OJJNAJBJMLG_CTOR_OFFSET))(this);
		}

	};
