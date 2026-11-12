#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActRemoveRogueMiracleByIdConfig; }

#define RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEBYIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBEA2B0)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEBYIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBEA2C0)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEBYIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBEA270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveRogueMiracleByIdConfig_TypeDefinitionIndex = 19942;

	class RogueActRemoveRogueMiracleByIdConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEBYIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActRemoveRogueMiracleByIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActRemoveRogueMiracleByIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEBYIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActRemoveRogueMiracleByIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActRemoveRogueMiracleByIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEBYIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
