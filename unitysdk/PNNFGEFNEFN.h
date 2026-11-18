#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define PNNFGEFNEFN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1BF33FD0)
#define PNNFGEFNEFN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1BF33E20)
#define PNNFGEFNEFN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1BF34270)
#define PNNFGEFNEFN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF34130)

inline static constexpr unsigned int PNNFGEFNEFN_TypeDefinitionIndex = 63602;

class PNNFGEFNEFN : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* CIFLENFEEGN; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* NNNPLPPOCCA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNFGEFNEFN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNFGEFNEFN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PNNFGEFNEFN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNFGEFNEFN_GDEOPIBNOIN_OFFSET))(this);
	}
};
