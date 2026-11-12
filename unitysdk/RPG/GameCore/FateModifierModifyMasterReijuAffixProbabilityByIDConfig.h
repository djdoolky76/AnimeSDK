#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierModifyMasterReijuAffixProbabilityByIDConfig; }

#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERREIJUAFFIXPROBABILITYBYIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A8170)
#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERREIJUAFFIXPROBABILITYBYIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8A8180)
#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERREIJUAFFIXPROBABILITYBYIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8A8130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierModifyMasterReijuAffixProbabilityByIDConfig_TypeDefinitionIndex = 19466;

	class FateModifierModifyMasterReijuAffixProbabilityByIDConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERREIJUAFFIXPROBABILITYBYIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierModifyMasterReijuAffixProbabilityByIDConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierModifyMasterReijuAffixProbabilityByIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERREIJUAFFIXPROBABILITYBYIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierModifyMasterReijuAffixProbabilityByIDConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierModifyMasterReijuAffixProbabilityByIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERREIJUAFFIXPROBABILITYBYIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
