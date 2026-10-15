#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActAddMasterAffixByParamConfig; }

#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYPARAMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D699870)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYPARAMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D699880)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYPARAMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D699830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddMasterAffixByParamConfig_TypeDefinitionIndex = 19238;

	class FateActAddMasterAffixByParamConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYPARAMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddMasterAffixByParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddMasterAffixByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYPARAMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddMasterAffixByParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddMasterAffixByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYPARAMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
