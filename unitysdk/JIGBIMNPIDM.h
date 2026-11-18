#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBDCJLOPPJO.h"

class AJAMLAJJNHA;
class LBOGAMLDIEE;

#define JIGBIMNPIDM_APIPOELHMBP_OFFSET UNITYSDK_OFFSET(0x13CC17B0)
#define JIGBIMNPIDM_DNNMKMKKNMF_OFFSET UNITYSDK_OFFSET(0x13CC1710)
#define JIGBIMNPIDM_IBELDKINIOF_OFFSET UNITYSDK_OFFSET(0x13CC1530)
#define JIGBIMNPIDM_OFINMOFKGFI_OFFSET UNITYSDK_OFFSET(0x13CC1770)
#define JIGBIMNPIDM__CTOR_OFFSET UNITYSDK_OFFSET(0x13CC1320)

inline static constexpr unsigned int JIGBIMNPIDM_TypeDefinitionIndex = 83517;

class JIGBIMNPIDM : public ::BBDCJLOPPJO
{
public:
	::LBOGAMLDIEE* APKEDJFIPNK; // 0x50

	::System::Void _ctor(::AJAMLAJJNHA* KAINLJMNCHE)
	{
		return ((::System::Void(*)(::PVOID, ::AJAMLAJJNHA*))((::PBYTE)hIl2Cpp + JIGBIMNPIDM__CTOR_OFFSET))(this, KAINLJMNCHE);
	}

	::System::Void IBELDKINIOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGBIMNPIDM_IBELDKINIOF_OFFSET))(this);
	}

	::System::Void DNNMKMKKNMF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGBIMNPIDM_DNNMKMKKNMF_OFFSET))(this);
	}

	::System::Void OFINMOFKGFI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGBIMNPIDM_OFINMOFKGFI_OFFSET))(this);
	}

	::System::Void APIPOELHMBP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGBIMNPIDM_APIPOELHMBP_OFFSET))(this);
	}
};
