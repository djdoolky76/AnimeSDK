#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionAddChimeraHighestStarConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONADDCHIMERAHIGHESTSTARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x205F9350)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDCHIMERAHIGHESTSTARCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x205F9360)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDCHIMERAHIGHESTSTARCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x205F9310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddChimeraHighestStarConfig_TypeDefinitionIndex = 19528;

	class GridFightActionAddChimeraHighestStarConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDCHIMERAHIGHESTSTARCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddChimeraHighestStarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddChimeraHighestStarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDCHIMERAHIGHESTSTARCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddChimeraHighestStarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddChimeraHighestStarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDCHIMERAHIGHESTSTARCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
