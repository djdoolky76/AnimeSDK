#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFNMPBPNBIF.h"
class EGDGOMKKEJI;
class GLPPDCIBMIH;
class IJFIHJJPHNA;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Min; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PLOCJKDDFIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7F5180)
#define PLOCJKDDFIM_MIDKKNAGOFA_OFFSET UNITYSDK_OFFSET(0x1C7F5190)

	class PLOCJKDDFIM : public ::IFNMPBPNBIF
	{
	public:
		::RPG::GameCore::DiceCombatDiceSelectorConfig_Min* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_Min* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Min*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + PLOCJKDDFIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* MIDKKNAGOFA(::IJFIHJJPHNA* a1, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + PLOCJKDDFIM_MIDKKNAGOFA_OFFSET))(this, a1, a2);
		}

	};
