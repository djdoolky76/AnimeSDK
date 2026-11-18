#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJPGPNMLGEN.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBabeltowerContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GFMHODALAIN_EHJPPBEEBCL_OFFSET UNITYSDK_OFFSET(0x149C0ED0)
#define GFMHODALAIN_IPEMALHHKKI_OFFSET UNITYSDK_OFFSET(0x149C10F0)
#define GFMHODALAIN_LAKJELKLBMA_OFFSET UNITYSDK_OFFSET(0x149C1260)
#define GFMHODALAIN_OMGFHBEAHBL_OFFSET UNITYSDK_OFFSET(0x149C0E90)
#define GFMHODALAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x149C1060)

inline static constexpr unsigned int GFMHODALAIN_TypeDefinitionIndex = 85070;

class GFMHODALAIN : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* ODMMOKPEIID; // 0x10
	::System::Int32 FONBEPCCCLH; // 0x18
	::System::Int32 JEMKKEMCBKK; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMHODALAIN__CTOR_OFFSET))(this);
	}

	::DJPGPNMLGEN OMGFHBEAHBL()
	{
		return ((::DJPGPNMLGEN(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMHODALAIN_OMGFHBEAHBL_OFFSET))(this);
	}

	::System::Void EHJPPBEEBCL(::MoleMole::UIBabeltowerContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerContext*))((::PBYTE)hIl2Cpp + GFMHODALAIN_EHJPPBEEBCL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void IPEMALHHKKI(::MoleMole::UIBabeltowerContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerContext*))((::PBYTE)hIl2Cpp + GFMHODALAIN_IPEMALHHKKI_OFFSET))(this, AAOCANGHBDG);
	}

	::System::UInt32 LAKJELKLBMA(::System::String* HIAIKHDFCLN)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GFMHODALAIN_LAKJELKLBMA_OFFSET))(this, HIAIKHDFCLN);
	}
};
