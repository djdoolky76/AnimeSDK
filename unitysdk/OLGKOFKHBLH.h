#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define OLGKOFKHBLH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13A6CC20)
#define OLGKOFKHBLH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13A6CB40)
#define OLGKOFKHBLH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13A6D090)
#define OLGKOFKHBLH__CTOR_OFFSET UNITYSDK_OFFSET(0x13A6CFA0)

inline static constexpr unsigned int OLGKOFKHBLH_TypeDefinitionIndex = 74984;

class OLGKOFKHBLH : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* POEFJNKFGME; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* OJAFIHNADEG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLGKOFKHBLH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLGKOFKHBLH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OLGKOFKHBLH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLGKOFKHBLH_GDEOPIBNOIN_OFFSET))(this);
	}
};
