#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define CMPJAFAHIPC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15345640)
#define CMPJAFAHIPC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15345430)
#define CMPJAFAHIPC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15345B30)
#define CMPJAFAHIPC__CTOR_OFFSET UNITYSDK_OFFSET(0x15345990)

inline static constexpr unsigned int CMPJAFAHIPC_TypeDefinitionIndex = 81683;

class CMPJAFAHIPC : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Single>* HKBKCBKJPOM; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* JACGJHMFFAP; // 0x30
	::KCMIFNGABDC_1<::System::Single>* PHODGPNGHEG; // 0x38
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* BBNLIOOLHAD; // 0x40
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPJAFAHIPC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPJAFAHIPC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CMPJAFAHIPC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPJAFAHIPC_GDEOPIBNOIN_OFFSET))(this);
	}
};
