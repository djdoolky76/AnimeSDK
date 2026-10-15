#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class ST_Parkour_SwitchRoad; }

#define RPG_CLIENT_ST_PARKOUR_SWITCHROAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D336BC0)
#define RPG_CLIENT_ST_PARKOUR_SWITCHROAD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D336BD0)
#define RPG_CLIENT_ST_PARKOUR_SWITCHROAD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D336B80)

namespace RPG::Client
{
	inline static constexpr unsigned int ST_Parkour_SwitchRoad_TypeDefinitionIndex = 10269;

	class ST_Parkour_SwitchRoad : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Boolean LeavePlayer; // 0x18
		::System::Boolean NeedAheadOfPlayer; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_SWITCHROAD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::ST_Parkour_SwitchRoad* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ST_Parkour_SwitchRoad*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_SWITCHROAD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::ST_Parkour_SwitchRoad* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ST_Parkour_SwitchRoad*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_SWITCHROAD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
