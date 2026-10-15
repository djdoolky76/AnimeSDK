#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetEquipNumInCurEquipConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMINCUREQUIPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D738110)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMINCUREQUIPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D738120)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMINCUREQUIPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7380D0)

namespace RPG::GameCore
{
	class GridFightParamGetEquipNumInCurEquipConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMINCUREQUIPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetEquipNumInCurEquipConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetEquipNumInCurEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMINCUREQUIPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetEquipNumInCurEquipConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetEquipNumInCurEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMINCUREQUIPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
