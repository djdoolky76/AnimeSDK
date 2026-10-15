#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFNMPBPNBIF.h"
class EGDGOMKKEJI;
class GLPPDCIBMIH;
class IJFIHJJPHNA;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Seq; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OHGDLFOLHHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7CEB80)
#define OHGDLFOLHHG_MIDKKNAGOFA_OFFSET UNITYSDK_OFFSET(0x1C7CEB90)

inline static constexpr unsigned int OHGDLFOLHHG_TypeDefinitionIndex = 36379;

	class OHGDLFOLHHG : public ::IFNMPBPNBIF
	{
	public:
		::RPG::GameCore::DiceCombatDiceSelectorConfig_Seq* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_Seq* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Seq*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + OHGDLFOLHHG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* MIDKKNAGOFA(::IJFIHJJPHNA* a1, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + OHGDLFOLHHG_MIDKKNAGOFA_OFFSET))(this, a1, a2);
		}

	};
