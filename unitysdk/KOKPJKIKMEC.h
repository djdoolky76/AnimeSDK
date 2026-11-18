#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define KOKPJKIKMEC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x126AB370)
#define KOKPJKIKMEC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x126AB290)
#define KOKPJKIKMEC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x126AB890)
#define KOKPJKIKMEC__CTOR_OFFSET UNITYSDK_OFFSET(0x126AB7A0)

inline static constexpr unsigned int KOKPJKIKMEC_TypeDefinitionIndex = 39934;

class KOKPJKIKMEC : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* BOHBDHAPLDN; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKPJKIKMEC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKPJKIKMEC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KOKPJKIKMEC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKPJKIKMEC_GDEOPIBNOIN_OFFSET))(this);
	}
};
