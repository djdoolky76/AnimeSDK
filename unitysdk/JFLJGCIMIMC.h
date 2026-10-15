#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue_ModifierStackCount; }

#define JFLJGCIMIMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F4AC0)
#define JFLJGCIMIMC_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C6F4AD0)

inline static constexpr unsigned int JFLJGCIMIMC_TypeDefinitionIndex = 36366;

	class JFLJGCIMIMC : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierStackCount* IGHAHBNLIJA; // 0x18
		::EGDGOMKKEJI* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierStackCount* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierStackCount*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + JFLJGCIMIMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLJGCIMIMC_MLKLPMJEHPF_OFFSET))(this);
		}

	};
