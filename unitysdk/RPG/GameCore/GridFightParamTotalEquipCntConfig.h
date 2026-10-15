#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamTotalEquipCntConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMTOTALEQUIPCNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D738DD0)
#define RPG_GAMECORE_GRIDFIGHTPARAMTOTALEQUIPCNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D738DE0)
#define RPG_GAMECORE_GRIDFIGHTPARAMTOTALEQUIPCNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D738D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamTotalEquipCntConfig_TypeDefinitionIndex = 19516;

	class GridFightParamTotalEquipCntConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTOTALEQUIPCNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamTotalEquipCntConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamTotalEquipCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTOTALEQUIPCNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamTotalEquipCntConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamTotalEquipCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTOTALEQUIPCNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
