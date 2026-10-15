#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFNMPBPNBIF.h"
class EGDGOMKKEJI;
class GLPPDCIBMIH;
class IJFIHJJPHNA;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_SpecialEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFIOJDHJNBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C765580)
#define NFIOJDHJNBP_MIDKKNAGOFA_OFFSET UNITYSDK_OFFSET(0x1C765590)

inline static constexpr unsigned int NFIOJDHJNBP_TypeDefinitionIndex = 36382;

	class NFIOJDHJNBP : public ::IFNMPBPNBIF
	{
	public:
		::RPG::GameCore::DiceCombatDiceSelectorConfig_SpecialEffect* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_SpecialEffect* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_SpecialEffect*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + NFIOJDHJNBP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* MIDKKNAGOFA(::IJFIHJJPHNA* a1, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + NFIOJDHJNBP_MIDKKNAGOFA_OFFSET))(this, a1, a2);
		}

	};
