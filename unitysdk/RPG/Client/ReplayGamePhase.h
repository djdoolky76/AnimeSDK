#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleGamePhase.h"
class AIALJPDDDKH;
class JJPEMHCBLHI;
class OEIGEPGAGNA;

#define RPG_CLIENT_REPLAYGAMEPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0xDEB90E0)
#define RPG_CLIENT_REPLAYGAMEPHASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDEB91B0)
#define RPG_CLIENT_REPLAYGAMEPHASE_ENTER_OFFSET UNITYSDK_OFFSET(0xDEB9220)
#define RPG_CLIENT_REPLAYGAMEPHASE_GET_ISREPLAYMODE_OFFSET UNITYSDK_OFFSET(0xDEB94A0)
#define RPG_CLIENT_REPLAYGAMEPHASE_GET_ISREPLAYOPFINISH_OFFSET UNITYSDK_OFFSET(0xDEB9540)
#define RPG_CLIENT_REPLAYGAMEPHASE_GET__REPLAYOPEXECUTANT_OFFSET UNITYSDK_OFFSET(0xDEB94E0)
#define RPG_CLIENT_REPLAYGAMEPHASE_ONLEVELSNAPSHOTCHECKAHEAD_OFFSET UNITYSDK_OFFSET(0xDEB9440)
#define RPG_CLIENT_REPLAYGAMEPHASE_TICK_OFFSET UNITYSDK_OFFSET(0xDEB92F0)
#define RPG_CLIENT_REPLAYGAMEPHASE__LEVELTURNENDPROCESS_OFFSET UNITYSDK_OFFSET(0xDEB93A0)

namespace RPG::Client
{
	class ReplayGamePhase : public ::RPG::Client::BattleGamePhase
	{
	public:
		::OEIGEPGAGNA* _Param; // 0x168
		::JJPEMHCBLHI* _BattleReplayInstance; // 0x170
		::System::Void _ctor(::OEIGEPGAGNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEIGEPGAGNA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYGAMEPHASE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYGAMEPHASE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYGAMEPHASE_ENTER_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYGAMEPHASE_TICK_OFFSET))(this, a1);
		}

		::System::Void _LevelTurnEndProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYGAMEPHASE__LEVELTURNENDPROCESS_OFFSET))(this);
		}

		::System::Void OnLevelSnapshotCheckAhead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYGAMEPHASE_ONLEVELSNAPSHOTCHECKAHEAD_OFFSET))(this);
		}

		::System::Boolean get_IsReplayMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYGAMEPHASE_GET_ISREPLAYMODE_OFFSET))(this);
		}

		::AIALJPDDDKH* get__ReplayOpExecutant()
		{
			return ((::AIALJPDDDKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYGAMEPHASE_GET__REPLAYOPEXECUTANT_OFFSET))(this);
		}

		::System::Boolean get_IsReplayOpFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYGAMEPHASE_GET_ISREPLAYOPFINISH_OFFSET))(this);
		}

	};
}
