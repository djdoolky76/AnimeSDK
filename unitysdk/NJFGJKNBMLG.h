#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue_DiceCountAfterSelect; }

#define NJFGJKNBMLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D91BF10)
#define NJFGJKNBMLG_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1D91BF20)

inline static constexpr unsigned int NJFGJKNBMLG_TypeDefinitionIndex = 37299;

	class NJFGJKNBMLG : public ::AJBKGPOEBFG
	{
	public:
		::EGDGOMKKEJI* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_DiceCountAfterSelect* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_DiceCountAfterSelect* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_DiceCountAfterSelect*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + NJFGJKNBMLG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFGJKNBMLG_MLKLPMJEHPF_OFFSET))(this);
		}

	};
