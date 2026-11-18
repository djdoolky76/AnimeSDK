#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define FIADFFNBOHN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11C4FAD0)
#define FIADFFNBOHN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11C4FA40)
#define FIADFFNBOHN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11C4FCC0)
#define FIADFFNBOHN__CTOR_OFFSET UNITYSDK_OFFSET(0x11C4FC20)

inline static constexpr unsigned int FIADFFNBOHN_TypeDefinitionIndex = 92082;

class FIADFFNBOHN : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* EECMOKDLPKJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIADFFNBOHN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIADFFNBOHN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FIADFFNBOHN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIADFFNBOHN_GDEOPIBNOIN_OFFSET))(this);
	}
};
