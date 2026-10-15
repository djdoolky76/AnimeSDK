#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActGetRogueFormulaConfig; }

#define RPG_GAMECORE_ROGUEACTGETROGUEFORMULACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99E210)
#define RPG_GAMECORE_ROGUEACTGETROGUEFORMULACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99E220)
#define RPG_GAMECORE_ROGUEACTGETROGUEFORMULACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99E1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueFormulaConfig_TypeDefinitionIndex = 19655;

	class RogueActGetRogueFormulaConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEFORMULACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueFormulaConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEFORMULACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueFormulaConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEFORMULACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
