#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define NDKKBBHDMKF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x105ADB10)
#define NDKKBBHDMKF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x105AD960)
#define NDKKBBHDMKF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x105ADE40)
#define NDKKBBHDMKF__CTOR_OFFSET UNITYSDK_OFFSET(0x105ADD00)

inline static constexpr unsigned int NDKKBBHDMKF_TypeDefinitionIndex = 51697;

class NDKKBBHDMKF : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* PJNALFNPNBK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKKBBHDMKF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKKBBHDMKF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NDKKBBHDMKF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKKBBHDMKF_GDEOPIBNOIN_OFFSET))(this);
	}
};
