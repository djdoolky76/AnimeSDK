#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define ONHLFIILKLI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13A743D0)
#define ONHLFIILKLI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13A74290)
#define ONHLFIILKLI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13A745F0)
#define ONHLFIILKLI__CTOR_OFFSET UNITYSDK_OFFSET(0x13A744F0)

inline static constexpr unsigned int ONHLFIILKLI_TypeDefinitionIndex = 75588;

class ONHLFIILKLI : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* PFIPIFNGMDP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHLFIILKLI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHLFIILKLI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ONHLFIILKLI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHLFIILKLI_GDEOPIBNOIN_OFFSET))(this);
	}
};
