#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityTaskConfig; }

#define RPG_GAMECORE_BASELITTLEGAMEABILITYTASKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D411780)
#define RPG_GAMECORE_BASELITTLEGAMEABILITYTASKCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4116C0)
#define RPG_GAMECORE_BASELITTLEGAMEABILITYTASKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D410B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseLittleGameAbilityTaskConfig_TypeDefinitionIndex = 21392;

	class BaseLittleGameAbilityTaskConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELITTLEGAMEABILITYTASKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseLittleGameAbilityTaskConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseLittleGameAbilityTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELITTLEGAMEABILITYTASKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseLittleGameAbilityTaskConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseLittleGameAbilityTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELITTLEGAMEABILITYTASKCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
