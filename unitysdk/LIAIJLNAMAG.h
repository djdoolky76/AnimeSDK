#pragma once
#include "unitysdk/unitysdk.h"
class IFBFJDCECML;
class LIAIJLNAMAG;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceHasComponentPredicateConfig; }

#define LIAIJLNAMAG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C6EEF20)
#define LIAIJLNAMAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C70E260)
#define LIAIJLNAMAG_ISMATCHIMPL_OFFSET UNITYSDK_OFFSET(0x1C70E280)

inline static constexpr unsigned int LIAIJLNAMAG_TypeDefinitionIndex = 37413;

	class LIAIJLNAMAG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::CakeRaceHasComponentPredicateConfig* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceHasComponentPredicateConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + LIAIJLNAMAG_CTOR_OFFSET))(this, a1, a2);
		}

		static ::LIAIJLNAMAG* BPLPBPMEODA(::RPG::GameCore::CakeRaceHasComponentPredicateConfig* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::LIAIJLNAMAG*(*)(::RPG::GameCore::CakeRaceHasComponentPredicateConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + LIAIJLNAMAG_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Boolean IsMatchImpl(::IFBFJDCECML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + LIAIJLNAMAG_ISMATCHIMPL_OFFSET))(this, a1);
		}

	};
