#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenIncidentStepConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenIncidentLevelGraphStepConfig; }
namespace RPG::GameCore { class HipplenIncidentStepConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENINCIDENTLEVELGRAPHSTEPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76D220)
#define RPG_GAMECORE_HIPPLENINCIDENTLEVELGRAPHSTEPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D76D230)
#define RPG_GAMECORE_HIPPLENINCIDENTLEVELGRAPHSTEPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76D1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentLevelGraphStepConfig_TypeDefinitionIndex = 16808;

	class HipplenIncidentLevelGraphStepConfig : public ::RPG::GameCore::HipplenIncidentStepConfig
	{
	public:
		::System::String* LevelGraphPath; // 0x10
		::RPG::GameCore::HipplenIncidentStepConfig* Next; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTLEVELGRAPHSTEPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenIncidentLevelGraphStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenIncidentLevelGraphStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTLEVELGRAPHSTEPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenIncidentLevelGraphStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenIncidentLevelGraphStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTLEVELGRAPHSTEPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
