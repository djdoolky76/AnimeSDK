#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define KNGDJHMBNPK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x129AAA90)
#define KNGDJHMBNPK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x129AA8E0)
#define KNGDJHMBNPK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x129AAD30)
#define KNGDJHMBNPK__CTOR_OFFSET UNITYSDK_OFFSET(0x129AABF0)

inline static constexpr unsigned int KNGDJHMBNPK_TypeDefinitionIndex = 39015;

class KNGDJHMBNPK : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* FIFNACMMODI; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* ALEODDINFMN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGDJHMBNPK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGDJHMBNPK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KNGDJHMBNPK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGDJHMBNPK_GDEOPIBNOIN_OFFSET))(this);
	}
};
