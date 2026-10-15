#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAugmentNodeBanEnemyDifficultyConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUGMENTNODEBANENEMYDIFFICULTYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7333F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUGMENTNODEBANENEMYDIFFICULTYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D733400)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUGMENTNODEBANENEMYDIFFICULTYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7333B0)

namespace RPG::GameCore
{
	class GridFightModifierAugmentNodeBanEnemyDifficultyConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUGMENTNODEBANENEMYDIFFICULTYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAugmentNodeBanEnemyDifficultyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAugmentNodeBanEnemyDifficultyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUGMENTNODEBANENEMYDIFFICULTYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAugmentNodeBanEnemyDifficultyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAugmentNodeBanEnemyDifficultyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUGMENTNODEBANENEMYDIFFICULTYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
