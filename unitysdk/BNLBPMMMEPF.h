#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define BNLBPMMMEPF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1692F1C0)
#define BNLBPMMMEPF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1692F080)
#define BNLBPMMMEPF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1692F520)
#define BNLBPMMMEPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1692F420)

inline static constexpr unsigned int BNLBPMMMEPF_TypeDefinitionIndex = 84644;

class BNLBPMMMEPF : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLBPMMMEPF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLBPMMMEPF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BNLBPMMMEPF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLBPMMMEPF_GDEOPIBNOIN_OFFSET))(this);
	}
};
