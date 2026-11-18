#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALOMHBDCEID.h"
#include "unitysdk/CJGGMLHPLOG.h"
#include "unitysdk/EFOMGFNMIMP.h"
#include "unitysdk/EKBGOODPALC.h"
#include "unitysdk/EOPBCBCMFGF.h"
#include "unitysdk/FOEBHGKEJCM.h"
#include "unitysdk/HIHNKMMCLEB.h"
#include "unitysdk/IFMDDCPMGKC.h"
#include "unitysdk/MGHPLKGGLOB.h"
#include "unitysdk/MOINIKJJHGA.h"
#include "unitysdk/NLCDDKKFDHI.h"
#include "unitysdk/PDGLMNGBJGO.h"
#include "unitysdk/System/ValueType.h"

template <typename T> class IDBPOJANKPN_1;

#define IKJANHNOMOL_CENLKGKHJLF_OFFSET UNITYSDK_OFFSET(0x1CBC1510)
#define IKJANHNOMOL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x859A50)

inline static constexpr unsigned int IKJANHNOMOL_TypeDefinitionIndex = 93764;

struct alignas(8) IKJANHNOMOL
{
	::IDBPOJANKPN_1<::EOPBCBCMFGF>* PMHCOODEDDN; // 0x10
	::IDBPOJANKPN_1<::IFMDDCPMGKC>* EKCKFDBDAGF; // 0x18
	::IDBPOJANKPN_1<::CJGGMLHPLOG>* FHBBBJCNIAH; // 0x20
	::IDBPOJANKPN_1<::NLCDDKKFDHI>* FOFNEDGGMIM; // 0x28
	::IDBPOJANKPN_1<::EKBGOODPALC>* JJFILOBCCGA; // 0x30
	::IDBPOJANKPN_1<::MOINIKJJHGA>* JBHENFJBFPM; // 0x38
	::IDBPOJANKPN_1<::FOEBHGKEJCM>* MOMJHBHFMGF; // 0x40
	::IDBPOJANKPN_1<::EFOMGFNMIMP>* CKCEHJICEOM; // 0x48
	::IDBPOJANKPN_1<::MGHPLKGGLOB>* IICCPCPDFDB; // 0x50
	::IDBPOJANKPN_1<::PDGLMNGBJGO>* EHEKDIJFAOB; // 0x58
	::IDBPOJANKPN_1<::ALOMHBDCEID>* BIILOKOKIBC; // 0x60
	::IDBPOJANKPN_1<::HIHNKMMCLEB>* DOINBLOFPHN; // 0x68

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJANHNOMOL_DISPOSE_OFFSET))(this);
	}

	/*
	static ::IKJANHNOMOL CENLKGKHJLF(::System::Int32 AHFJCBLHFIJ)
	{
		return ((::IKJANHNOMOL(*)(::System::Int32))((::PBYTE)hIl2Cpp + IKJANHNOMOL_CENLKGKHJLF_OFFSET))(AHFJCBLHFIJ);
	}
	*/
};
