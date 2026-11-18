#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define PKIPIGKGGLL_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1BF203F0)
#define PKIPIGKGGLL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1BF20380)
#define PKIPIGKGGLL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1BF202F0)
#define PKIPIGKGGLL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1BF20620)
#define PKIPIGKGGLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF20580)

inline static constexpr unsigned int PKIPIGKGGLL_TypeDefinitionIndex = 47539;

class PKIPIGKGGLL : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIPIGKGGLL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIPIGKGGLL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PKIPIGKGGLL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIPIGKGGLL_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PKIPIGKGGLL_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
