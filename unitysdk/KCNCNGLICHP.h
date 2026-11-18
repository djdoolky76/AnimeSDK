#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define KCNCNGLICHP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15B83310)
#define KCNCNGLICHP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15B830B0)
#define KCNCNGLICHP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15B83B10)
#define KCNCNGLICHP__CTOR_OFFSET UNITYSDK_OFFSET(0x15B83950)

inline static constexpr unsigned int KCNCNGLICHP_TypeDefinitionIndex = 78366;

class KCNCNGLICHP : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* LFDPDKIDPAK; // 0x20
	::KCMIFNGABDC_1<::System::Single>* NHKNILFDKGG; // 0x28
	::KCMIFNGABDC_1<::System::Single>* KKJKPJEGKJC; // 0x30
	::CPABOPKIGAL* MMFNFINOFPN; // 0x38
	::KCMIFNGABDC_1<::System::String*>* MNLEAPLFGIB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNCNGLICHP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNCNGLICHP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KCNCNGLICHP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNCNGLICHP_GDEOPIBNOIN_OFFSET))(this);
	}
};
