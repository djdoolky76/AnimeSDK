#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatPredicateConfig_ModifierAdditivePropertyCompare; }

#define EEMCFPJAFEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5DF7B0)
#define EEMCFPJAFEG_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C5FB540)

inline static constexpr unsigned int EEMCFPJAFEG_TypeDefinitionIndex = 36323;

	class EEMCFPJAFEG : public ::HHOHBHGLHHF
	{
	public:
		::EHMBINMCDGN* JFBABKALCPJ; // 0x30
		::RPG::GameCore::DiceCombatPredicateConfig_ModifierAdditivePropertyCompare* KGKOAFLCCAC; // 0x38
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_ModifierAdditivePropertyCompare* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_ModifierAdditivePropertyCompare*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + EEMCFPJAFEG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMCFPJAFEG_KFGJEKJHIMB_OFFSET))(this);
		}

	};
