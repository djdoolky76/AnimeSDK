#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatTaskConfig_ShowBossPersistentTipsView; }

#define JMBDLBGKDIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D8420)
#define JMBDLBGKDIJ_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C6D8430)

inline static constexpr unsigned int JMBDLBGKDIJ_TypeDefinitionIndex = 36295;

	class JMBDLBGKDIJ : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_ShowBossPersistentTipsView* IGHAHBNLIJA; // 0x18
		::EGDGOMKKEJI* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ShowBossPersistentTipsView* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ShowBossPersistentTipsView*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + JMBDLBGKDIJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMBDLBGKDIJ_MLKLPMJEHPF_OFFSET))(this);
		}

	};
