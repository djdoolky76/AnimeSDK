#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_InitOwedRollCount; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INITOWEDROLLCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D612280)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INITOWEDROLLCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D612290)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INITOWEDROLLCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D612190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_InitOwedRollCount_TypeDefinitionIndex = 16054;

	class DiceCombatTaskConfig_InitOwedRollCount : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* MaxOwedRollCount; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INITOWEDROLLCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_InitOwedRollCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_InitOwedRollCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INITOWEDROLLCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_InitOwedRollCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_InitOwedRollCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INITOWEDROLLCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
