#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFNMPBPNBIF.h"
class EGDGOMKKEJI;
class GLPPDCIBMIH;
class IJFIHJJPHNA;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Max; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CECGDFJNPGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C9E20)
#define CECGDFJNPGF_MIDKKNAGOFA_OFFSET UNITYSDK_OFFSET(0x1C5C9E30)

	class CECGDFJNPGF : public ::IFNMPBPNBIF
	{
	public:
		::RPG::GameCore::DiceCombatDiceSelectorConfig_Max* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_Max* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Max*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + CECGDFJNPGF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* MIDKKNAGOFA(::IJFIHJJPHNA* a1, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + CECGDFJNPGF_MIDKKNAGOFA_OFFSET))(this, a1, a2);
		}

	};
