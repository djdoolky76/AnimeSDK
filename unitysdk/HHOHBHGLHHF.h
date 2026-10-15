#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EGDGOMKKEJI;
class ENPEGNGIAEI;
namespace RPG::GameCore { class DiceCombatPredicateConfig; }

#define HHOHBHGLHHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C638C90)
#define HHOHBHGLHHF_FAPNDMMBKLN_OFFSET UNITYSDK_OFFSET(0x1C638F70)
#define HHOHBHGLHHF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C638ED0)
#define HHOHBHGLHHF_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C638CA0)

inline static constexpr unsigned int HHOHBHGLHHF_TypeDefinitionIndex = 36338;

	class HHOHBHGLHHF : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig* IGHAHBNLIJA; // 0x18
		::EGDGOMKKEJI* EEFMDEHLLFI; // 0x20
		::ENPEGNGIAEI* HFOFIODMFGB; // 0x28
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + HHOHBHGLHHF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOHBHGLHHF_MLKLPMJEHPF_OFFSET))(this);
		}

		::System::Void FAPNDMMBKLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOHBHGLHHF_FAPNDMMBKLN_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HHOHBHGLHHF_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
