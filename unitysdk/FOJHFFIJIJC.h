#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_ChallengerRevival; }

#define FOJHFFIJIJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A8150)
#define FOJHFFIJIJC_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1D7A8160)

inline static constexpr unsigned int FOJHFFIJIJC_TypeDefinitionIndex = 37260;

	class FOJHFFIJIJC : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_ChallengerRevival* IGHAHBNLIJA; // 0x18
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ChallengerRevival* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ChallengerRevival*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + FOJHFFIJIJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJHFFIJIJC_MLKLPMJEHPF_OFFSET))(this);
		}

	};
