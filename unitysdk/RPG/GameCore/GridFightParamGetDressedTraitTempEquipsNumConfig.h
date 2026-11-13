#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetDressedTraitTempEquipsNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETDRESSEDTRAITTEMPEQUIPSNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BEF80)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETDRESSEDTRAITTEMPEQUIPSNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BEF90)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETDRESSEDTRAITTEMPEQUIPSNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BEF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetDressedTraitTempEquipsNumConfig_TypeDefinitionIndex = 19830;

	class GridFightParamGetDressedTraitTempEquipsNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETDRESSEDTRAITTEMPEQUIPSNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetDressedTraitTempEquipsNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetDressedTraitTempEquipsNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETDRESSEDTRAITTEMPEQUIPSNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetDressedTraitTempEquipsNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetDressedTraitTempEquipsNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETDRESSEDTRAITTEMPEQUIPSNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
