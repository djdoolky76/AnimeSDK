#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define OCFHJEKFPON_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xB308C00)
#define OCFHJEKFPON_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xB308A50)
#define OCFHJEKFPON_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xB309180)
#define OCFHJEKFPON__CTOR_OFFSET UNITYSDK_OFFSET(0xB308FF0)

inline static constexpr unsigned int OCFHJEKFPON_TypeDefinitionIndex = 71642;

class OCFHJEKFPON : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* FGIMDOOEHBD; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28
	::MKBBPOFGLOF* PLEJMLIFFHG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFHJEKFPON__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFHJEKFPON_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OCFHJEKFPON_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFHJEKFPON_GDEOPIBNOIN_OFFSET))(this);
	}
};
