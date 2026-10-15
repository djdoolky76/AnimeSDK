#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_StackAdditiveProperty; }

#define OIFCFPFGOGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7CFA50)
#define OIFCFPFGOGJ_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C7CFA60)

	class OIFCFPFGOGJ : public ::AJBKGPOEBFG
	{
	public:
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_StackAdditiveProperty* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_StackAdditiveProperty* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_StackAdditiveProperty*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + OIFCFPFGOGJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFCFPFGOGJ_MLKLPMJEHPF_OFFSET))(this);
		}

	};
