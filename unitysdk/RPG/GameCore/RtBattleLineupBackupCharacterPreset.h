#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBattleLineupBackupCharacterPreset; }

#define RPG_GAMECORE_RTBATTLELINEUPBACKUPCHARACTERPRESET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4DF00)
#define RPG_GAMECORE_RTBATTLELINEUPBACKUPCHARACTERPRESET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4DEC0)

namespace RPG::GameCore
{
	class RtBattleLineupBackupCharacterPreset : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLELINEUPBACKUPCHARACTERPRESET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleLineupBackupCharacterPreset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleLineupBackupCharacterPreset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLELINEUPBACKUPCHARACTERPRESET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
