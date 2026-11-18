#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define AGGMMFJCGLP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16D76070)
#define AGGMMFJCGLP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16D75FE0)
#define AGGMMFJCGLP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16D76170)
#define AGGMMFJCGLP__CTOR_OFFSET UNITYSDK_OFFSET(0x16D760D0)

inline static constexpr unsigned int AGGMMFJCGLP_TypeDefinitionIndex = 86005;

class AGGMMFJCGLP : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* HIBMBIEJKMJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGMMFJCGLP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGMMFJCGLP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AGGMMFJCGLP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGMMFJCGLP_GDEOPIBNOIN_OFFSET))(this);
	}
};
