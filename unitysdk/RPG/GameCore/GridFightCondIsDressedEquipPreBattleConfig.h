#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCondIsDressedEquipPreBattleConfig; }

#define RPG_GAMECORE_GRIDFIGHTCONDISDRESSEDEQUIPPREBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E933890)
#define RPG_GAMECORE_GRIDFIGHTCONDISDRESSEDEQUIPPREBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9338A0)
#define RPG_GAMECORE_GRIDFIGHTCONDISDRESSEDEQUIPPREBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E933850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondIsDressedEquipPreBattleConfig_TypeDefinitionIndex = 19549;

	class GridFightCondIsDressedEquipPreBattleConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISDRESSEDEQUIPPREBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondIsDressedEquipPreBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondIsDressedEquipPreBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISDRESSEDEQUIPPREBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondIsDressedEquipPreBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondIsDressedEquipPreBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISDRESSEDEQUIPPREBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
