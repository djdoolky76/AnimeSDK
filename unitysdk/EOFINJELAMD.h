#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define EOFINJELAMD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11AAB440)
#define EOFINJELAMD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11AAB3B0)
#define EOFINJELAMD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11AAB750)
#define EOFINJELAMD__CTOR_OFFSET UNITYSDK_OFFSET(0x11AAB6B0)

inline static constexpr unsigned int EOFINJELAMD_TypeDefinitionIndex = 44273;

class EOFINJELAMD : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* IBNLAAIELGL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOFINJELAMD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOFINJELAMD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EOFINJELAMD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOFINJELAMD_GDEOPIBNOIN_OFFSET))(this);
	}
};
