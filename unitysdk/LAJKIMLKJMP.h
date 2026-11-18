#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define LAJKIMLKJMP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x126BFFB0)
#define LAJKIMLKJMP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x126BFE60)
#define LAJKIMLKJMP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x126C07D0)
#define LAJKIMLKJMP__CTOR_OFFSET UNITYSDK_OFFSET(0x126C0680)

inline static constexpr unsigned int LAJKIMLKJMP_TypeDefinitionIndex = 59855;

class LAJKIMLKJMP : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* KOMABFMGLFF; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x30
	::MKBBPOFGLOF* ONJLBPLOLGE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJKIMLKJMP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJKIMLKJMP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LAJKIMLKJMP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJKIMLKJMP_GDEOPIBNOIN_OFFSET))(this);
	}
};
