#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class GeneralGraphicQualityProfile; }
namespace System { class String; }

#define HDHOOKPPGNB_CCNCFOBJCHG_OFFSET UNITYSDK_OFFSET(0x17A3ECA0)
#define HDHOOKPPGNB_CFHHHLDIJGL_OFFSET UNITYSDK_OFFSET(0x17A3ED30)
#define HDHOOKPPGNB_EPFKBKOCBMO_OFFSET UNITYSDK_OFFSET(0x17A3EA00)
#define HDHOOKPPGNB_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x17A3EFD0)
#define HDHOOKPPGNB_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x17A3E9C0)
#define HDHOOKPPGNB__CTOR_OFFSET UNITYSDK_OFFSET(0x17A3E9B0)

inline static constexpr unsigned int HDHOOKPPGNB_TypeDefinitionIndex = 52035;

class HDHOOKPPGNB : public ::System::Object
{
public:
	::MoleMole::GeneralGraphicQualityProfile* CNOAMGPMGHM; // 0x10
	::System::Boolean LLHLIKKMOFI; // 0x18

	::System::Void _ctor(::MoleMole::GeneralGraphicQualityProfile* NKAKNBFNKAN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GeneralGraphicQualityProfile*))((::PBYTE)hIl2Cpp + HDHOOKPPGNB__CTOR_OFFSET))(this, NKAKNBFNKAN);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHOOKPPGNB_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void EPFKBKOCBMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHOOKPPGNB_EPFKBKOCBMO_OFFSET))(this);
	}

	::System::Void CCNCFOBJCHG(::System::String* MCOHLHMKLIP, ::System::Boolean NKAHBDINMEO, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HDHOOKPPGNB_CCNCFOBJCHG_OFFSET))(this, MCOHLHMKLIP, NKAHBDINMEO, FLMNJOFKIKI);
	}

	::System::Void CFHHHLDIJGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHOOKPPGNB_CFHHHLDIJGL_OFFSET))(this);
	}

	::System::Void GIAOBHOJCDP(::System::String* MCOHLHMKLIP, ::System::Boolean NKAHBDINMEO, ::System::Boolean FLMNJOFKIKI, ::System::Boolean DCFANHOIMOB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HDHOOKPPGNB_GIAOBHOJCDP_OFFSET))(this, MCOHLHMKLIP, NKAHBDINMEO, FLMNJOFKIKI, DCFANHOIMOB);
	}
};
