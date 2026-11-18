#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class IOEFCGGLDKK;
class MKBBPOFGLOF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class KCMIFNGABDC_1;

#define AMFBHKFGOMK_AMMNBINFGDD_OFFSET UNITYSDK_OFFSET(0x1422CBC0)
#define AMFBHKFGOMK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1422C480)
#define AMFBHKFGOMK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1422C160)
#define AMFBHKFGOMK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1422CC70)
#define AMFBHKFGOMK__CTOR_OFFSET UNITYSDK_OFFSET(0x1422C940)

inline static constexpr unsigned int AMFBHKFGOMK_TypeDefinitionIndex = 50597;

class AMFBHKFGOMK : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::KCMIFNGABDC_1<::IOEFCGGLDKK*>* PDNPLIGBCEJ; // 0x20
	::KCMIFNGABDC_1<::System::String*>* HABANHOKING; // 0x28
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x30
	::MKBBPOFGLOF* ACGPEIEBDAJ; // 0x38
	::KCMIFNGABDC_1<::System::Boolean>* PAMBCPNHEEC; // 0x40
	::KCMIFNGABDC_1<::System::String*>* JKAFMOMNFJC; // 0x48
	::KCMIFNGABDC_1<::System::Single>* JFCEGDMPAED; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFBHKFGOMK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFBHKFGOMK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AMFBHKFGOMK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* AMMNBINFGDD(::LGCNEDCMPKM BKBGPKNGNMF)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + AMFBHKFGOMK_AMMNBINFGDD_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFBHKFGOMK_GDEOPIBNOIN_OFFSET))(this);
	}
};
