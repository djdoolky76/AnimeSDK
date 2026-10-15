#pragma once
#include "unitysdk/unitysdk.h"
class AEDIDMLGBGE;
class AJFCABOOKCA;
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceOrPredicateConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AEDIDMLGBGE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C553300)
#define AEDIDMLGBGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C553400)
#define AEDIDMLGBGE_ISMATCHIMPL_OFFSET UNITYSDK_OFFSET(0x1C553480)

inline static constexpr unsigned int AEDIDMLGBGE_TypeDefinitionIndex = 37411;

	class AEDIDMLGBGE
	{
	public:
		::System::Collections::Generic::List_1<::AJFCABOOKCA*>* HBIMCDKJMMG; // 0x20
		::System::Void _ctor(::RPG::GameCore::CakeRaceOrPredicateConfig* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceOrPredicateConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + AEDIDMLGBGE_CTOR_OFFSET))(this, a1, a2);
		}

		static ::AEDIDMLGBGE* BPLPBPMEODA(::RPG::GameCore::CakeRaceOrPredicateConfig* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::AEDIDMLGBGE*(*)(::RPG::GameCore::CakeRaceOrPredicateConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + AEDIDMLGBGE_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Boolean IsMatchImpl(::IFBFJDCECML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + AEDIDMLGBGE_ISMATCHIMPL_OFFSET))(this, a1);
		}

	};
