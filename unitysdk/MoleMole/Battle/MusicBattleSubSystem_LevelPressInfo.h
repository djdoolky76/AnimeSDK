#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOLNLIBBDPK.h"
#include "unitysdk/MoleMole/Config/MusicBattleMarkerNodeType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_DOCHECKCLOSEEVADE_OFFSET UNITYSDK_OFFSET(0x1921B3F0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_DOCHECKOPENEVADE_OFFSET UNITYSDK_OFFSET(0x1921B280)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_DOCLOSEINPUT_OFFSET UNITYSDK_OFFSET(0x1921B4D0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_DOHINT_OFFSET UNITYSDK_OFFSET(0x1921B100)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_DOOPENINPUT_OFFSET UNITYSDK_OFFSET(0x1921B360)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_GETNEEDWAIT_OFFSET UNITYSDK_OFFSET(0x1921B0A0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1921AF10)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1921B560)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MusicBattleSubSystem_LevelPressInfo_TypeDefinitionIndex = 38889;

	class MusicBattleSubSystem_LevelPressInfo : public ::System::Object
	{
	public:
		::System::Double hintTime; // 0x10
		::System::Double perfectTime; // 0x18
		::System::Double recordClickTime; // 0x20
		::System::Double earliestCheckTime; // 0x28
		::System::Boolean needOpenEvadeInput; // 0x30
		::System::Boolean CheckedClose; // 0x31
		::System::Boolean CheckedOpen; // 0x32
		::System::Boolean needCloseEvadeInput; // 0x33
		::MoleMole::Config::MusicBattleMarkerNodeType nodeType; // 0x34
		::MoleMole::LogicButtonInputType inputType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO__CTOR_OFFSET))(this);
		}

		::GOLNLIBBDPK GetResult(::System::Double curTime, ::System::Single& waitTime)
		{
			return ((::GOLNLIBBDPK(*)(::PVOID, ::System::Double, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_GETRESULT_OFFSET))(this, curTime, waitTime);
		}

		::System::Boolean GetNeedWait(::System::Double curTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_GETNEEDWAIT_OFFSET))(this, curTime);
		}

		::System::Void DoHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_DOHINT_OFFSET))(this);
		}

		::System::Boolean DoCheckOpenEvade(::System::Double curTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_DOCHECKOPENEVADE_OFFSET))(this, curTime);
		}

		::System::Boolean DoCheckCloseEvade(::System::Double curTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_DOCHECKCLOSEEVADE_OFFSET))(this, curTime);
		}

		::System::Void DoOpenInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_DOOPENINPUT_OFFSET))(this);
		}

		::System::Void DoCloseInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_DOCLOSEINPUT_OFFSET))(this);
		}
	};
}
