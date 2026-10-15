#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetTraitActiveNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITACTIVENUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D738B90)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITACTIVENUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D738BA0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITACTIVENUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D738B50)

namespace RPG::GameCore
{
	class GridFightParamGetTraitActiveNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITACTIVENUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetTraitActiveNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetTraitActiveNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITACTIVENUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetTraitActiveNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetTraitActiveNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITACTIVENUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
