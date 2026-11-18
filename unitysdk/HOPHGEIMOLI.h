#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define HOPHGEIMOLI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12E93C20)
#define HOPHGEIMOLI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12E93A70)
#define HOPHGEIMOLI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12E93F50)
#define HOPHGEIMOLI__CTOR_OFFSET UNITYSDK_OFFSET(0x12E93E10)

inline static constexpr unsigned int HOPHGEIMOLI_TypeDefinitionIndex = 39909;

class HOPHGEIMOLI : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* PJNALFNPNBK; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::CPABOPKIGAL* MMFNFINOFPN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPHGEIMOLI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPHGEIMOLI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HOPHGEIMOLI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPHGEIMOLI_GDEOPIBNOIN_OFFSET))(this);
	}
};
