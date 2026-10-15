#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_AttackEffect_CutinAnimation; }

#define CONILLPEMHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D7E40)
#define CONILLPEMHP_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C5D7E50)

inline static constexpr unsigned int CONILLPEMHP_TypeDefinitionIndex = 36307;

	class CONILLPEMHP : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_CutinAnimation* IGHAHBNLIJA; // 0x18
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_CutinAnimation* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_CutinAnimation*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + CONILLPEMHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONILLPEMHP_MLKLPMJEHPF_OFFSET))(this);
		}

	};
