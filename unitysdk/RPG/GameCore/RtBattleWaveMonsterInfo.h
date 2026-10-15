#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBattleStageUnitInfo; }
namespace RPG::GameCore { class RtBattleWaveMonsterInfo; }

#define RPG_GAMECORE_RTBATTLEWAVEMONSTERINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA505F0)
#define RPG_GAMECORE_RTBATTLEWAVEMONSTERINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA50500)

namespace RPG::GameCore
{
	class RtBattleWaveMonsterInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RtBattleStageUnitInfo*>* SpawnList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEWAVEMONSTERINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleWaveMonsterInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleWaveMonsterInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEWAVEMONSTERINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
