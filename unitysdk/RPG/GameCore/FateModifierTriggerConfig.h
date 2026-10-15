#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierTriggerConfig; }

#define RPG_GAMECORE_FATEMODIFIERTRIGGERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66E1D0)
#define RPG_GAMECORE_FATEMODIFIERTRIGGERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66E1E0)
#define RPG_GAMECORE_FATEMODIFIERTRIGGERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66E190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierTriggerConfig_TypeDefinitionIndex = 19258;

	class FateModifierTriggerConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERTRIGGERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierTriggerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierTriggerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERTRIGGERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierTriggerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierTriggerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERTRIGGERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
