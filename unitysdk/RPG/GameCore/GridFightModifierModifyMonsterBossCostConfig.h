#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierModifyMonsterBossCostConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYMONSTERBOSSCOSTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E942960)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYMONSTERBOSSCOSTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E942970)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYMONSTERBOSSCOSTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E942920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierModifyMonsterBossCostConfig_TypeDefinitionIndex = 19785;

	class GridFightModifierModifyMonsterBossCostConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYMONSTERBOSSCOSTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierModifyMonsterBossCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierModifyMonsterBossCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYMONSTERBOSSCOSTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierModifyMonsterBossCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierModifyMonsterBossCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYMONSTERBOSSCOSTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
