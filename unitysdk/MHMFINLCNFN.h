#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define MHMFINLCNFN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16C5F830)
#define MHMFINLCNFN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16C8B9A0)
#define MHMFINLCNFN__CTOR_OFFSET UNITYSDK_OFFSET(0x16C5FAD0)

inline static constexpr unsigned int MHMFINLCNFN_TypeDefinitionIndex = 66411;

class MHMFINLCNFN : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMFINLCNFN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMFINLCNFN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMFINLCNFN_GDEOPIBNOIN_OFFSET))(this);
	}
};
