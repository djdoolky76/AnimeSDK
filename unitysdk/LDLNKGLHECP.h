#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define LDLNKGLHECP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1635F100)
#define LDLNKGLHECP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1635F020)
#define LDLNKGLHECP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1635F780)
#define LDLNKGLHECP__CTOR_OFFSET UNITYSDK_OFFSET(0x1635F690)

inline static constexpr unsigned int LDLNKGLHECP_TypeDefinitionIndex = 69164;

class LDLNKGLHECP : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* FCGPBJHCHLA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLNKGLHECP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLNKGLHECP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LDLNKGLHECP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLNKGLHECP_GDEOPIBNOIN_OFFSET))(this);
	}
};
