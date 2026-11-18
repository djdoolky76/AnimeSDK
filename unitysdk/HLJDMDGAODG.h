#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define HLJDMDGAODG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15DC3A50)
#define HLJDMDGAODG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15DC3970)
#define HLJDMDGAODG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15DC3D40)
#define HLJDMDGAODG__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC3C50)

inline static constexpr unsigned int HLJDMDGAODG_TypeDefinitionIndex = 84664;

class HLJDMDGAODG : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* CMNDMJKJJID; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* PGHGMJNGDPG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJDMDGAODG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJDMDGAODG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HLJDMDGAODG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJDMDGAODG_GDEOPIBNOIN_OFFSET))(this);
	}
};
