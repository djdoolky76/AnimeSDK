#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraWorkPhase; }
namespace RPG::GameCore { class ChimeraWorkPhaseConfig; }

#define RPG_GAMECORE_CHIMERAWORKPHASECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D583DC0)
#define RPG_GAMECORE_CHIMERAWORKPHASECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D583A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraWorkPhaseConfig_TypeDefinitionIndex = 15884;

	class ChimeraWorkPhaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraWorkPhase*>* Phases; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKPHASECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraWorkPhaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraWorkPhaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKPHASECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
