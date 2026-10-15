#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActRemoveRogueFormulaConfig; }

#define RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D973760)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D973770)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D973720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveRogueFormulaConfig_TypeDefinitionIndex = 19656;

	class RogueActRemoveRogueFormulaConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActRemoveRogueFormulaConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActRemoveRogueFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActRemoveRogueFormulaConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActRemoveRogueFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
