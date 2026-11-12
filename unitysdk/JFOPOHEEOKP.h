#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_AttackEffect_Cutout; }

#define JFOPOHEEOKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D876930)
#define JFOPOHEEOKP_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1D876940)

inline static constexpr unsigned int JFOPOHEEOKP_TypeDefinitionIndex = 37238;

	class JFOPOHEEOKP : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_Cutout* IGHAHBNLIJA; // 0x18
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_Cutout* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_Cutout*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + JFOPOHEEOKP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOPOHEEOKP_MLKLPMJEHPF_OFFSET))(this);
		}

	};
