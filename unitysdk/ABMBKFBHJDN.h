#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIGLHBEPNOG.h"
class ABMBKFBHJDN;
class IFBFJDCECML;
class LBGIDBFBHEF;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceAbilityConfig; }

#define ABMBKFBHJDN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C580F70)
#define ABMBKFBHJDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C581020)
#define ABMBKFBHJDN_JDBBDLNMBCA_OFFSET UNITYSDK_OFFSET(0x1C581140)
#define ABMBKFBHJDN_JJJJGFJDKOJ_OFFSET UNITYSDK_OFFSET(0x1C581030)

inline static constexpr unsigned int ABMBKFBHJDN_TypeDefinitionIndex = 37364;

	class ABMBKFBHJDN : public ::KIGLHBEPNOG
	{
	public:
		::System::Void _ctor(::IFBFJDCECML* a1, ::RPG::GameCore::CakeRaceAbilityConfig* a2, ::PBGNKMMDBGD* a3, ::LBGIDBFBHEF* a4)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::RPG::GameCore::CakeRaceAbilityConfig*, ::PBGNKMMDBGD*, ::LBGIDBFBHEF*))((::PBYTE)hIl2Cpp + ABMBKFBHJDN_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::ABMBKFBHJDN* BPLPBPMEODA(::IFBFJDCECML* a1, ::RPG::GameCore::CakeRaceAbilityConfig* a2, ::PBGNKMMDBGD* a3, ::LBGIDBFBHEF* a4)
		{
			return ((::ABMBKFBHJDN*(*)(::IFBFJDCECML*, ::RPG::GameCore::CakeRaceAbilityConfig*, ::PBGNKMMDBGD*, ::LBGIDBFBHEF*))((::PBYTE)hIl2Cpp + ABMBKFBHJDN_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void JJJJGFJDKOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMBKFBHJDN_JJJJGFJDKOJ_OFFSET))(this);
		}

		::System::Void JDBBDLNMBCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMBKFBHJDN_JDBBDLNMBCA_OFFSET))(this);
		}

	};
