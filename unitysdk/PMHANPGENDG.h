#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EGDGOMKKEJI;
class IFNMPBPNBIF;
class LADCEAIPJIO;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkRecommendDice; }

#define PMHANPGENDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D976CD0)
#define PMHANPGENDG_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1D976D80)

inline static constexpr unsigned int PMHANPGENDG_TypeDefinitionIndex = 37218;

	class PMHANPGENDG : public ::AJBKGPOEBFG
	{
	public:
		::LADCEAIPJIO* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice* IGHAHBNLIJA; // 0x20
		::IFNMPBPNBIF* LMDHPABCOAB; // 0x28
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + PMHANPGENDG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHANPGENDG_MLKLPMJEHPF_OFFSET))(this);
		}

	};
