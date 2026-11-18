#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define EECGGCJAMGO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16992030)
#define EECGGCJAMGO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16991F50)
#define EECGGCJAMGO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x169923C0)
#define EECGGCJAMGO__CTOR_OFFSET UNITYSDK_OFFSET(0x169922D0)

inline static constexpr unsigned int EECGGCJAMGO_TypeDefinitionIndex = 55155;

class EECGGCJAMGO : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* MJIIHHCMINE; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* PNFLIAAKFDF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EECGGCJAMGO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EECGGCJAMGO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EECGGCJAMGO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EECGGCJAMGO_GDEOPIBNOIN_OFFSET))(this);
	}
};
