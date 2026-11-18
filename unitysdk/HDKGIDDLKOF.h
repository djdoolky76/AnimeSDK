#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define HDKGIDDLKOF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14A04440)
#define HDKGIDDLKOF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14A04360)
#define HDKGIDDLKOF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14A04880)
#define HDKGIDDLKOF__CTOR_OFFSET UNITYSDK_OFFSET(0x14A04790)

inline static constexpr unsigned int HDKGIDDLKOF_TypeDefinitionIndex = 86866;

class HDKGIDDLKOF : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* OLMEJLNJIDB; // 0x28
	::KCMIFNGABDC_1<::System::String*>* OPNFMCBPBLH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKGIDDLKOF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKGIDDLKOF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HDKGIDDLKOF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKGIDDLKOF_GDEOPIBNOIN_OFFSET))(this);
	}
};
