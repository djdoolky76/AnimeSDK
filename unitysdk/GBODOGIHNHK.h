#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFNMPBPNBIF.h"
class EGDGOMKKEJI;
class GLPPDCIBMIH;
class IJFIHJJPHNA;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_RandomN; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GBODOGIHNHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FF590)
#define GBODOGIHNHK_MIDKKNAGOFA_OFFSET UNITYSDK_OFFSET(0x1C5FF5A0)

inline static constexpr unsigned int GBODOGIHNHK_TypeDefinitionIndex = 36389;

	class GBODOGIHNHK : public ::IFNMPBPNBIF
	{
	public:
		::RPG::GameCore::DiceCombatDiceSelectorConfig_RandomN* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_RandomN* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_RandomN*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + GBODOGIHNHK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* MIDKKNAGOFA(::IJFIHJJPHNA* a1, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + GBODOGIHNHK_MIDKKNAGOFA_OFFSET))(this, a1, a2);
		}

	};
