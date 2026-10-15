#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFNMPBPNBIF.h"
class EGDGOMKKEJI;
class GLPPDCIBMIH;
class IJFIHJJPHNA;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Odd; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAAKDKALFBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C756900)
#define NAAKDKALFBC_MIDKKNAGOFA_OFFSET UNITYSDK_OFFSET(0x1C756910)

inline static constexpr unsigned int NAAKDKALFBC_TypeDefinitionIndex = 36380;

	class NAAKDKALFBC : public ::IFNMPBPNBIF
	{
	public:
		::RPG::GameCore::DiceCombatDiceSelectorConfig_Odd* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_Odd* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Odd*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + NAAKDKALFBC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* MIDKKNAGOFA(::IJFIHJJPHNA* a1, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + NAAKDKALFBC_MIDKKNAGOFA_OFFSET))(this, a1, a2);
		}

	};
