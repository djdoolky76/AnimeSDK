#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFNMPBPNBIF.h"
class EGDGOMKKEJI;
class GLPPDCIBMIH;
class IJFIHJJPHNA;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Union; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KIEPGODFCPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E1530)
#define KIEPGODFCPG_MIDKKNAGOFA_OFFSET UNITYSDK_OFFSET(0x1C6E1540)

inline static constexpr unsigned int KIEPGODFCPG_TypeDefinitionIndex = 36386;

	class KIEPGODFCPG : public ::IFNMPBPNBIF
	{
	public:
		::RPG::GameCore::DiceCombatDiceSelectorConfig_Union* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_Union* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Union*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + KIEPGODFCPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* MIDKKNAGOFA(::IJFIHJJPHNA* a1, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + KIEPGODFCPG_MIDKKNAGOFA_OFFSET))(this, a1, a2);
		}

	};
