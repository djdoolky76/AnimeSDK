#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_BossChangePhase; }

#define OOBKLABGHFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7E4160)
#define OOBKLABGHFP_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C7E4170)

	class OOBKLABGHFP : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_BossChangePhase* IGHAHBNLIJA; // 0x18
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_BossChangePhase* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_BossChangePhase*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + OOBKLABGHFP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBKLABGHFP_MLKLPMJEHPF_OFFSET))(this);
		}

	};
