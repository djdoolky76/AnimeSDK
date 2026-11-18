#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define IDLOMLPKOBL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15EA7D50)
#define IDLOMLPKOBL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15EA7BA0)
#define IDLOMLPKOBL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15EA8340)
#define IDLOMLPKOBL__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA8200)

inline static constexpr unsigned int IDLOMLPKOBL_TypeDefinitionIndex = 62786;

class IDLOMLPKOBL : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* IMAFLHFEFFN; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* DDHAAJOILKP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLOMLPKOBL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLOMLPKOBL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IDLOMLPKOBL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLOMLPKOBL_GDEOPIBNOIN_OFFSET))(this);
	}
};
