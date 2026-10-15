#pragma once
#include "unitysdk/unitysdk.h"
class AJFCABOOKCA;
class IFBFJDCECML;
class IKCPDHOPBLA;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceAndPredicateConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IKCPDHOPBLA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C6AE6A0)
#define IKCPDHOPBLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6AE7A0)
#define IKCPDHOPBLA_ISMATCHIMPL_OFFSET UNITYSDK_OFFSET(0x1C6AE820)

inline static constexpr unsigned int IKCPDHOPBLA_TypeDefinitionIndex = 37412;

	class IKCPDHOPBLA
	{
	public:
		::System::Collections::Generic::List_1<::AJFCABOOKCA*>* HBIMCDKJMMG; // 0x20
		::System::Void _ctor(::RPG::GameCore::CakeRaceAndPredicateConfig* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceAndPredicateConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + IKCPDHOPBLA_CTOR_OFFSET))(this, a1, a2);
		}

		static ::IKCPDHOPBLA* BPLPBPMEODA(::RPG::GameCore::CakeRaceAndPredicateConfig* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::IKCPDHOPBLA*(*)(::RPG::GameCore::CakeRaceAndPredicateConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + IKCPDHOPBLA_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Boolean IsMatchImpl(::IFBFJDCECML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + IKCPDHOPBLA_ISMATCHIMPL_OFFSET))(this, a1);
		}

	};
