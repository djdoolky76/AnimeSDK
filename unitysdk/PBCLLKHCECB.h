#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define PBCLLKHCECB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x172F0FC0)
#define PBCLLKHCECB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x172F0EE0)
#define PBCLLKHCECB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x172F14A0)
#define PBCLLKHCECB__CTOR_OFFSET UNITYSDK_OFFSET(0x172F13B0)

inline static constexpr unsigned int PBCLLKHCECB_TypeDefinitionIndex = 63203;

class PBCLLKHCECB : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* FHDBMFHDIEI; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* POEJNGOMCCB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBCLLKHCECB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBCLLKHCECB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PBCLLKHCECB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBCLLKHCECB_GDEOPIBNOIN_OFFSET))(this);
	}
};
