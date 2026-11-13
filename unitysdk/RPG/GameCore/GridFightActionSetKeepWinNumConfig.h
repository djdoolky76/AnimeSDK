#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionSetKeepWinNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x205F9FA0)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x205F9FB0)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x205F9F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionSetKeepWinNumConfig_TypeDefinitionIndex = 19492;

	class GridFightActionSetKeepWinNumConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionSetKeepWinNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionSetKeepWinNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionSetKeepWinNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionSetKeepWinNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
