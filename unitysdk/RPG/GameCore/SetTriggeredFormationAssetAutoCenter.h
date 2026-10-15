#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetTriggeredFormationAssetAutoCenter; }

#define RPG_GAMECORE_SETTRIGGEREDFORMATIONASSETAUTOCENTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC8BB0)
#define RPG_GAMECORE_SETTRIGGEREDFORMATIONASSETAUTOCENTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC8BC0)
#define RPG_GAMECORE_SETTRIGGEREDFORMATIONASSETAUTOCENTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC8B70)

namespace RPG::GameCore
{
	class SetTriggeredFormationAssetAutoCenter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamTypeMask TargetTeam; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRIGGEREDFORMATIONASSETAUTOCENTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTriggeredFormationAssetAutoCenter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTriggeredFormationAssetAutoCenter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRIGGEREDFORMATIONASSETAUTOCENTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTriggeredFormationAssetAutoCenter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTriggeredFormationAssetAutoCenter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRIGGEREDFORMATIONASSETAUTOCENTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
