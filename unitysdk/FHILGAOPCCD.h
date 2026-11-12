#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerSkillCutin; }

#define FHILGAOPCCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D75F9B0)
#define FHILGAOPCCD_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1D79BB80)

inline static constexpr unsigned int FHILGAOPCCD_TypeDefinitionIndex = 37230;

	class FHILGAOPCCD : public ::AJBKGPOEBFG
	{
	public:
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + FHILGAOPCCD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHILGAOPCCD_MLKLPMJEHPF_OFFSET))(this);
		}

	};
