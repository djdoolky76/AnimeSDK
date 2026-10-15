#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFNMPBPNBIF.h"
class EGDGOMKKEJI;
class GLPPDCIBMIH;
class IJFIHJJPHNA;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_SamePointCount; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JJBHNONJEJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6FC280)
#define JJBHNONJEJI_MIDKKNAGOFA_OFFSET UNITYSDK_OFFSET(0x1C6FC290)

	class JJBHNONJEJI : public ::IFNMPBPNBIF
	{
	public:
		::RPG::GameCore::DiceCombatDiceSelectorConfig_SamePointCount* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_SamePointCount* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_SamePointCount*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + JJBHNONJEJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* MIDKKNAGOFA(::IJFIHJJPHNA* a1, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + JJBHNONJEJI_MIDKKNAGOFA_OFFSET))(this, a1, a2);
		}

	};
