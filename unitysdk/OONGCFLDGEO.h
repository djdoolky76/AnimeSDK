#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define OONGCFLDGEO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11950290)
#define OONGCFLDGEO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x119501C0)
#define OONGCFLDGEO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x119503D0)
#define OONGCFLDGEO__CTOR_OFFSET UNITYSDK_OFFSET(0x119502E0)

inline static constexpr unsigned int OONGCFLDGEO_TypeDefinitionIndex = 78336;

class OONGCFLDGEO : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* AEPENHFLGBJ; // 0x18
	::AAMKEDEDHPD_1<::System::String*>* CHFJGKMBBHJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OONGCFLDGEO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OONGCFLDGEO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OONGCFLDGEO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OONGCFLDGEO_GDEOPIBNOIN_OFFSET))(this);
	}
};
