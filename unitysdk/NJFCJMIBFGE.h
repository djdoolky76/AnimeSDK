#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFNMPBPNBIF.h"
class EGDGOMKKEJI;
class GLPPDCIBMIH;
class IJFIHJJPHNA;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_All; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NJFCJMIBFGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C79A610)
#define NJFCJMIBFGE_MIDKKNAGOFA_OFFSET UNITYSDK_OFFSET(0x1C79A620)

inline static constexpr unsigned int NJFCJMIBFGE_TypeDefinitionIndex = 36375;

	class NJFCJMIBFGE : public ::IFNMPBPNBIF
	{
	public:
		::RPG::GameCore::DiceCombatDiceSelectorConfig_All* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_All* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_All*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + NJFCJMIBFGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* MIDKKNAGOFA(::IJFIHJJPHNA* a1, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + NJFCJMIBFGE_MIDKKNAGOFA_OFFSET))(this, a1, a2);
		}

	};
