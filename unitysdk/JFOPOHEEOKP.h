#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_AttackEffect_Cutout; }

#define JFOPOHEEOKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C6C00)
#define JFOPOHEEOKP_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C6C6C10)

inline static constexpr unsigned int JFOPOHEEOKP_TypeDefinitionIndex = 36310;

	class JFOPOHEEOKP : public ::AJBKGPOEBFG
	{
	public:
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_Cutout* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_Cutout* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_Cutout*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + JFOPOHEEOKP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOPOHEEOKP_MLKLPMJEHPF_OFFSET))(this);
		}

	};
