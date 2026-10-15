#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NPCComponentConfig; }

#define RPG_GAMECORE_NPCCOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8CFED0)
#define RPG_GAMECORE_NPCCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8CFEE0)
#define RPG_GAMECORE_NPCCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8CFE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCComponentConfig_TypeDefinitionIndex = 16568;

	class NPCComponentConfig : public ::RPG::GameCore::ComponentConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NPCComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NPCComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::NPCComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NPCComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
