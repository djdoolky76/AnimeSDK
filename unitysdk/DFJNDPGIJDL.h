#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_InitOwedRollCount; }

#define DFJNDPGIJDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5DEE30)
#define DFJNDPGIJDL_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C5E8C60)

	class DFJNDPGIJDL : public ::AJBKGPOEBFG
	{
	public:
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_InitOwedRollCount* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_InitOwedRollCount* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_InitOwedRollCount*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + DFJNDPGIJDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJNDPGIJDL_MLKLPMJEHPF_OFFSET))(this);
		}

	};
