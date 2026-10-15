#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_TacticsEffect_AlignAttack; }

#define KBEOPMIGCAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C70A800)
#define KBEOPMIGCAD_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C70A810)

inline static constexpr unsigned int KBEOPMIGCAD_TypeDefinitionIndex = 36334;

	class KBEOPMIGCAD : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignAttack* IGHAHBNLIJA; // 0x18
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignAttack* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignAttack*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + KBEOPMIGCAD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEOPMIGCAD_MLKLPMJEHPF_OFFSET))(this);
		}

	};
