#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define LMNHGLJGDNH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15900AC0)
#define LMNHGLJGDNH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x159009E0)
#define LMNHGLJGDNH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15900E20)
#define LMNHGLJGDNH__CTOR_OFFSET UNITYSDK_OFFSET(0x15900D30)

inline static constexpr unsigned int LMNHGLJGDNH_TypeDefinitionIndex = 78897;

class LMNHGLJGDNH : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* MGPCHBEPHGK; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* MFDCJJEPPII; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNHGLJGDNH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNHGLJGDNH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LMNHGLJGDNH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNHGLJGDNH_GDEOPIBNOIN_OFFSET))(this);
	}
};
