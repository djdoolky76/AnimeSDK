#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJLOBIGIEDO.h"

class BJBCELGBBPO;
class OMGJIDKKHHO;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EIADOHHNKDC_AINLPNNLCKG_OFFSET UNITYSDK_OFFSET(0xF9CFCE0)
#define EIADOHHNKDC_BPKNEKOKBCK_OFFSET UNITYSDK_OFFSET(0xF9D03A0)
#define EIADOHHNKDC_CIAMODJKGJL_OFFSET UNITYSDK_OFFSET(0xF9CFDB0)
#define EIADOHHNKDC_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0xF9CFF20)
#define EIADOHHNKDC_ILIBMKMEEFN_OFFSET UNITYSDK_OFFSET(0xF9CF9C0)
#define EIADOHHNKDC__CTOR_OFFSET UNITYSDK_OFFSET(0xF9CF990)

inline static constexpr unsigned int EIADOHHNKDC_TypeDefinitionIndex = 58895;

class EIADOHHNKDC : public ::IJLOBIGIEDO
{
public:
	// static const ::System::String* FLEIEDNELLN; // 0x0
	::OMGJIDKKHHO* AKBJMFGBNPJ; // 0x50

	::System::Void _ctor(::MoleMole::Config::InteractEntry* AAIJGGIEOGK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + EIADOHHNKDC__CTOR_OFFSET))(this, AAIJGGIEOGK);
	}

	::System::Void AINLPNNLCKG(::System::Collections::Generic::List_1<::System::String*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + EIADOHHNKDC_AINLPNNLCKG_OFFSET))(this, DJLOKMMLFJC);
	}

	::System::Boolean CIAMODJKGJL(::MoleMole::Battle::Entity* KEEENBHLHPL, ::MoleMole::Battle::Entity* DJHFOGHIFEJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + EIADOHHNKDC_CIAMODJKGJL_OFFSET))(this, KEEENBHLHPL, DJHFOGHIFEJ);
	}

	::System::Void DIEPHAJCGOE(::BJBCELGBBPO* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::BJBCELGBBPO*))((::PBYTE)hIl2Cpp + EIADOHHNKDC_DIEPHAJCGOE_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void ILIBMKMEEFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIADOHHNKDC_ILIBMKMEEFN_OFFSET))(this);
	}

	::System::Void BPKNEKOKBCK(::BJBCELGBBPO* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::BJBCELGBBPO*))((::PBYTE)hIl2Cpp + EIADOHHNKDC_BPKNEKOKBCK_OFFSET))(this, MIALFKCCCPI);
	}
};
