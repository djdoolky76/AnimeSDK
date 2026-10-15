#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActAddMasterRandomReijuAffixConfig; }

#define RPG_GAMECORE_FATEACTADDMASTERRANDOMREIJUAFFIXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66BFD0)
#define RPG_GAMECORE_FATEACTADDMASTERRANDOMREIJUAFFIXCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66BFE0)
#define RPG_GAMECORE_FATEACTADDMASTERRANDOMREIJUAFFIXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66BF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddMasterRandomReijuAffixConfig_TypeDefinitionIndex = 19237;

	class FateActAddMasterRandomReijuAffixConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERRANDOMREIJUAFFIXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddMasterRandomReijuAffixConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddMasterRandomReijuAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERRANDOMREIJUAFFIXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddMasterRandomReijuAffixConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddMasterRandomReijuAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERRANDOMREIJUAFFIXCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
