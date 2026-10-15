#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetUnlockExpertNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETUNLOCKEXPERTNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D70B160)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETUNLOCKEXPERTNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D70B170)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETUNLOCKEXPERTNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D70B120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetUnlockExpertNumConfig_TypeDefinitionIndex = 19550;

	class GridFightParamGetUnlockExpertNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETUNLOCKEXPERTNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetUnlockExpertNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetUnlockExpertNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETUNLOCKEXPERTNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetUnlockExpertNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetUnlockExpertNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETUNLOCKEXPERTNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
