#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D607000)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D610750)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6106F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TypeDefinitionIndex = 16033;

	class DiceCombatTaskConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
