#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MEDGDPFECPH;

#define GPPMPHICDEA_FMKGPEBGEID_GGEAJIPLLKP_OFFSET UNITYSDK_OFFSET(0x17ADF390)
#define GPPMPHICDEA_FMKGPEBGEID__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADF380)

inline static constexpr unsigned int GPPMPHICDEA_FMKGPEBGEID_TypeDefinitionIndex = 42660;

class GPPMPHICDEA_FMKGPEBGEID : public ::System::Object
{
public:
	::MEDGDPFECPH* LHPFMGBDFPN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_FMKGPEBGEID__CTOR_OFFSET))(this);
	}

	::System::Void GGEAJIPLLKP(::System::Int32 IIAPBDDFOHP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GPPMPHICDEA_FMKGPEBGEID_GGEAJIPLLKP_OFFSET))(this, IIAPBDDFOHP);
	}
};
