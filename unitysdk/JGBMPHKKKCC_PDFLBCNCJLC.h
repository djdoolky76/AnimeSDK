#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JGBMPHKKKCC_PDFLBCNCJLC_AHPLLGPIBEO_OFFSET UNITYSDK_OFFSET(0x1FDBD4F0)
#define JGBMPHKKKCC_PDFLBCNCJLC_COMPARE_OFFSET UNITYSDK_OFFSET(0x1FDBD500)
#define JGBMPHKKKCC_PDFLBCNCJLC_GJDNEMPEBIA_OFFSET UNITYSDK_OFFSET(0x1FDBD5D0)
#define JGBMPHKKKCC_PDFLBCNCJLC__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBD220)

inline static constexpr unsigned int JGBMPHKKKCC_PDFLBCNCJLC_TypeDefinitionIndex = 28159;

class JGBMPHKKKCC_PDFLBCNCJLC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBMPHKKKCC_PDFLBCNCJLC__CTOR_OFFSET))(this);
	}

	::System::Double AHPLLGPIBEO()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBMPHKKKCC_PDFLBCNCJLC_AHPLLGPIBEO_OFFSET))(this);
	}

	::System::Int32 Compare(::System::Double EJCBEJMGFAJ, ::System::Double EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + JGBMPHKKKCC_PDFLBCNCJLC_COMPARE_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Double GJDNEMPEBIA(::System::Double BDEDDEGJFKL, ::System::Double IECOJPMPJMP)
	{
		return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + JGBMPHKKKCC_PDFLBCNCJLC_GJDNEMPEBIA_OFFSET))(this, BDEDDEGJFKL, IECOJPMPJMP);
	}
};
