#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_Heal; }

#define GAGMDLFLBBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F9BD0)
#define GAGMDLFLBBM_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C5F9BE0)

inline static constexpr unsigned int GAGMDLFLBBM_TypeDefinitionIndex = 36314;

	class GAGMDLFLBBM : public ::AJBKGPOEBFG
	{
	public:
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_Heal* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_Heal* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_Heal*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + GAGMDLFLBBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGMDLFLBBM_MLKLPMJEHPF_OFFSET))(this);
		}

	};
