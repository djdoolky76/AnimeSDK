#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetUseOrbNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D738C50)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D738C60)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D738C10)

namespace RPG::GameCore
{
	class GridFightParamGetUseOrbNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetUseOrbNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetUseOrbNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetUseOrbNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetUseOrbNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
