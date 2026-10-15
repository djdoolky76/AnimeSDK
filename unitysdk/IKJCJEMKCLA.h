#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EGDGOMKKEJI;
class IFNMPBPNBIF;
class LADCEAIPJIO;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkSkillDice; }

#define IKJCJEMKCLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6DD8C0)
#define IKJCJEMKCLA_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C6DD970)

inline static constexpr unsigned int IKJCJEMKCLA_TypeDefinitionIndex = 36293;

	class IKJCJEMKCLA : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice* IGHAHBNLIJA; // 0x18
		::LADCEAIPJIO* EEFMDEHLLFI; // 0x20
		::IFNMPBPNBIF* LMDHPABCOAB; // 0x28
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + IKJCJEMKCLA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJCJEMKCLA_MLKLPMJEHPF_OFFSET))(this);
		}

	};
