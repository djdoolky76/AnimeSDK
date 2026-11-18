#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define GOGAGDMCLGD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17A2A510)
#define GOGAGDMCLGD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17A2A3D0)
#define GOGAGDMCLGD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17A2A8E0)
#define GOGAGDMCLGD__CTOR_OFFSET UNITYSDK_OFFSET(0x17A2A7E0)

inline static constexpr unsigned int GOGAGDMCLGD_TypeDefinitionIndex = 53478;

class GOGAGDMCLGD : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::KCMIFNGABDC_1<::System::String*>* HGINEJMMLPN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOGAGDMCLGD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOGAGDMCLGD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GOGAGDMCLGD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOGAGDMCLGD_GDEOPIBNOIN_OFFSET))(this);
	}
};
