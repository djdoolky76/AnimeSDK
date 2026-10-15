#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/StandByStance.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_OverrideStandByStance; }

#define RPG_GAMECORE_ST_SIDE_OVERRIDESTANDBYSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA58180)
#define RPG_GAMECORE_ST_SIDE_OVERRIDESTANDBYSTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA58190)
#define RPG_GAMECORE_ST_SIDE_OVERRIDESTANDBYSTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA58150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_OverrideStandByStance_TypeDefinitionIndex = 20118;

	class ST_Side_OverrideStandByStance : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::StandByStance Stance; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_OVERRIDESTANDBYSTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_OverrideStandByStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_OverrideStandByStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_OVERRIDESTANDBYSTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_OverrideStandByStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_OverrideStandByStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_OVERRIDESTANDBYSTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
