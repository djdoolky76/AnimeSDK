#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterNavigationComponentConfig; }

#define RPG_GAMECORE_CHARACTERNAVIGATIONCOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5467F0)
#define RPG_GAMECORE_CHARACTERNAVIGATIONCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D546800)
#define RPG_GAMECORE_CHARACTERNAVIGATIONCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D546760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterNavigationComponentConfig_TypeDefinitionIndex = 16565;

	class CharacterNavigationComponentConfig : public ::RPG::GameCore::ComponentConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNAVIGATIONCOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterNavigationComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterNavigationComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNAVIGATIONCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterNavigationComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterNavigationComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNAVIGATIONCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
