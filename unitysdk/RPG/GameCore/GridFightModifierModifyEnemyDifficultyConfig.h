#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierModifyEnemyDifficultyConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYENEMYDIFFICULTYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D734F40)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYENEMYDIFFICULTYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D734F50)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYENEMYDIFFICULTYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D734F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierModifyEnemyDifficultyConfig_TypeDefinitionIndex = 19418;

	class GridFightModifierModifyEnemyDifficultyConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYENEMYDIFFICULTYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierModifyEnemyDifficultyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierModifyEnemyDifficultyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYENEMYDIFFICULTYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierModifyEnemyDifficultyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierModifyEnemyDifficultyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYENEMYDIFFICULTYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
