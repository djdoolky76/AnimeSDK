#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue_EntityData; }

#define HNJMJBHDOGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C677210)
#define HNJMJBHDOGK_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C677220)

inline static constexpr unsigned int HNJMJBHDOGK_TypeDefinitionIndex = 36368;

	class HNJMJBHDOGK : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_EntityData* IGHAHBNLIJA; // 0x18
		::EGDGOMKKEJI* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_EntityData* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_EntityData*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + HNJMJBHDOGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJMJBHDOGK_MLKLPMJEHPF_OFFSET))(this);
		}

	};
