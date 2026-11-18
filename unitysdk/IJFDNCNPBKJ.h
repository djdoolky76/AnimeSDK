#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define IJFDNCNPBKJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15C14180)
#define IJFDNCNPBKJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15C14030)
#define IJFDNCNPBKJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15C147D0)
#define IJFDNCNPBKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15C14640)

inline static constexpr unsigned int IJFDNCNPBKJ_TypeDefinitionIndex = 85997;

class IJFDNCNPBKJ : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* GCAHLGKDMPD; // 0x28
	::MKBBPOFGLOF* DIGOOCGPDCA; // 0x30
	::MKBBPOFGLOF* GFPOFNEEMBL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFDNCNPBKJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFDNCNPBKJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IJFDNCNPBKJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFDNCNPBKJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
