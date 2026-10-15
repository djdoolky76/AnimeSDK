#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetAugmentNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETAUGMENTNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D737CE0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETAUGMENTNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D737CF0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETAUGMENTNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D737CA0)

namespace RPG::GameCore
{
	class GridFightParamGetAugmentNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETAUGMENTNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetAugmentNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetAugmentNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETAUGMENTNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetAugmentNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetAugmentNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETAUGMENTNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
