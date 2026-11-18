#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PGONJHLJIMM;

#define PGONJHLJIMM_CNHEGCMLJFP_COMPARE_OFFSET UNITYSDK_OFFSET(0x1D0DC180)
#define PGONJHLJIMM_CNHEGCMLJFP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0DC170)

inline static constexpr unsigned int PGONJHLJIMM_CNHEGCMLJFP_TypeDefinitionIndex = 14408;

class PGONJHLJIMM_CNHEGCMLJFP : public ::System::Object
{
public:
	::PGONJHLJIMM* OGKPEFABGFN; // 0x10

	::System::Void _ctor(::PGONJHLJIMM* KNHIFHIKHIO)
	{
		return ((::System::Void(*)(::PVOID, ::PGONJHLJIMM*))((::PBYTE)hIl2Cpp + PGONJHLJIMM_CNHEGCMLJFP__CTOR_OFFSET))(this, KNHIFHIKHIO);
	}

	::System::Int32 Compare(::System::Int32 HAAEBCOBKFF, ::System::Int32 BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PGONJHLJIMM_CNHEGCMLJFP_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
