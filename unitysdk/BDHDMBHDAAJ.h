#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define BDHDMBHDAAJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x150698C0)
#define BDHDMBHDAAJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15069770)
#define BDHDMBHDAAJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15069F30)
#define BDHDMBHDAAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15069E00)

inline static constexpr unsigned int BDHDMBHDAAJ_TypeDefinitionIndex = 55312;

class BDHDMBHDAAJ : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* DDHAAJOILKP; // 0x28
	::KCMIFNGABDC_1<::System::String*>* JINABKGHCHC; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* IMAFLHFEFFN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDHDMBHDAAJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDHDMBHDAAJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BDHDMBHDAAJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDHDMBHDAAJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
