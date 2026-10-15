#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureCharacterControllerConfig; }

#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3995A0)
#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3995B0)
#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D399510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCharacterControllerConfig_TypeDefinitionIndex = 16564;

	class AdventureCharacterControllerConfig : public ::RPG::GameCore::ComponentConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureCharacterControllerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureCharacterControllerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureCharacterControllerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureCharacterControllerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
