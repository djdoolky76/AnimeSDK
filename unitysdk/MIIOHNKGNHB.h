#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class EBNPOEHOAGD;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define MIIOHNKGNHB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1405F0E0)
#define MIIOHNKGNHB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1405EF90)
#define MIIOHNKGNHB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1405F450)
#define MIIOHNKGNHB__CTOR_OFFSET UNITYSDK_OFFSET(0x1405F350)

inline static constexpr unsigned int MIIOHNKGNHB_TypeDefinitionIndex = 78858;

class MIIOHNKGNHB : public ::MHMFINLCNFN
{
public:
	::EBNPOEHOAGD* ACDKKCINLON; // 0x28
	::KCMIFNGABDC_1<::System::String*>* LJLBPGKAGCP; // 0x30
	::AAMKEDEDHPD_1<::System::String*>* GMKCANCMEEB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIOHNKGNHB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIOHNKGNHB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MIIOHNKGNHB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIOHNKGNHB_GDEOPIBNOIN_OFFSET))(this);
	}
};
