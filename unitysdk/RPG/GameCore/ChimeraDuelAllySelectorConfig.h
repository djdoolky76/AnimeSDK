#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelAllySelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELALLYSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D56D0E0)
#define RPG_GAMECORE_CHIMERADUELALLYSELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D56D0F0)
#define RPG_GAMECORE_CHIMERADUELALLYSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D56D050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelAllySelectorConfig_TypeDefinitionIndex = 15937;

	class ChimeraDuelAllySelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELALLYSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelAllySelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelAllySelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELALLYSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelAllySelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelAllySelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELALLYSELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
