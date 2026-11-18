#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define KOPAFAGLMHH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15173A30)
#define KOPAFAGLMHH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x151739A0)
#define KOPAFAGLMHH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15173E60)
#define KOPAFAGLMHH__CTOR_OFFSET UNITYSDK_OFFSET(0x15173DC0)

inline static constexpr unsigned int KOPAFAGLMHH_TypeDefinitionIndex = 57064;

class KOPAFAGLMHH : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* BDICGABONNI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPAFAGLMHH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPAFAGLMHH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KOPAFAGLMHH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPAFAGLMHH_GDEOPIBNOIN_OFFSET))(this);
	}
};
