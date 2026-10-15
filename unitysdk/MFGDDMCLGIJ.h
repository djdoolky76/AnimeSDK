#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint; }

#define MFGDDMCLGIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C74A720)
#define MFGDDMCLGIJ_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C74A730)

inline static constexpr unsigned int MFGDDMCLGIJ_TypeDefinitionIndex = 36308;

	class MFGDDMCLGIJ : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint* IGHAHBNLIJA; // 0x18
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + MFGDDMCLGIJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGDDMCLGIJ_MLKLPMJEHPF_OFFSET))(this);
		}

	};
