#pragma once
#include "unitysdk/unitysdk.h"
class IFBFJDCECML;
class MLBALGOEPIB;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceFrontCatNumPredicateConfig; }

#define MLBALGOEPIB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C74EFC0)
#define MLBALGOEPIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C74F050)
#define MLBALGOEPIB_ISMATCHIMPL_OFFSET UNITYSDK_OFFSET(0x1C74F070)

inline static constexpr unsigned int MLBALGOEPIB_TypeDefinitionIndex = 37419;

	class MLBALGOEPIB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::CakeRaceFrontCatNumPredicateConfig* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceFrontCatNumPredicateConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + MLBALGOEPIB_CTOR_OFFSET))(this, a1, a2);
		}

		static ::MLBALGOEPIB* BPLPBPMEODA(::RPG::GameCore::CakeRaceFrontCatNumPredicateConfig* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::MLBALGOEPIB*(*)(::RPG::GameCore::CakeRaceFrontCatNumPredicateConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + MLBALGOEPIB_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Boolean IsMatchImpl(::IFBFJDCECML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + MLBALGOEPIB_ISMATCHIMPL_OFFSET))(this, a1);
		}

	};
