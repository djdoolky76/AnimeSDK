#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetAdditionalTraitRoleStarConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETADDITIONALTRAITROLESTARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BE920)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETADDITIONALTRAITROLESTARCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BE930)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETADDITIONALTRAITROLESTARCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BE8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetAdditionalTraitRoleStarConfig_TypeDefinitionIndex = 19882;

	class GridFightParamGetAdditionalTraitRoleStarConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETADDITIONALTRAITROLESTARCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetAdditionalTraitRoleStarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetAdditionalTraitRoleStarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETADDITIONALTRAITROLESTARCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetAdditionalTraitRoleStarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetAdditionalTraitRoleStarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETADDITIONALTRAITROLESTARCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
