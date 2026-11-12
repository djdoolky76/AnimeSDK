#pragma once
#include "unitysdk/unitysdk.h"
class BKLADGIBPIN;
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceBasePredicateConfig; }

#define BKLADGIBPIN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1D741510)
#define BKLADGIBPIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7415A0)
#define BKLADGIBPIN_ISMATCHIMPL_OFFSET UNITYSDK_OFFSET(0x1D7415C0)

inline static constexpr unsigned int BKLADGIBPIN_TypeDefinitionIndex = 38338;

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
