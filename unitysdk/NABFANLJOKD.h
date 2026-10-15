#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFNMPBPNBIF.h"
class EGDGOMKKEJI;
class GLPPDCIBMIH;
class IJFIHJJPHNA;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Intersect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NABFANLJOKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C756CB0)
#define NABFANLJOKD_MIDKKNAGOFA_OFFSET UNITYSDK_OFFSET(0x1C756CC0)

inline static constexpr unsigned int NABFANLJOKD_TypeDefinitionIndex = 36387;

	class NABFANLJOKD : public ::IFNMPBPNBIF
	{
	public:
		::RPG::GameCore::DiceCombatDiceSelectorConfig_Intersect* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_Intersect* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Intersect*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + NABFANLJOKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* MIDKKNAGOFA(::IJFIHJJPHNA* a1, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + NABFANLJOKD_MIDKKNAGOFA_OFFSET))(this, a1, a2);
		}

	};
