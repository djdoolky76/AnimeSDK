#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetEquipNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D70A620)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D70A630)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D70A5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetEquipNumConfig_TypeDefinitionIndex = 19523;

	class GridFightParamGetEquipNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetEquipNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetEquipNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetEquipNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetEquipNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
