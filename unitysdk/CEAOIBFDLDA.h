#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOKFDBENEKJ.h"
#include "unitysdk/LOKFDBENEKJ_TriggerType.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenEffectSource.h"
class AENHJIPFJPA;
class MEJBGGBBDIC;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }

#define CEAOIBFDLDA_APDGCDJFKFG_OFFSET UNITYSDK_OFFSET(0xC77AEC0)
#define CEAOIBFDLDA_CTOR_OFFSET UNITYSDK_OFFSET(0xC77AEB0)
#define CEAOIBFDLDA_OLMFDADHOMP_OFFSET UNITYSDK_OFFSET(0xC77AE60)

inline static constexpr unsigned int CEAOIBFDLDA_TypeDefinitionIndex = 75482;

	class CEAOIBFDLDA : public ::LOKFDBENEKJ
	{
	public:
		::System::Void _ctor(::AENHJIPFJPA* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::AENHJIPFJPA*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource))((::PBYTE)hIl2Cpp + CEAOIBFDLDA_CTOR_OFFSET))(this, a1, a2);
		}

		::LOKFDBENEKJ_TriggerType OLMFDADHOMP()
		{
			return ((::LOKFDBENEKJ_TriggerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAOIBFDLDA_OLMFDADHOMP_OFFSET))(this);
		}

		::System::Void APDGCDJFKFG(::MEJBGGBBDIC* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MEJBGGBBDIC*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + CEAOIBFDLDA_APDGCDJFKFG_OFFSET))(this, a1, a2);
		}

	};
