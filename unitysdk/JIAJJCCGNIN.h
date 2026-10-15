#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_InitExtraColorDice; }

#define JIAJJCCGNIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F51C0)
#define JIAJJCCGNIN_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C6F51D0)

	class JIAJJCCGNIN : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_InitExtraColorDice* IGHAHBNLIJA; // 0x18
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_InitExtraColorDice* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_InitExtraColorDice*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + JIAJJCCGNIN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAJJCCGNIN_MLKLPMJEHPF_OFFSET))(this);
		}

	};
