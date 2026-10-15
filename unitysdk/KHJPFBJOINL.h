#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_TacticsEffect_AlignDefend; }

#define KHJPFBJOINL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C70F4D0)
#define KHJPFBJOINL_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C70F4E0)

	class KHJPFBJOINL : public ::AJBKGPOEBFG
	{
	public:
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignDefend* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignDefend* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignDefend*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + KHJPFBJOINL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJPFBJOINL_MLKLPMJEHPF_OFFSET))(this);
		}

	};
