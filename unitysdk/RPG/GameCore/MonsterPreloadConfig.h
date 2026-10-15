#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterPreloadConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterPreloadConfig; }

#define RPG_GAMECORE_MONSTERPRELOADCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D889450)
#define RPG_GAMECORE_MONSTERPRELOADCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D889460)
#define RPG_GAMECORE_MONSTERPRELOADCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D889420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterPreloadConfig_TypeDefinitionIndex = 16339;

	class MonsterPreloadConfig : public ::RPG::GameCore::CharacterPreloadConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERPRELOADCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterPreloadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERPRELOADCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterPreloadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERPRELOADCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
