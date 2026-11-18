#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define DOHJPLADBCC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12429850)
#define DOHJPLADBCC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x124296A0)
#define DOHJPLADBCC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12429B00)
#define DOHJPLADBCC__CTOR_OFFSET UNITYSDK_OFFSET(0x124299C0)

inline static constexpr unsigned int DOHJPLADBCC_TypeDefinitionIndex = 78747;

class DOHJPLADBCC : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::AAMKEDEDHPD_1<::System::Single>* PHODGPNGHEG; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* JBNEIAECMPG; // 0x28
	::CPABOPKIGAL* MMFNFINOFPN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHJPLADBCC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHJPLADBCC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DOHJPLADBCC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHJPLADBCC_GDEOPIBNOIN_OFFSET))(this);
	}
};
