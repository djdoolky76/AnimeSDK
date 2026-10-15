#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetDressedEquipNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETDRESSEDEQUIPNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D738050)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETDRESSEDEQUIPNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D738060)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETDRESSEDEQUIPNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D738010)

namespace RPG::GameCore
{
	class GridFightParamGetDressedEquipNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETDRESSEDEQUIPNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetDressedEquipNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetDressedEquipNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETDRESSEDEQUIPNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetDressedEquipNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetDressedEquipNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETDRESSEDEQUIPNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
