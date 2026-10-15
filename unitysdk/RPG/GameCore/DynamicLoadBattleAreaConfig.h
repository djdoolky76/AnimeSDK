#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicLoadBlockDataList.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicLoadBattleAreaConfig; }
namespace RPG::GameCore { class LevelBattleAreaInfo; }

#define RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D628F70)
#define RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D628F90)
#define RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D628F10)

namespace RPG::GameCore
{
	class DynamicLoadBattleAreaConfig : public ::RPG::GameCore::DynamicLoadBlockDataList
	{
	public:
		::RPG::GameCore::LevelBattleAreaInfo* BattleAreaInfo; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicLoadBattleAreaConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicLoadBattleAreaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicLoadBattleAreaConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicLoadBattleAreaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
