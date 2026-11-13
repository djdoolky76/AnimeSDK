#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenIncidentStepConfig; }

#define RPG_GAMECORE_HIPPLENINCIDENTSTEPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE781E0)
#define RPG_GAMECORE_HIPPLENINCIDENTSTEPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE79490)
#define RPG_GAMECORE_HIPPLENINCIDENTSTEPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE783E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentStepConfig_TypeDefinitionIndex = 16970;

	class HipplenIncidentStepConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTSTEPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenIncidentStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenIncidentStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTSTEPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenIncidentStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenIncidentStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTSTEPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
