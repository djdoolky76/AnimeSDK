#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define LBHFONPCDCJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1793F540)
#define LBHFONPCDCJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1793F460)
#define LBHFONPCDCJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1793F840)
#define LBHFONPCDCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1793F750)

inline static constexpr unsigned int LBHFONPCDCJ_TypeDefinitionIndex = 63555;

class LBHFONPCDCJ : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* ELOCGINEIEO; // 0x28
	::AAMKEDEDHPD_1<::System::Boolean>* MEEHNGCFICP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBHFONPCDCJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBHFONPCDCJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LBHFONPCDCJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBHFONPCDCJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
