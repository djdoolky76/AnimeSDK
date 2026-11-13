#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloorBattleAreaSyncTemplateConfig; }

#define RPG_GAMECORE_FLOORBATTLEAREASYNCTEMPLATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7AB290)
#define RPG_GAMECORE_FLOORBATTLEAREASYNCTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F7AB250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorBattleAreaSyncTemplateConfig_TypeDefinitionIndex = 17579;

	class FloorBattleAreaSyncTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORBATTLEAREASYNCTEMPLATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorBattleAreaSyncTemplateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorBattleAreaSyncTemplateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORBATTLEAREASYNCTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
