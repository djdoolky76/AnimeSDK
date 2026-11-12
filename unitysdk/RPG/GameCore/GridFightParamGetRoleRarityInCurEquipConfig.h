#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetRoleRarityInCurEquipConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLERARITYINCUREQUIPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E948070)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLERARITYINCUREQUIPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E948080)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLERARITYINCUREQUIPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E948030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetRoleRarityInCurEquipConfig_TypeDefinitionIndex = 19874;

	class GridFightParamGetRoleRarityInCurEquipConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLERARITYINCUREQUIPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetRoleRarityInCurEquipConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetRoleRarityInCurEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLERARITYINCUREQUIPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetRoleRarityInCurEquipConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetRoleRarityInCurEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLERARITYINCUREQUIPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
