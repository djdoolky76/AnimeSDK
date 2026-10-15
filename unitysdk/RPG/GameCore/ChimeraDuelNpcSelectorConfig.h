#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelNpcType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelNpcSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELNPCSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A65C0)
#define RPG_GAMECORE_CHIMERADUELNPCSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A6470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelNpcSelectorConfig_TypeDefinitionIndex = 15952;

	class ChimeraDuelNpcSelectorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraDuelTeamSelectorType TeamSelectorType; // 0x10
		::RPG::GameCore::ChimeraDuelNpcType Npc; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelNpcSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelNpcSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
