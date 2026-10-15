#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap; }

#define HHGKMECFJHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C666C60)
#define HHGKMECFJHH_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C666C70)

	class HHGKMECFJHH : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap* IGHAHBNLIJA; // 0x18
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + HHGKMECFJHH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGKMECFJHH_MLKLPMJEHPF_OFFSET))(this);
		}

	};
