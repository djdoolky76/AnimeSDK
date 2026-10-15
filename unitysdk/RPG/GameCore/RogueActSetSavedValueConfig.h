#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActSetSavedValueConfig; }

#define RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D973F40)
#define RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D973F50)
#define RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D973F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActSetSavedValueConfig_TypeDefinitionIndex = 19709;

	class RogueActSetSavedValueConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActSetSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActSetSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActSetSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActSetSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
