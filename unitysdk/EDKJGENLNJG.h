#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define EDKJGENLNJG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17225CD0)
#define EDKJGENLNJG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17225BF0)
#define EDKJGENLNJG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x172260D0)
#define EDKJGENLNJG__CTOR_OFFSET UNITYSDK_OFFSET(0x17225FE0)

inline static constexpr unsigned int EDKJGENLNJG_TypeDefinitionIndex = 52437;

class EDKJGENLNJG : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* PNFLIAAKFDF; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* ADLOGNHFBLA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKJGENLNJG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKJGENLNJG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EDKJGENLNJG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKJGENLNJG_GDEOPIBNOIN_OFFSET))(this);
	}
};
