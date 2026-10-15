#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelRelativePositionSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELRELATIVEPOSITIONSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A9000)
#define RPG_GAMECORE_CHIMERADUELRELATIVEPOSITIONSELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A9010)
#define RPG_GAMECORE_CHIMERADUELRELATIVEPOSITIONSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A8F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelRelativePositionSelectorConfig_TypeDefinitionIndex = 15903;

	class ChimeraDuelRelativePositionSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::System::Int32 RelativePosition; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRELATIVEPOSITIONSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelRelativePositionSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelRelativePositionSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRELATIVEPOSITIONSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelRelativePositionSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelRelativePositionSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRELATIVEPOSITIONSELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
