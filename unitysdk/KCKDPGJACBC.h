#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define KCKDPGJACBC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x130AE510)
#define KCKDPGJACBC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x130AE310)
#define KCKDPGJACBC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x130AE9A0)
#define KCKDPGJACBC__CTOR_OFFSET UNITYSDK_OFFSET(0x130AE7D0)

inline static constexpr unsigned int KCKDPGJACBC_TypeDefinitionIndex = 63092;

class KCKDPGJACBC : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::KCMIFNGABDC_1<::System::String*>* KICNALMLGDA; // 0x20
	::CPABOPKIGAL* JMKHDHDEMKK; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* AKMDOCPLFBE; // 0x30
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKDPGJACBC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKDPGJACBC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KCKDPGJACBC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKDPGJACBC_GDEOPIBNOIN_OFFSET))(this);
	}
};
