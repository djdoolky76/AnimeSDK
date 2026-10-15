#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenIncidentStepConfig; }

#define RPG_GAMECORE_HIPPLENINCIDENTSTEPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73F200)
#define RPG_GAMECORE_HIPPLENINCIDENTSTEPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7404B0)
#define RPG_GAMECORE_HIPPLENINCIDENTSTEPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73F400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentStepConfig_TypeDefinitionIndex = 16803;

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
