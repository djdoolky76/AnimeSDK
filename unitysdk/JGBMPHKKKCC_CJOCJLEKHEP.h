#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JGBMPHKKKCC_CJOCJLEKHEP_AHPLLGPIBEO_OFFSET UNITYSDK_OFFSET(0x1FDBD390)
#define JGBMPHKKKCC_CJOCJLEKHEP_COMPARE_OFFSET UNITYSDK_OFFSET(0x1FDBD3A0)
#define JGBMPHKKKCC_CJOCJLEKHEP_GJDNEMPEBIA_OFFSET UNITYSDK_OFFSET(0x1FDBD470)
#define JGBMPHKKKCC_CJOCJLEKHEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBD200)

inline static constexpr unsigned int JGBMPHKKKCC_CJOCJLEKHEP_TypeDefinitionIndex = 28157;

class JGBMPHKKKCC_CJOCJLEKHEP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBMPHKKKCC_CJOCJLEKHEP__CTOR_OFFSET))(this);
	}

	::System::Double AHPLLGPIBEO()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBMPHKKKCC_CJOCJLEKHEP_AHPLLGPIBEO_OFFSET))(this);
	}

	::System::Int32 Compare(::System::Double EJCBEJMGFAJ, ::System::Double EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + JGBMPHKKKCC_CJOCJLEKHEP_COMPARE_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Double GJDNEMPEBIA(::System::Double BDEDDEGJFKL, ::System::Double IECOJPMPJMP)
	{
		return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + JGBMPHKKKCC_CJOCJLEKHEP_GJDNEMPEBIA_OFFSET))(this, BDEDDEGJFKL, IECOJPMPJMP);
	}
};
