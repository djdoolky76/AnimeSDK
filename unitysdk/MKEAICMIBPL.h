#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KDAMKPJPCME;
class PNHPELCKOHH;

#define MKEAICMIBPL_BPJNBMABAJK_OFFSET UNITYSDK_OFFSET(0x1E58F1B0)
#define MKEAICMIBPL_EODBBODDHIL_OFFSET UNITYSDK_OFFSET(0x1E58F0D0)
#define MKEAICMIBPL_IBJIAFJNGKN_OFFSET UNITYSDK_OFFSET(0x1E58F1C0)
#define MKEAICMIBPL_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1E58F1D0)
#define MKEAICMIBPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E58F090)

inline static constexpr unsigned int MKEAICMIBPL_TypeDefinitionIndex = 94511;

class MKEAICMIBPL : public ::System::Object
{
public:
	::KDAMKPJPCME* NKABPFEPFIM; // 0x10
	::PNHPELCKOHH* GEEHGDABNJF; // 0x18
	::System::Boolean _MCACFCIHMHF_k__BackingField; // 0x20
	::System::Boolean NHIGNABPPOA; // 0x21
	::System::Byte _padding0[0x6];
	::System::UInt64 HOBNPLIMMCE; // 0x28

	::System::Void _ctor(::KDAMKPJPCME* JLLAMEIACCM)
	{
		return ((::System::Void(*)(::PVOID, ::KDAMKPJPCME*))((::PBYTE)hIl2Cpp + MKEAICMIBPL__CTOR_OFFSET))(this, JLLAMEIACCM);
	}

	::System::Boolean BPJNBMABAJK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEAICMIBPL_BPJNBMABAJK_OFFSET))(this);
	}

	::System::Void IBJIAFJNGKN(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKEAICMIBPL_IBJIAFJNGKN_OFFSET))(this, EGEGIMGMJHN);
	}

	::PNHPELCKOHH* EODBBODDHIL()
	{
		return ((::PNHPELCKOHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEAICMIBPL_EODBBODDHIL_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MKEAICMIBPL_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}
};
