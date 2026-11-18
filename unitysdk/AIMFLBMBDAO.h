#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBDDPHPODAN.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define AIMFLBMBDAO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14358EC0)
#define AIMFLBMBDAO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14358DE0)
#define AIMFLBMBDAO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x143592E0)
#define AIMFLBMBDAO__CTOR_OFFSET UNITYSDK_OFFSET(0x143591F0)

inline static constexpr unsigned int AIMFLBMBDAO_TypeDefinitionIndex = 48922;

class AIMFLBMBDAO : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MBDDPHPODAN>* JLBIGDHOLPP; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* OHADGFLMPIM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMFLBMBDAO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMFLBMBDAO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AIMFLBMBDAO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMFLBMBDAO_GDEOPIBNOIN_OFFSET))(this);
	}
};
