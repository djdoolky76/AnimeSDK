#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define KNAFMPIEGPJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17727CF0)
#define KNAFMPIEGPJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17727C20)
#define KNAFMPIEGPJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17728040)
#define KNAFMPIEGPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17727FA0)

inline static constexpr unsigned int KNAFMPIEGPJ_TypeDefinitionIndex = 86819;

class KNAFMPIEGPJ : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAFMPIEGPJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAFMPIEGPJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KNAFMPIEGPJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAFMPIEGPJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
