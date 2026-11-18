#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define AJMHGELKIOD_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x135F0AE0)
#define AJMHGELKIOD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x135F0A70)
#define AJMHGELKIOD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x135F0990)
#define AJMHGELKIOD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x135F0EE0)
#define AJMHGELKIOD__CTOR_OFFSET UNITYSDK_OFFSET(0x135F0DF0)

inline static constexpr unsigned int AJMHGELKIOD_TypeDefinitionIndex = 45156;

class AJMHGELKIOD : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* LFNJKLCBNPG; // 0x28
	::KCMIFNGABDC_1<::System::String*>* LAFJDOMBEPG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMHGELKIOD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMHGELKIOD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AJMHGELKIOD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMHGELKIOD_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AJMHGELKIOD_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
