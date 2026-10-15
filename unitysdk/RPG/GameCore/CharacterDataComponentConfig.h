#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterDataComponentConfig; }

#define RPG_GAMECORE_CHARACTERDATACOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D56FC60)
#define RPG_GAMECORE_CHARACTERDATACOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D56FC70)
#define RPG_GAMECORE_CHARACTERDATACOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D56FBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterDataComponentConfig_TypeDefinitionIndex = 16566;

	class CharacterDataComponentConfig : public ::RPG::GameCore::ComponentConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterDataComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterDataComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterDataComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterDataComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
