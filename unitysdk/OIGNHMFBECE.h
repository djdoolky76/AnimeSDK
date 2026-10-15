#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOKFDBENEKJ.h"
#include "unitysdk/LOKFDBENEKJ_TriggerType.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenEffectSource.h"
class AENHJIPFJPA;
class MEJBGGBBDIC;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }

#define OIGNHMFBECE_APDGCDJFKFG_OFFSET UNITYSDK_OFFSET(0xBE89FD0)
#define OIGNHMFBECE_CTOR_OFFSET UNITYSDK_OFFSET(0xBE89FC0)
#define OIGNHMFBECE_OLMFDADHOMP_OFFSET UNITYSDK_OFFSET(0xBE89F70)

inline static constexpr unsigned int OIGNHMFBECE_TypeDefinitionIndex = 75485;

	class OIGNHMFBECE : public ::LOKFDBENEKJ
	{
	public:
		::System::Void _ctor(::AENHJIPFJPA* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::AENHJIPFJPA*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource))((::PBYTE)hIl2Cpp + OIGNHMFBECE_CTOR_OFFSET))(this, a1, a2);
		}

		::LOKFDBENEKJ_TriggerType OLMFDADHOMP()
		{
			return ((::LOKFDBENEKJ_TriggerType(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGNHMFBECE_OLMFDADHOMP_OFFSET))(this);
		}

		::System::Void APDGCDJFKFG(::MEJBGGBBDIC* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MEJBGGBBDIC*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + OIGNHMFBECE_APDGCDJFKFG_OFFSET))(this, a1, a2);
		}

	};
