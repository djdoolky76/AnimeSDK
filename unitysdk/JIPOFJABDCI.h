#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define JIPOFJABDCI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x198CEAB0)
#define JIPOFJABDCI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x198CE9E0)
#define JIPOFJABDCI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x198CECD0)
#define JIPOFJABDCI__CTOR_OFFSET UNITYSDK_OFFSET(0x198CEC30)

inline static constexpr unsigned int JIPOFJABDCI_TypeDefinitionIndex = 67785;

class JIPOFJABDCI : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPOFJABDCI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPOFJABDCI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JIPOFJABDCI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPOFJABDCI_GDEOPIBNOIN_OFFSET))(this);
	}
};
