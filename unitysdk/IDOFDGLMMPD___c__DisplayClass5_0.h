#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDOFDGLMMPD;
namespace RPG::Client { class BattleGamePhase; }

#define IDOFDGLMMPD___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15ED60F0)
#define IDOFDGLMMPD___C__DISPLAYCLASS5_0___MEMORYPHASEEXIT_B__0_OFFSET UNITYSDK_OFFSET(0x15ED6A30)

inline static constexpr unsigned int IDOFDGLMMPD___c__DisplayClass5_0_TypeDefinitionIndex = 61181;

	class IDOFDGLMMPD___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::BattleGamePhase* battleGamePhase; // 0x10
		::IDOFDGLMMPD* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOFDGLMMPD___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void __MemoryPhaseExit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOFDGLMMPD___C__DISPLAYCLASS5_0___MEMORYPHASEEXIT_B__0_OFFSET))(this);
		}

	};
