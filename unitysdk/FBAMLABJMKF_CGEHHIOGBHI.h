#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF_GNEPAIKBPMD;
class PNJDGHBEMLK;

#define FBAMLABJMKF_CGEHHIOGBHI_PCIFHMENFCI_OFFSET UNITYSDK_OFFSET(0x172605E0)
#define FBAMLABJMKF_CGEHHIOGBHI__CTOR_OFFSET UNITYSDK_OFFSET(0x172605D0)

inline static constexpr unsigned int FBAMLABJMKF_CGEHHIOGBHI_TypeDefinitionIndex = 78127;

class FBAMLABJMKF_CGEHHIOGBHI : public ::System::Object
{
public:
	::FBAMLABJMKF_GNEPAIKBPMD* FOBKJGCBGKP; // 0x10
	::System::Single BFMMEICFNCD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_CGEHHIOGBHI__CTOR_OFFSET))(this);
	}

	::System::Boolean PCIFHMENFCI(::PNJDGHBEMLK* CDKCJAKODPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + FBAMLABJMKF_CGEHHIOGBHI_PCIFHMENFCI_OFFSET))(this, CDKCJAKODPN);
	}
};
