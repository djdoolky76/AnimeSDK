#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerEffect; }

#define GEGGCBAHNND_CTOR_OFFSET UNITYSDK_OFFSET(0x1C60C530)
#define GEGGCBAHNND_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C60C540)

inline static constexpr unsigned int GEGGCBAHNND_TypeDefinitionIndex = 36301;

	class GEGGCBAHNND : public ::AJBKGPOEBFG
	{
	public:
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_TriggerEffect* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TriggerEffect* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TriggerEffect*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + GEGGCBAHNND_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGGCBAHNND_MLKLPMJEHPF_OFFSET))(this);
		}

	};
