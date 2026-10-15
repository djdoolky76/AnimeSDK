#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll; }

#define BNMCHIKCPMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C8820)
#define BNMCHIKCPMB_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C5C8830)

	class BNMCHIKCPMB : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll* IGHAHBNLIJA; // 0x18
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + BNMCHIKCPMB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNMCHIKCPMB_MLKLPMJEHPF_OFFSET))(this);
		}

	};
