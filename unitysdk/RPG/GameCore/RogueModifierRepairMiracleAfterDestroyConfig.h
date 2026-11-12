#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierRepairMiracleAfterDestroyConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERREPAIRMIRACLEAFTERDESTROYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC2BA40)
#define RPG_GAMECORE_ROGUEMODIFIERREPAIRMIRACLEAFTERDESTROYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC2BA50)
#define RPG_GAMECORE_ROGUEMODIFIERREPAIRMIRACLEAFTERDESTROYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC2BA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierRepairMiracleAfterDestroyConfig_TypeDefinitionIndex = 18160;

	class RogueModifierRepairMiracleAfterDestroyConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPAIRMIRACLEAFTERDESTROYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierRepairMiracleAfterDestroyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierRepairMiracleAfterDestroyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPAIRMIRACLEAFTERDESTROYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierRepairMiracleAfterDestroyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierRepairMiracleAfterDestroyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPAIRMIRACLEAFTERDESTROYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
