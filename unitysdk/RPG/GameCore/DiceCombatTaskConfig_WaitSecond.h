#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_WaitSecond; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WAITSECOND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E6CF0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WAITSECOND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E6D00)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WAITSECOND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E6C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_WaitSecond_TypeDefinitionIndex = 16034;

	class DiceCombatTaskConfig_WaitSecond : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Single duration; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WAITSECOND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_WaitSecond* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_WaitSecond*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WAITSECOND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_WaitSecond* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_WaitSecond*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WAITSECOND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
