#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetCurSectionConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURSECTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D737F90)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURSECTIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D737FA0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURSECTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D737F50)

namespace RPG::GameCore
{
	class GridFightParamGetCurSectionConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURSECTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetCurSectionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetCurSectionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURSECTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetCurSectionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetCurSectionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURSECTIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
