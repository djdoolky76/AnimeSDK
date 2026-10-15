#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BattleGamePhase; }

#define IDOFDGLMMPD___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15EE1610)
#define IDOFDGLMMPD___C__DISPLAYCLASS2_0__PHASEEXIT_B__0_OFFSET UNITYSDK_OFFSET(0x15EE2980)

	class IDOFDGLMMPD___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::BattleGamePhase* battleGamePhase; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOFDGLMMPD___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void _PhaseExit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOFDGLMMPD___C__DISPLAYCLASS2_0__PHASEEXIT_B__0_OFFSET))(this);
		}

	};
