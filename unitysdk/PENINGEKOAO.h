#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define PENINGEKOAO_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1AFDF2A0)
#define PENINGEKOAO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1AFDF230)
#define PENINGEKOAO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1AFDF150)
#define PENINGEKOAO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1AFDF6A0)
#define PENINGEKOAO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFDF5B0)

inline static constexpr unsigned int PENINGEKOAO_TypeDefinitionIndex = 47706;

class PENINGEKOAO : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* LAFJDOMBEPG; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* LFNJKLCBNPG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENINGEKOAO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENINGEKOAO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PENINGEKOAO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PENINGEKOAO_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENINGEKOAO_GDEOPIBNOIN_OFFSET))(this);
	}
};
