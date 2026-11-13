#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetChimeraNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCHIMERANUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BEAA0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCHIMERANUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BEAB0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCHIMERANUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BEA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetChimeraNumConfig_TypeDefinitionIndex = 19879;

	class GridFightParamGetChimeraNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCHIMERANUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetChimeraNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetChimeraNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCHIMERANUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetChimeraNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetChimeraNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCHIMERANUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
