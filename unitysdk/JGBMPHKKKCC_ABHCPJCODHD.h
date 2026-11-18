#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JGBMPHKKKCC_ABHCPJCODHD_AHPLLGPIBEO_OFFSET UNITYSDK_OFFSET(0x1FDBD230)
#define JGBMPHKKKCC_ABHCPJCODHD_COMPARE_OFFSET UNITYSDK_OFFSET(0x1FDBD240)
#define JGBMPHKKKCC_ABHCPJCODHD_GJDNEMPEBIA_OFFSET UNITYSDK_OFFSET(0x1FDBD310)
#define JGBMPHKKKCC_ABHCPJCODHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBD210)

inline static constexpr unsigned int JGBMPHKKKCC_ABHCPJCODHD_TypeDefinitionIndex = 28158;

class JGBMPHKKKCC_ABHCPJCODHD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBMPHKKKCC_ABHCPJCODHD__CTOR_OFFSET))(this);
	}

	::System::Double AHPLLGPIBEO()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBMPHKKKCC_ABHCPJCODHD_AHPLLGPIBEO_OFFSET))(this);
	}

	::System::Int32 Compare(::System::Double EJCBEJMGFAJ, ::System::Double EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + JGBMPHKKKCC_ABHCPJCODHD_COMPARE_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Double GJDNEMPEBIA(::System::Double BDEDDEGJFKL, ::System::Double IECOJPMPJMP)
	{
		return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + JGBMPHKKKCC_ABHCPJCODHD_GJDNEMPEBIA_OFFSET))(this, BDEDDEGJFKL, IECOJPMPJMP);
	}
};
