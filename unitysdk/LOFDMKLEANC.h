#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define LOFDMKLEANC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16C6AF40)
#define LOFDMKLEANC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16C6ACE0)
#define LOFDMKLEANC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16C6B440)
#define LOFDMKLEANC__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6B240)

inline static constexpr unsigned int LOFDMKLEANC_TypeDefinitionIndex = 75293;

class LOFDMKLEANC : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* LDMKHBOIDMJ; // 0x18
	::CPABOPKIGAL* JMBPGMDOIAF; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x30
	::KCMIFNGABDC_1<::System::String*>* NGMPAIHFBMJ; // 0x38
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFDMKLEANC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFDMKLEANC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LOFDMKLEANC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFDMKLEANC_GDEOPIBNOIN_OFFSET))(this);
	}
};
