#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/ST_AlertLevel.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_SetAlertLevel; }

#define RPG_GAMECORE_ST_SIDE_SETALERTLEVEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA86EC0)
#define RPG_GAMECORE_ST_SIDE_SETALERTLEVEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA86ED0)
#define RPG_GAMECORE_ST_SIDE_SETALERTLEVEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA86E90)

namespace RPG::GameCore
{
	class ST_Side_SetAlertLevel : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::ST_AlertLevel AlertLevel; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_SETALERTLEVEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_SetAlertLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_SetAlertLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_SETALERTLEVEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_SetAlertLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_SetAlertLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_SETALERTLEVEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
