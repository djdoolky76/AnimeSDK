#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierGetRecommendEquipTempBeforeBattleBeginConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERGETRECOMMENDEQUIPTEMPBEFOREBATTLEBEGINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7070A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERGETRECOMMENDEQUIPTEMPBEFOREBATTLEBEGINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7070B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERGETRECOMMENDEQUIPTEMPBEFOREBATTLEBEGINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D707060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierGetRecommendEquipTempBeforeBattleBeginConfig_TypeDefinitionIndex = 19359;

	class GridFightModifierGetRecommendEquipTempBeforeBattleBeginConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGETRECOMMENDEQUIPTEMPBEFOREBATTLEBEGINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierGetRecommendEquipTempBeforeBattleBeginConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierGetRecommendEquipTempBeforeBattleBeginConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGETRECOMMENDEQUIPTEMPBEFOREBATTLEBEGINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierGetRecommendEquipTempBeforeBattleBeginConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierGetRecommendEquipTempBeforeBattleBeginConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGETRECOMMENDEQUIPTEMPBEFOREBATTLEBEGINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
