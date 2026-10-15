#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBattleLineupCharacterPreset; }

#define RPG_GAMECORE_RTBATTLELINEUPCHARACTERPRESET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4DF50)
#define RPG_GAMECORE_RTBATTLELINEUPCHARACTERPRESET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4DF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleLineupCharacterPreset_TypeDefinitionIndex = 18048;

	class RtBattleLineupCharacterPreset : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLELINEUPCHARACTERPRESET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleLineupCharacterPreset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleLineupCharacterPreset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLELINEUPCHARACTERPRESET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
