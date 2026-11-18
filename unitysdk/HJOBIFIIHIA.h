#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define HJOBIFIIHIA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13DA63E0)
#define HJOBIFIIHIA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13DA6230)
#define HJOBIFIIHIA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13DA66C0)
#define HJOBIFIIHIA__CTOR_OFFSET UNITYSDK_OFFSET(0x13DA6580)

inline static constexpr unsigned int HJOBIFIIHIA_TypeDefinitionIndex = 65302;

class HJOBIFIIHIA : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::System::Single>* PHODGPNGHEG; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* JBNEIAECMPG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOBIFIIHIA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOBIFIIHIA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HJOBIFIIHIA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOBIFIIHIA_GDEOPIBNOIN_OFFSET))(this);
	}
};
