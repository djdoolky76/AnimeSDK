#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetCurEnemyDifficultyConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURENEMYDIFFICULTYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BED40)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURENEMYDIFFICULTYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BED50)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURENEMYDIFFICULTYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BED00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetCurEnemyDifficultyConfig_TypeDefinitionIndex = 19875;

	class GridFightParamGetCurEnemyDifficultyConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURENEMYDIFFICULTYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetCurEnemyDifficultyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetCurEnemyDifficultyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURENEMYDIFFICULTYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetCurEnemyDifficultyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetCurEnemyDifficultyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURENEMYDIFFICULTYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
