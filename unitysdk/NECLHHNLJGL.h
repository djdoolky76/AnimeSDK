#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NECLHHNLJGL_EGCHPIAHAFM.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NECLHHNLJGL_BGJOPEIGHLE_OFFSET UNITYSDK_OFFSET(0x10D713E0)
#define NECLHHNLJGL_COBJDAKPAGP_OFFSET UNITYSDK_OFFSET(0x10D71A80)
#define NECLHHNLJGL_EEIOOBOIPOH_OFFSET UNITYSDK_OFFSET(0x10D71BF0)
#define NECLHHNLJGL_EILOLFLODFC_OFFSET UNITYSDK_OFFSET(0x10D71900)
#define NECLHHNLJGL_LNMPJAKCBFN_OFFSET UNITYSDK_OFFSET(0x10D71420)
#define NECLHHNLJGL_NFIMICNJEGO_OFFSET UNITYSDK_OFFSET(0x10D71460)
#define NECLHHNLJGL_OFBKKGKJMIA_OFFSET UNITYSDK_OFFSET(0x10D71A40)
#define NECLHHNLJGL__CTOR_OFFSET UNITYSDK_OFFSET(0x10D713D0)

inline static constexpr unsigned int NECLHHNLJGL_TypeDefinitionIndex = 69708;

class NECLHHNLJGL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NECLHHNLJGL__CTOR_OFFSET))(this);
	}

	static ::System::Boolean BGJOPEIGHLE()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NECLHHNLJGL_BGJOPEIGHLE_OFFSET))();
	}

	static ::System::Boolean LNMPJAKCBFN()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NECLHHNLJGL_LNMPJAKCBFN_OFFSET))();
	}

	static ::NECLHHNLJGL_EGCHPIAHAFM NFIMICNJEGO()
	{
		return ((::NECLHHNLJGL_EGCHPIAHAFM(*)())((::PBYTE)hIl2Cpp + NECLHHNLJGL_NFIMICNJEGO_OFFSET))();
	}

	static ::System::Int64 EILOLFLODFC()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + NECLHHNLJGL_EILOLFLODFC_OFFSET))();
	}

	static ::System::Boolean OFBKKGKJMIA()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NECLHHNLJGL_OFBKKGKJMIA_OFFSET))();
	}

	static ::System::Int64 COBJDAKPAGP(::System::String* GBGOFDBPGNN)
	{
		return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + NECLHHNLJGL_COBJDAKPAGP_OFFSET))(GBGOFDBPGNN);
	}

	static ::System::Boolean EEIOOBOIPOH(::System::String* GMOEKIOAPFE, ::System::UInt64& MMLDGNEPOGN, ::System::UInt64& MLPJOBLCKBM, ::System::UInt64& FABCPIDHMFI)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + NECLHHNLJGL_EEIOOBOIPOH_OFFSET))(GMOEKIOAPFE, MMLDGNEPOGN, MLPJOBLCKBM, FABCPIDHMFI);
	}
};
