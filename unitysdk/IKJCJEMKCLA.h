#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EGDGOMKKEJI;
class IFNMPBPNBIF;
class LADCEAIPJIO;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkSkillDice; }

#define IKJCJEMKCLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6AF510)
#define IKJCJEMKCLA_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C6AF5C0)

inline static constexpr unsigned int IKJCJEMKCLA_TypeDefinitionIndex = 36293;

	class IKJCJEMKCLA : public ::AJBKGPOEBFG
	{
	public:
		::IFNMPBPNBIF* LMDHPABCOAB; // 0x18
		::LADCEAIPJIO* EEFMDEHLLFI; // 0x20
		::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice* IGHAHBNLIJA; // 0x28
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + IKJCJEMKCLA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJCJEMKCLA_MLKLPMJEHPF_OFFSET))(this);
		}

	};
