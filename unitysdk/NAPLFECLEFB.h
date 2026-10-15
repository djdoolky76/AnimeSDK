#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFNMPBPNBIF.h"
class EGDGOMKKEJI;
class GLPPDCIBMIH;
class IJFIHJJPHNA;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Even; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAPLFECLEFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C785260)
#define NAPLFECLEFB_MIDKKNAGOFA_OFFSET UNITYSDK_OFFSET(0x1C785270)

	class NAPLFECLEFB : public ::IFNMPBPNBIF
	{
	public:
		::RPG::GameCore::DiceCombatDiceSelectorConfig_Even* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_Even* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Even*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + NAPLFECLEFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* MIDKKNAGOFA(::IJFIHJJPHNA* a1, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + NAPLFECLEFB_MIDKKNAGOFA_OFFSET))(this, a1, a2);
		}

	};
