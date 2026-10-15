#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenIncidentConfig; }
namespace RPG::GameCore { class HipplenIncidentStepConfig; }

#define RPG_GAMECORE_HIPPLENINCIDENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76CE80)
#define RPG_GAMECORE_HIPPLENINCIDENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76CDD0)

namespace RPG::GameCore
{
	class HipplenIncidentConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HipplenIncidentStepConfig* OnStart; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenIncidentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenIncidentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
