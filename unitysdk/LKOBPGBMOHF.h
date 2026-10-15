#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerSkillHint; }

#define LKOBPGBMOHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C70EA70)
#define LKOBPGBMOHF_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C70EA80)

inline static constexpr unsigned int LKOBPGBMOHF_TypeDefinitionIndex = 36303;

	class LKOBPGBMOHF : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillHint* IGHAHBNLIJA; // 0x18
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillHint* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillHint*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + LKOBPGBMOHF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKOBPGBMOHF_MLKLPMJEHPF_OFFSET))(this);
		}

	};
