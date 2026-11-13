#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCondIsLastNodeTriggerBattleConfig; }

#define RPG_GAMECORE_GRIDFIGHTCONDISLASTNODETRIGGERBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x205FF3A0)
#define RPG_GAMECORE_GRIDFIGHTCONDISLASTNODETRIGGERBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x205FF3B0)
#define RPG_GAMECORE_GRIDFIGHTCONDISLASTNODETRIGGERBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x205FF360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondIsLastNodeTriggerBattleConfig_TypeDefinitionIndex = 19550;

	class GridFightCondIsLastNodeTriggerBattleConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISLASTNODETRIGGERBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondIsLastNodeTriggerBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondIsLastNodeTriggerBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISLASTNODETRIGGERBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondIsLastNodeTriggerBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondIsLastNodeTriggerBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISLASTNODETRIGGERBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
