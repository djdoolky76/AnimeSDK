#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_IsAttacker; }

#define CKBMBEHPFGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A7F60)
#define CKBMBEHPFGB_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C5A7F80)

inline static constexpr unsigned int CKBMBEHPFGB_TypeDefinitionIndex = 36348;

	class CKBMBEHPFGB : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_IsAttacker* IEKNLLHCNLP; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_IsAttacker* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_IsAttacker*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + CKBMBEHPFGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBMBEHPFGB_KFGJEKJHIMB_OFFSET))(this);
		}

	};
