#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicCondScepterFilterConfig; }

#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x20773A70)
#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x20773A80)
#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x20773A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicCondScepterFilterConfig_TypeDefinitionIndex = 19911;

	class RogueMagicCondScepterFilterConfig : public ::RPG::GameCore::RogueMagicConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicCondScepterFilterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicCondScepterFilterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicCondScepterFilterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicCondScepterFilterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
