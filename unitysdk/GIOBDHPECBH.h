#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class LGAFMFNMCOG;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define GIOBDHPECBH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16CC8E00)
#define GIOBDHPECBH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16CC8AE0)
#define GIOBDHPECBH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16CC95A0)
#define GIOBDHPECBH_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x16CC95B0)
#define GIOBDHPECBH_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x16CC8990)
#define GIOBDHPECBH__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC92E0)

inline static constexpr unsigned int GIOBDHPECBH_TypeDefinitionIndex = 83198;

class GIOBDHPECBH : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Single>* CDKDDDKKPPE; // 0x28
	::CPABOPKIGAL* EELHICINOAE; // 0x30
	::KCMIFNGABDC_1<::System::Single>* FGFAIFBGNIK; // 0x38
	::AAMKEDEDHPD_1<::System::Single>* MOILJAKPMHN; // 0x40
	::KCMIFNGABDC_1<::System::String*>* FMMECCNEOCO; // 0x48
	::CPABOPKIGAL* EGCCIODCJIA; // 0x50
	::KCMIFNGABDC_1<::System::Boolean>* ICPIONJENPI; // 0x58
	::KCMIFNGABDC_1<::System::Single>* FJJBIJLOODA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOBDHPECBH__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + GIOBDHPECBH_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOBDHPECBH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GIOBDHPECBH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOBDHPECBH_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + GIOBDHPECBH_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
