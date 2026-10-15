#pragma once
#include "unitysdk/unitysdk.h"
class IFBFJDCECML;
class MJCNAHMBEFH;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceGamePropertyComparePredicateConfig; }

#define MJCNAHMBEFH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C71EC50)
#define MJCNAHMBEFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C71ECE0)
#define MJCNAHMBEFH_ISMATCHIMPL_OFFSET UNITYSDK_OFFSET(0x1C71ED00)

inline static constexpr unsigned int MJCNAHMBEFH_TypeDefinitionIndex = 37415;

	class MJCNAHMBEFH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::CakeRaceGamePropertyComparePredicateConfig* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceGamePropertyComparePredicateConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + MJCNAHMBEFH_CTOR_OFFSET))(this, a1, a2);
		}

		static ::MJCNAHMBEFH* BPLPBPMEODA(::RPG::GameCore::CakeRaceGamePropertyComparePredicateConfig* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::MJCNAHMBEFH*(*)(::RPG::GameCore::CakeRaceGamePropertyComparePredicateConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + MJCNAHMBEFH_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Boolean IsMatchImpl(::IFBFJDCECML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + MJCNAHMBEFH_ISMATCHIMPL_OFFSET))(this, a1);
		}

	};
