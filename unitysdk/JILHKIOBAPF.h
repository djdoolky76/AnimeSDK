#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerDiceUpgrade; }

#define JILHKIOBAPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F96C0)
#define JILHKIOBAPF_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C6F96D0)

inline static constexpr unsigned int JILHKIOBAPF_TypeDefinitionIndex = 36329;

	class JILHKIOBAPF : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade* IGHAHBNLIJA; // 0x18
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + JILHKIOBAPF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILHKIOBAPF_MLKLPMJEHPF_OFFSET))(this);
		}

	};
