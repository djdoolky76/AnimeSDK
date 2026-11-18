#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define AEAAMOCHPCF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x135D6CC0)
#define AEAAMOCHPCF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x135D6B10)
#define AEAAMOCHPCF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x135D7080)
#define AEAAMOCHPCF__CTOR_OFFSET UNITYSDK_OFFSET(0x135D6EB0)

inline static constexpr unsigned int AEAAMOCHPCF_TypeDefinitionIndex = 44407;

class AEAAMOCHPCF : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* JPJHAJKJOHN; // 0x28
	::MKBBPOFGLOF* PIAKOEHLIEP; // 0x30
	::MKBBPOFGLOF* EGCCIODCJIA; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* GMHCLHBHOEO; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEAAMOCHPCF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEAAMOCHPCF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AEAAMOCHPCF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEAAMOCHPCF_GDEOPIBNOIN_OFFSET))(this);
	}
};
