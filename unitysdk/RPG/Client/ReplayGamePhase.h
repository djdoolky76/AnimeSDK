#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleGamePhase.h"
class AIALJPDDDKH;
class JJPEMHCBLHI;
class OEIGEPGAGNA;

#define RPG_CLIENT_REPLAYGAMEPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1974DC50)
#define RPG_CLIENT_REPLAYGAMEPHASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1974DD20)
#define RPG_CLIENT_REPLAYGAMEPHASE_ENTER_OFFSET UNITYSDK_OFFSET(0x1974DD90)
#define RPG_CLIENT_REPLAYGAMEPHASE_GET_ISREPLAYMODE_OFFSET UNITYSDK_OFFSET(0x1974E010)
#define RPG_CLIENT_REPLAYGAMEPHASE_GET_ISREPLAYOPFINISH_OFFSET UNITYSDK_OFFSET(0x1974E0B0)
#define RPG_CLIENT_REPLAYGAMEPHASE_GET__REPLAYOPEXECUTANT_OFFSET UNITYSDK_OFFSET(0x1974E050)
#define RPG_CLIENT_REPLAYGAMEPHASE_ONLEVELSNAPSHOTCHECKAHEAD_OFFSET UNITYSDK_OFFSET(0x1974DFB0)
#define RPG_CLIENT_REPLAYGAMEPHASE_TICK_OFFSET UNITYSDK_OFFSET(0x1974DE60)
#define RPG_CLIENT_REPLAYGAMEPHASE__LEVELTURNENDPROCESS_OFFSET UNITYSDK_OFFSET(0x1974DF10)

namespace RPG::Client
{
	inline static constexpr unsigned int ReplayGamePhase_TypeDefinitionIndex = 62591;

	class ReplayGamePhase : public ::RPG::Client::BattleGamePhase
	{
	public:
		::OEIGEPGAGNA* _Param; // 0x170
		::JJPEMHCBLHI* _BattleReplayInstance; // 0x178
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
