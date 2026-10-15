#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerBossSpecialEffect; }

#define BOIKLKGBAKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C59A740)
#define BOIKLKGBAKA_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C59A750)

inline static constexpr unsigned int BOIKLKGBAKA_TypeDefinitionIndex = 36304;

	class BOIKLKGBAKA : public ::AJBKGPOEBFG
	{
	public:
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_TriggerBossSpecialEffect* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TriggerBossSpecialEffect* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TriggerBossSpecialEffect*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + BOIKLKGBAKA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIKLKGBAKA_MLKLPMJEHPF_OFFSET))(this);
		}

	};
