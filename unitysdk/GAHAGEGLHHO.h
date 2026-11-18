#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define GAHAGEGLHHO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x116D7840)
#define GAHAGEGLHHO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x116D7520)
#define GAHAGEGLHHO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x116D7F20)
#define GAHAGEGLHHO__CTOR_OFFSET UNITYSDK_OFFSET(0x116D7C60)

inline static constexpr unsigned int GAHAGEGLHHO_TypeDefinitionIndex = 86559;

class GAHAGEGLHHO : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* OKKDKMMGMCJ; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* GLDMNFLCBOL; // 0x20
	::MKBBPOFGLOF* DKPAPDKACKG; // 0x28
	::MKBBPOFGLOF* JKKCNNNIKLG; // 0x30
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* AKACBDEKGCM; // 0x38
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x40
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* FOFEBGMHPNP; // 0x48
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHAGEGLHHO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHAGEGLHHO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GAHAGEGLHHO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHAGEGLHHO_GDEOPIBNOIN_OFFSET))(this);
	}
};
