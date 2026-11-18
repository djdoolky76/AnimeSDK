#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define MOOOKGIHMHB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12180CC0)
#define MOOOKGIHMHB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12180AC0)
#define MOOOKGIHMHB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x121810A0)
#define MOOOKGIHMHB__CTOR_OFFSET UNITYSDK_OFFSET(0x12180ED0)

inline static constexpr unsigned int MOOOKGIHMHB_TypeDefinitionIndex = 73841;

class MOOOKGIHMHB : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::KCMIFNGABDC_1<::System::Single>* JPIHKNPJKPH; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28
	::MKBBPOFGLOF* PLEJMLIFFHG; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* NIDMFCNJJDI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOOKGIHMHB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOOKGIHMHB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MOOOKGIHMHB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOOKGIHMHB_GDEOPIBNOIN_OFFSET))(this);
	}
};
