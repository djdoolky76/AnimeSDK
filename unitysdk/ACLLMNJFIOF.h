#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJLOBIGIEDO.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class InteractEntry; }
namespace MoleMole::Config { class InteractEntryMode_ClueView; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ACLLMNJFIOF_AINLPNNLCKG_OFFSET UNITYSDK_OFFSET(0x1420EAF0)
#define ACLLMNJFIOF_CIAMODJKGJL_OFFSET UNITYSDK_OFFSET(0x1420E520)
#define ACLLMNJFIOF_IDJDKBFAPBJ_OFFSET UNITYSDK_OFFSET(0x1420EB40)
#define ACLLMNJFIOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1420E490)

inline static constexpr unsigned int ACLLMNJFIOF_TypeDefinitionIndex = 79849;

class ACLLMNJFIOF : public ::IJLOBIGIEDO
{
public:
	// static const ::System::String* CBLLCKNPLMF; // 0x0
	::MoleMole::Config::InteractEntryMode_ClueView* AHMFPFACACD; // 0x50

	::System::Void _ctor(::MoleMole::Config::InteractEntry* AAIJGGIEOGK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + ACLLMNJFIOF__CTOR_OFFSET))(this, AAIJGGIEOGK);
	}

	::System::Boolean CIAMODJKGJL(::MoleMole::Battle::Entity* KEEENBHLHPL, ::MoleMole::Battle::Entity* DJHFOGHIFEJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ACLLMNJFIOF_CIAMODJKGJL_OFFSET))(this, KEEENBHLHPL, DJHFOGHIFEJ);
	}

	::System::Void AINLPNNLCKG(::System::Collections::Generic::List_1<::System::String*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + ACLLMNJFIOF_AINLPNNLCKG_OFFSET))(this, DJLOKMMLFJC);
	}

	::System::Void IDJDKBFAPBJ(::System::UInt32 EKIBIPOBBAH, ::System::UInt32 FLEDHKJGAEP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ACLLMNJFIOF_IDJDKBFAPBJ_OFFSET))(this, EKIBIPOBBAH, FLEDHKJGAEP);
	}
};
