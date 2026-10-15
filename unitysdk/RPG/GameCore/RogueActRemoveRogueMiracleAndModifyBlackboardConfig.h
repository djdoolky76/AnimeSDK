#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActRemoveRogueMiracleAndModifyBlackboardConfig; }

#define RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEANDMODIFYBLACKBOARDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D973880)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEANDMODIFYBLACKBOARDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D973890)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEANDMODIFYBLACKBOARDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D973840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveRogueMiracleAndModifyBlackboardConfig_TypeDefinitionIndex = 19608;

	class RogueActRemoveRogueMiracleAndModifyBlackboardConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEANDMODIFYBLACKBOARDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActRemoveRogueMiracleAndModifyBlackboardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActRemoveRogueMiracleAndModifyBlackboardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEANDMODIFYBLACKBOARDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActRemoveRogueMiracleAndModifyBlackboardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActRemoveRogueMiracleAndModifyBlackboardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEANDMODIFYBLACKBOARDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
