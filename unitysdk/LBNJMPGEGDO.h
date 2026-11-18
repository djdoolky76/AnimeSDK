#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECEOBOHAGOB.h"

namespace System { class String; }

#define LBNJMPGEGDO_DMPAGFLDJGF_OFFSET UNITYSDK_OFFSET(0x1958AE40)
#define LBNJMPGEGDO_FJAICMIIHMG_OFFSET UNITYSDK_OFFSET(0x1958A840)
#define LBNJMPGEGDO_NIOLACCPKHH_OFFSET UNITYSDK_OFFSET(0x1958AB40)
#define LBNJMPGEGDO_NPAFPHDAPMI_OFFSET UNITYSDK_OFFSET(0x1958ACC0)
#define LBNJMPGEGDO_OCECKNBLIDE_OFFSET UNITYSDK_OFFSET(0x1958A9C0)
#define LBNJMPGEGDO_PJDPBAENJBE_OFFSET UNITYSDK_OFFSET(0x1958A140)
#define LBNJMPGEGDO__CTOR_OFFSET UNITYSDK_OFFSET(0x1958A130)

inline static constexpr unsigned int LBNJMPGEGDO_TypeDefinitionIndex = 17680;

class LBNJMPGEGDO : public ::ECEOBOHAGOB
{
public:
	::System::String* GGDFGBNJDKH; // 0x20
	::System::String* NKFMGIIGJCK; // 0x28
	::System::String* BDGOJFFEBOP; // 0x30
	::System::Int32 JFHPONLGGGD; // 0x38
	::System::Boolean KBEHIPNFIKF; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNJMPGEGDO__CTOR_OFFSET))(this);
	}

	::System::Void PJDPBAENJBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNJMPGEGDO_PJDPBAENJBE_OFFSET))(this);
	}

	::System::String* FJAICMIIHMG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNJMPGEGDO_FJAICMIIHMG_OFFSET))(this);
	}

	::System::Int32 DMPAGFLDJGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNJMPGEGDO_DMPAGFLDJGF_OFFSET))(this);
	}

	::System::String* NPAFPHDAPMI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNJMPGEGDO_NPAFPHDAPMI_OFFSET))(this);
	}

	::System::String* NIOLACCPKHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNJMPGEGDO_NIOLACCPKHH_OFFSET))(this);
	}

	::System::Boolean OCECKNBLIDE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNJMPGEGDO_OCECKNBLIDE_OFFSET))(this);
	}
};
