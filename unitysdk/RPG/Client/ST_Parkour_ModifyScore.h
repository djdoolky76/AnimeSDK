#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class ST_Parkour_ModifyScore; }

#define RPG_CLIENT_ST_PARKOUR_MODIFYSCORE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D336630)
#define RPG_CLIENT_ST_PARKOUR_MODIFYSCORE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D336640)
#define RPG_CLIENT_ST_PARKOUR_MODIFYSCORE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D336600)

namespace RPG::Client
{
	inline static constexpr unsigned int ST_Parkour_ModifyScore_TypeDefinitionIndex = 10268;

	class ST_Parkour_ModifyScore : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single ActionIntervalTime; // 0x18
		::System::Single SwitchRoadScore; // 0x1C
		::System::Single SlowDownRegionScore; // 0x20
		::System::Single SpeedUpRegionScore; // 0x24
		::System::Single SpeedItemScore; // 0x28
		::System::Single SkillItemScore; // 0x2C
		::System::Single ObstacleScore; // 0x30
		::System::Single LocalPlayerScore; // 0x34
		::System::Single AIPlayerScore; // 0x38
		::System::Single LeavePlayerScore; // 0x3C
		::System::Single NearPlayerScore; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_MODIFYSCORE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::ST_Parkour_ModifyScore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ST_Parkour_ModifyScore*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_MODIFYSCORE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::ST_Parkour_ModifyScore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ST_Parkour_ModifyScore*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_MODIFYSCORE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
