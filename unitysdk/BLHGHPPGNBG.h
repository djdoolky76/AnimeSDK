#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define BLHGHPPGNBG_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x11519C40)
#define BLHGHPPGNBG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11519BD0)
#define BLHGHPPGNBG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11519B40)
#define BLHGHPPGNBG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11519DE0)
#define BLHGHPPGNBG__CTOR_OFFSET UNITYSDK_OFFSET(0x11519D40)

inline static constexpr unsigned int BLHGHPPGNBG_TypeDefinitionIndex = 53876;

class BLHGHPPGNBG : public ::MHMFINLCNFN
{
public:
	// static const ::System::String* JNJIDJOPKDE; // 0x0
	::KCMIFNGABDC_1<::System::Int32>* BCKAMPLKAON; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGHPPGNBG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGHPPGNBG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BLHGHPPGNBG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGHPPGNBG_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BLHGHPPGNBG_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
