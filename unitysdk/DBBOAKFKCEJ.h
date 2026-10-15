#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOKFDBENEKJ.h"
#include "unitysdk/LOKFDBENEKJ_TriggerType.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenEffectSource.h"
class AENHJIPFJPA;
class MEJBGGBBDIC;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }

#define DBBOAKFKCEJ_APDGCDJFKFG_OFFSET UNITYSDK_OFFSET(0xDFCCF40)
#define DBBOAKFKCEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xDFCCF30)
#define DBBOAKFKCEJ_OLMFDADHOMP_OFFSET UNITYSDK_OFFSET(0xDFCCEE0)

inline static constexpr unsigned int DBBOAKFKCEJ_TypeDefinitionIndex = 75480;

	class DBBOAKFKCEJ : public ::LOKFDBENEKJ
	{
	public:
		::System::Void _ctor(::AENHJIPFJPA* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::AENHJIPFJPA*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource))((::PBYTE)hIl2Cpp + DBBOAKFKCEJ_CTOR_OFFSET))(this, a1, a2);
		}

		::LOKFDBENEKJ_TriggerType OLMFDADHOMP()
		{
			return ((::LOKFDBENEKJ_TriggerType(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBOAKFKCEJ_OLMFDADHOMP_OFFSET))(this);
		}

		::System::Void APDGCDJFKFG(::MEJBGGBBDIC* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MEJBGGBBDIC*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + DBBOAKFKCEJ_APDGCDJFKFG_OFFSET))(this, a1, a2);
		}

	};
