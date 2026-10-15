#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkBossForceChangePhaseFlag; }

#define HIFBACKJOHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C667690)
#define HIFBACKJOHL_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C6676A0)

inline static constexpr unsigned int HIFBACKJOHL_TypeDefinitionIndex = 36331;

	class HIFBACKJOHL : public ::AJBKGPOEBFG
	{
	public:
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_MarkBossForceChangePhaseFlag* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_MarkBossForceChangePhaseFlag* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_MarkBossForceChangePhaseFlag*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + HIFBACKJOHL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFBACKJOHL_MLKLPMJEHPF_OFFSET))(this);
		}

	};
