#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJLOBIGIEDO.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FPPNOKHMNMC_AINLPNNLCKG_OFFSET UNITYSDK_OFFSET(0x15F04270)
#define FPPNOKHMNMC_CIAMODJKGJL_OFFSET UNITYSDK_OFFSET(0x15F042C0)
#define FPPNOKHMNMC_OIADLDGECFN_OFFSET UNITYSDK_OFFSET(0x15F04980)
#define FPPNOKHMNMC__CTOR_OFFSET UNITYSDK_OFFSET(0x15F04240)

inline static constexpr unsigned int FPPNOKHMNMC_TypeDefinitionIndex = 81890;

class FPPNOKHMNMC : public ::IJLOBIGIEDO
{
public:
	::System::Void _ctor(::MoleMole::Config::InteractEntry* AAIJGGIEOGK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + FPPNOKHMNMC__CTOR_OFFSET))(this, AAIJGGIEOGK);
	}

	::System::Void AINLPNNLCKG(::System::Collections::Generic::List_1<::System::String*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + FPPNOKHMNMC_AINLPNNLCKG_OFFSET))(this, DJLOKMMLFJC);
	}

	::System::Boolean CIAMODJKGJL(::MoleMole::Battle::Entity* KEEENBHLHPL, ::MoleMole::Battle::Entity* DJHFOGHIFEJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FPPNOKHMNMC_CIAMODJKGJL_OFFSET))(this, KEEENBHLHPL, DJHFOGHIFEJ);
	}

	::System::Void OIADLDGECFN(::MoleMole::Battle::Entity* DJHFOGHIFEJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FPPNOKHMNMC_OIADLDGECFN_OFFSET))(this, DJHFOGHIFEJ);
	}
};
