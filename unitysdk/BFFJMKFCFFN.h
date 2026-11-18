#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJLOBIGIEDO.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class InteractEntry; }
namespace MoleMole::Config { class InteractEntryModeChat; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFFJMKFCFFN_AINLPNNLCKG_OFFSET UNITYSDK_OFFSET(0x1854F160)
#define BFFJMKFCFFN_CIAMODJKGJL_OFFSET UNITYSDK_OFFSET(0x1854F1B0)
#define BFFJMKFCFFN__CTOR_OFFSET UNITYSDK_OFFSET(0x1854F0D0)

inline static constexpr unsigned int BFFJMKFCFFN_TypeDefinitionIndex = 70934;

class BFFJMKFCFFN : public ::IJLOBIGIEDO
{
public:
	::MoleMole::Config::InteractEntryModeChat* PFKPFJHFIGL; // 0x50

	::System::Void _ctor(::MoleMole::Config::InteractEntry* AAIJGGIEOGK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + BFFJMKFCFFN__CTOR_OFFSET))(this, AAIJGGIEOGK);
	}

	::System::Void AINLPNNLCKG(::System::Collections::Generic::List_1<::System::String*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + BFFJMKFCFFN_AINLPNNLCKG_OFFSET))(this, DJLOKMMLFJC);
	}

	::System::Boolean CIAMODJKGJL(::MoleMole::Battle::Entity* KEEENBHLHPL, ::MoleMole::Battle::Entity* DJHFOGHIFEJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BFFJMKFCFFN_CIAMODJKGJL_OFFSET))(this, KEEENBHLHPL, DJHFOGHIFEJ);
	}
};
