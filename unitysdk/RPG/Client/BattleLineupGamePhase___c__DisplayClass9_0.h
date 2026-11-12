#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEIGEPGAGNA;

#define RPG_CLIENT_BATTLELINEUPGAMEPHASE___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD1A4630)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE___C__DISPLAYCLASS9_0___ENTERREPLAYWITHMAZEINFONEXTFRAME_B__0_OFFSET UNITYSDK_OFFSET(0xD1A4640)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleLineupGamePhase___c__DisplayClass9_0_TypeDefinitionIndex = 62363;

	class BattleLineupGamePhase___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::OEIGEPGAGNA* _Params; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Void __EnterReplayWithMazeInfoNextFrame_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE___C__DISPLAYCLASS9_0___ENTERREPLAYWITHMAZEINFONEXTFRAME_B__0_OFFSET))(this);
		}

	};
}
