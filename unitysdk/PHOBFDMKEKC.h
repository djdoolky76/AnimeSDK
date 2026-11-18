#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define PHOBFDMKEKC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1D9CBAF0)
#define PHOBFDMKEKC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1D9CB9B0)
#define PHOBFDMKEKC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1D9CBD50)
#define PHOBFDMKEKC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CBC30)

inline static constexpr unsigned int PHOBFDMKEKC_TypeDefinitionIndex = 40455;

class PHOBFDMKEKC : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* ACDKKCINLON; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* PDNIFMPPOJF; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* ODIEGLPGNCL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOBFDMKEKC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOBFDMKEKC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PHOBFDMKEKC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOBFDMKEKC_GDEOPIBNOIN_OFFSET))(this);
	}
};
