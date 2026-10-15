#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_AttackEffect_Cutin; }

#define FPFGMNODBEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C627D40)
#define FPFGMNODBEK_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C627D50)

inline static constexpr unsigned int FPFGMNODBEK_TypeDefinitionIndex = 36306;

	class FPFGMNODBEK : public ::AJBKGPOEBFG
	{
	public:
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_Cutin* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_Cutin* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_Cutin*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + FPFGMNODBEK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFGMNODBEK_MLKLPMJEHPF_OFFSET))(this);
		}

	};
