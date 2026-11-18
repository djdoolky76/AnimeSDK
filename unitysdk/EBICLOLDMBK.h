#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define EBICLOLDMBK_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x154668A0)
#define EBICLOLDMBK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15466830)
#define EBICLOLDMBK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15466750)
#define EBICLOLDMBK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15466B90)
#define EBICLOLDMBK__CTOR_OFFSET UNITYSDK_OFFSET(0x15466AA0)

inline static constexpr unsigned int EBICLOLDMBK_TypeDefinitionIndex = 51294;

class EBICLOLDMBK : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* FGMBPHHJIIK; // 0x28
	::KCMIFNGABDC_1<::System::String*>* JENCMJFOBFJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBICLOLDMBK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBICLOLDMBK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EBICLOLDMBK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBICLOLDMBK_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EBICLOLDMBK_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
