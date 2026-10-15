#pragma once
#include "unitysdk/unitysdk.h"
class DPOLOPAEONE;
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRacePropertyComparePredicateConfig; }

#define DPOLOPAEONE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C5FA7F0)
#define DPOLOPAEONE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FA880)
#define DPOLOPAEONE_ISMATCHIMPL_OFFSET UNITYSDK_OFFSET(0x1C5FA8A0)

inline static constexpr unsigned int DPOLOPAEONE_TypeDefinitionIndex = 37414;

	class DPOLOPAEONE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::CakeRacePropertyComparePredicateConfig* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRacePropertyComparePredicateConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + DPOLOPAEONE_CTOR_OFFSET))(this, a1, a2);
		}

		static ::DPOLOPAEONE* BPLPBPMEODA(::RPG::GameCore::CakeRacePropertyComparePredicateConfig* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::DPOLOPAEONE*(*)(::RPG::GameCore::CakeRacePropertyComparePredicateConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + DPOLOPAEONE_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Boolean IsMatchImpl(::IFBFJDCECML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + DPOLOPAEONE_ISMATCHIMPL_OFFSET))(this, a1);
		}

	};
