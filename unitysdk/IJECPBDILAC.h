#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJLOBIGIEDO.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IJECPBDILAC_AINLPNNLCKG_OFFSET UNITYSDK_OFFSET(0x15C13F60)
#define IJECPBDILAC_CAGJBPMIMGH_OFFSET UNITYSDK_OFFSET(0x15C13F50)
#define IJECPBDILAC_CIAMODJKGJL_OFFSET UNITYSDK_OFFSET(0x15C136A0)
#define IJECPBDILAC_MCHGNACMFPB_OFFSET UNITYSDK_OFFSET(0x15C13C70)
#define IJECPBDILAC__CTOR_OFFSET UNITYSDK_OFFSET(0x15C13610)

inline static constexpr unsigned int IJECPBDILAC_TypeDefinitionIndex = 54241;

class IJECPBDILAC : public ::IJLOBIGIEDO
{
public:
	::System::Int32 JHFKDGBCOBA; // 0x50

	::System::Void _ctor(::MoleMole::Config::InteractEntry* AAIJGGIEOGK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + IJECPBDILAC__CTOR_OFFSET))(this, AAIJGGIEOGK);
	}

	::System::Boolean CIAMODJKGJL(::MoleMole::Battle::Entity* KEEENBHLHPL, ::MoleMole::Battle::Entity* DJHFOGHIFEJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IJECPBDILAC_CIAMODJKGJL_OFFSET))(this, KEEENBHLHPL, DJHFOGHIFEJ);
	}

	::System::Void AINLPNNLCKG(::System::Collections::Generic::List_1<::System::String*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + IJECPBDILAC_AINLPNNLCKG_OFFSET))(this, DJLOKMMLFJC);
	}

	::System::Boolean MCHGNACMFPB(::MoleMole::Battle::Entity* NBBEINODCOB, ::System::String* PMLJMGEFIND, ::System::Int32 NOKMIJNFMBH)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + IJECPBDILAC_MCHGNACMFPB_OFFSET))(this, NBBEINODCOB, PMLJMGEFIND, NOKMIJNFMBH);
	}

	::System::Boolean CAGJBPMIMGH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJECPBDILAC_CAGJBPMIMGH_OFFSET))(this);
	}
};
