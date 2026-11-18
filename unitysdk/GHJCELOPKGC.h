#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define GHJCELOPKGC_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x16CC5D70)
#define GHJCELOPKGC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16CC5D00)
#define GHJCELOPKGC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16CC5BB0)
#define GHJCELOPKGC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16CC6110)
#define GHJCELOPKGC__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC5F80)

inline static constexpr unsigned int GHJCELOPKGC_TypeDefinitionIndex = 62324;

class GHJCELOPKGC : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* JMBPGMDOIAF; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* GMGGFDAOAAM; // 0x30
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJCELOPKGC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJCELOPKGC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GHJCELOPKGC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJCELOPKGC_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GHJCELOPKGC_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
