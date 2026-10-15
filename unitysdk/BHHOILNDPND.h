#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_ChangeLimitedDiceAvailableCount; }

#define BHHOILNDPND_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5BF210)
#define BHHOILNDPND_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C5BF220)

	class BHHOILNDPND : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_ChangeLimitedDiceAvailableCount* IGHAHBNLIJA; // 0x18
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ChangeLimitedDiceAvailableCount* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ChangeLimitedDiceAvailableCount*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + BHHOILNDPND_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHOILNDPND_MLKLPMJEHPF_OFFSET))(this);
		}

	};
