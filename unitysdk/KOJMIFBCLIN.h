#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define KOJMIFBCLIN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13C89ED0)
#define KOJMIFBCLIN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13C89E40)
#define KOJMIFBCLIN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13C8A0E0)
#define KOJMIFBCLIN__CTOR_OFFSET UNITYSDK_OFFSET(0x13C8A040)

inline static constexpr unsigned int KOJMIFBCLIN_TypeDefinitionIndex = 58527;

class KOJMIFBCLIN : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* AJKNEHLMKOI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJMIFBCLIN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJMIFBCLIN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KOJMIFBCLIN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJMIFBCLIN_GDEOPIBNOIN_OFFSET))(this);
	}
};
