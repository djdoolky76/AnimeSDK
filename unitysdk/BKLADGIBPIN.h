#pragma once
#include "unitysdk/unitysdk.h"
class BKLADGIBPIN;
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceBasePredicateConfig; }

#define BKLADGIBPIN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C5BFC80)
#define BKLADGIBPIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5BFD10)
#define BKLADGIBPIN_ISMATCHIMPL_OFFSET UNITYSDK_OFFSET(0x1C5BFD30)

	class BKLADGIBPIN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::CakeRaceBasePredicateConfig* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceBasePredicateConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + BKLADGIBPIN_CTOR_OFFSET))(this, a1, a2);
		}

		static ::BKLADGIBPIN* BPLPBPMEODA(::RPG::GameCore::CakeRaceBasePredicateConfig* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::BKLADGIBPIN*(*)(::RPG::GameCore::CakeRaceBasePredicateConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + BKLADGIBPIN_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Boolean IsMatchImpl(::IFBFJDCECML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + BKLADGIBPIN_ISMATCHIMPL_OFFSET))(this, a1);
		}

	};
