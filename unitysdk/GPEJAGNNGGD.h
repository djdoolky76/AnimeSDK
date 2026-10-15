#pragma once
#include "unitysdk/unitysdk.h"
class GPEJAGNNGGD;
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceBasePredicateConfig; }

#define GPEJAGNNGGD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C61DF60)
#define GPEJAGNNGGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C61DFF0)
#define GPEJAGNNGGD_ISMATCHIMPL_OFFSET UNITYSDK_OFFSET(0x1C61E010)

inline static constexpr unsigned int GPEJAGNNGGD_TypeDefinitionIndex = 37416;

	class GPEJAGNNGGD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::CakeRaceBasePredicateConfig* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceBasePredicateConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + GPEJAGNNGGD_CTOR_OFFSET))(this, a1, a2);
		}

		static ::GPEJAGNNGGD* BPLPBPMEODA(::RPG::GameCore::CakeRaceBasePredicateConfig* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::GPEJAGNNGGD*(*)(::RPG::GameCore::CakeRaceBasePredicateConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + GPEJAGNNGGD_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Boolean IsMatchImpl(::IFBFJDCECML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + GPEJAGNNGGD_ISMATCHIMPL_OFFSET))(this, a1);
		}

	};
