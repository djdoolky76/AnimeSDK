#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define AJEFNEFPFNF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12CFBE60)
#define AJEFNEFPFNF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12CFBD20)
#define AJEFNEFPFNF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12CFC030)
#define AJEFNEFPFNF__CTOR_OFFSET UNITYSDK_OFFSET(0x12CFBF30)

inline static constexpr unsigned int AJEFNEFPFNF_TypeDefinitionIndex = 57721;

class AJEFNEFPFNF : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::KCMIFNGABDC_1<::System::Single>* NAIDADGNEDI; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEFNEFPFNF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEFNEFPFNF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AJEFNEFPFNF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEFNEFPFNF_GDEOPIBNOIN_OFFSET))(this);
	}
};
