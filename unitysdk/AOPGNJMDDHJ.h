#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_AddModifier; }

#define AOPGNJMDDHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D723CB0)
#define AOPGNJMDDHJ_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1D723CC0)

inline static constexpr unsigned int AOPGNJMDDHJ_TypeDefinitionIndex = 37226;

	class AOPGNJMDDHJ : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_AddModifier* IGHAHBNLIJA; // 0x18
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AddModifier* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AddModifier*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + AOPGNJMDDHJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPGNJMDDHJ_MLKLPMJEHPF_OFFSET))(this);
		}

	};
