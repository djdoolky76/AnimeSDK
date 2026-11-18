#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define FELBIGNDNKI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11D016B0)
#define FELBIGNDNKI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11D015E0)
#define FELBIGNDNKI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11D01800)
#define FELBIGNDNKI__CTOR_OFFSET UNITYSDK_OFFSET(0x11D01760)

inline static constexpr unsigned int FELBIGNDNKI_TypeDefinitionIndex = 88820;

class FELBIGNDNKI : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FELBIGNDNKI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FELBIGNDNKI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FELBIGNDNKI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FELBIGNDNKI_GDEOPIBNOIN_OFFSET))(this);
	}
};
