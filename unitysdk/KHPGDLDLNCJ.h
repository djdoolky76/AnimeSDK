#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define KHPGDLDLNCJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xD3F9060)
#define KHPGDLDLNCJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xD3F8EB0)
#define KHPGDLDLNCJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xD3F93C0)
#define KHPGDLDLNCJ__CTOR_OFFSET UNITYSDK_OFFSET(0xD3F9230)

inline static constexpr unsigned int KHPGDLDLNCJ_TypeDefinitionIndex = 63036;

class KHPGDLDLNCJ : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Single>* JPIHKNPJKPH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::MKBBPOFGLOF* PLEJMLIFFHG; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPGDLDLNCJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPGDLDLNCJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KHPGDLDLNCJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPGDLDLNCJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
