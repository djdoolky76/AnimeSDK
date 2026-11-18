#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define NANGGMPEOIP_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x12C36B90)
#define NANGGMPEOIP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12C36B20)
#define NANGGMPEOIP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12C368B0)
#define NANGGMPEOIP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12C37890)
#define NANGGMPEOIP__CTOR_OFFSET UNITYSDK_OFFSET(0x12C376B0)

inline static constexpr unsigned int NANGGMPEOIP_TypeDefinitionIndex = 90687;

class NANGGMPEOIP : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* CKIOGAONLDB; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x30
	::KCMIFNGABDC_1<::System::String*>* ECFFMMOIGLK; // 0x38
	::KCMIFNGABDC_1<::System::String*>* FHFIGKGJJAJ; // 0x40
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* KICKDDOPKNI; // 0x48
	::KCMIFNGABDC_1<::System::String*>* ABHACBINODB; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NANGGMPEOIP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NANGGMPEOIP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NANGGMPEOIP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NANGGMPEOIP_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NANGGMPEOIP_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
