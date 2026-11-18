#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define PFKKLJFGPCG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x178C4CE0)
#define PFKKLJFGPCG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x178C4B90)
#define PFKKLJFGPCG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x178C50B0)
#define PFKKLJFGPCG__CTOR_OFFSET UNITYSDK_OFFSET(0x178C4F80)

inline static constexpr unsigned int PFKKLJFGPCG_TypeDefinitionIndex = 43943;

class PFKKLJFGPCG : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* BECGFIIHHAP; // 0x28
	::KCMIFNGABDC_1<::System::String*>* HHGLDOKNPCK; // 0x30
	::AAMKEDEDHPD_1<::System::Int32>* OGPABGPPNGH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKKLJFGPCG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKKLJFGPCG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PFKKLJFGPCG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKKLJFGPCG_GDEOPIBNOIN_OFFSET))(this);
	}
};
