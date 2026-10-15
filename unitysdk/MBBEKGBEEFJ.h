#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIGLHBEPNOG.h"
class IFBFJDCECML;
class LBGIDBFBHEF;
class MBBEKGBEEFJ;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceAbilityConfig; }

#define MBBEKGBEEFJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C6DDBA0)
#define MBBEKGBEEFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C719930)

inline static constexpr unsigned int MBBEKGBEEFJ_TypeDefinitionIndex = 37362;

	class MBBEKGBEEFJ : public ::KIGLHBEPNOG
	{
	public:
		::System::Void _ctor(::IFBFJDCECML* a1, ::RPG::GameCore::CakeRaceAbilityConfig* a2, ::PBGNKMMDBGD* a3, ::LBGIDBFBHEF* a4)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::RPG::GameCore::CakeRaceAbilityConfig*, ::PBGNKMMDBGD*, ::LBGIDBFBHEF*))((::PBYTE)hIl2Cpp + MBBEKGBEEFJ_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::MBBEKGBEEFJ* BPLPBPMEODA(::IFBFJDCECML* a1, ::RPG::GameCore::CakeRaceAbilityConfig* a2, ::PBGNKMMDBGD* a3, ::LBGIDBFBHEF* a4)
		{
			return ((::MBBEKGBEEFJ*(*)(::IFBFJDCECML*, ::RPG::GameCore::CakeRaceAbilityConfig*, ::PBGNKMMDBGD*, ::LBGIDBFBHEF*))((::PBYTE)hIl2Cpp + MBBEKGBEEFJ_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

	};
