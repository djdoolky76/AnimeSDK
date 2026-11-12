#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EGDGOMKKEJI;
class ENPEGNGIAEI;
namespace RPG::GameCore { class DiceCombatPredicateConfig; }

#define HHOHBHGLHHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E8C90)
#define HHOHBHGLHHF_FAPNDMMBKLN_OFFSET UNITYSDK_OFFSET(0x1D7E8F70)
#define HHOHBHGLHHF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1D7E8ED0)
#define HHOHBHGLHHF_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1D7E8CA0)

inline static constexpr unsigned int HHOHBHGLHHF_TypeDefinitionIndex = 37266;

	class HHOHBHGLHHF : public ::AJBKGPOEBFG
	{
	public:
		::EGDGOMKKEJI* EEFMDEHLLFI; // 0x18
		::ENPEGNGIAEI* HFOFIODMFGB; // 0x20
		::RPG::GameCore::DiceCombatPredicateConfig* IGHAHBNLIJA; // 0x28
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
