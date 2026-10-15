#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOKFDBENEKJ.h"
#include "unitysdk/LOKFDBENEKJ_TriggerType.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenEffectSource.h"
class AENHJIPFJPA;
class MEJBGGBBDIC;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }

#define PEMDBMABNMK_APDGCDJFKFG_OFFSET UNITYSDK_OFFSET(0xC1F3730)
#define PEMDBMABNMK_CTOR_OFFSET UNITYSDK_OFFSET(0xC1F3720)
#define PEMDBMABNMK_OLMFDADHOMP_OFFSET UNITYSDK_OFFSET(0xC1F36D0)

inline static constexpr unsigned int PEMDBMABNMK_TypeDefinitionIndex = 75483;

	class PEMDBMABNMK : public ::LOKFDBENEKJ
	{
	public:
		::System::Void _ctor(::AENHJIPFJPA* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::AENHJIPFJPA*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource))((::PBYTE)hIl2Cpp + PEMDBMABNMK_CTOR_OFFSET))(this, a1, a2);
		}

		::LOKFDBENEKJ_TriggerType OLMFDADHOMP()
		{
			return ((::LOKFDBENEKJ_TriggerType(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMDBMABNMK_OLMFDADHOMP_OFFSET))(this);
		}

		::System::Void APDGCDJFKFG(::MEJBGGBBDIC* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MEJBGGBBDIC*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + PEMDBMABNMK_APDGCDJFKFG_OFFSET))(this, a1, a2);
		}

	};
