#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define LECKMFNPJHP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15DF0370)
#define LECKMFNPJHP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15DF0110)
#define LECKMFNPJHP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15DF08E0)
#define LECKMFNPJHP__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF06E0)

inline static constexpr unsigned int LECKMFNPJHP_TypeDefinitionIndex = 42158;

class LECKMFNPJHP : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::KCMIFNGABDC_1<::System::String*>* NBNKJCEMOHD; // 0x20
	::KCMIFNGABDC_1<::System::Single>* JPIHKNPJKPH; // 0x28
	::KCMIFNGABDC_1<::System::String*>* BPPBIJBEJAF; // 0x30
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x38
	::MKBBPOFGLOF* PLEJMLIFFHG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECKMFNPJHP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECKMFNPJHP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LECKMFNPJHP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECKMFNPJHP_GDEOPIBNOIN_OFFSET))(this);
	}
};
