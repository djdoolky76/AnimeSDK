#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class PDLAGKINJNL;
class PMNKLBCPENN;

#define IHINEEOFMAO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13AA36B0)
#define IHINEEOFMAO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13AA35E0)
#define IHINEEOFMAO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13AA39B0)
#define IHINEEOFMAO__CTOR_OFFSET UNITYSDK_OFFSET(0x13AA3960)

inline static constexpr unsigned int IHINEEOFMAO_TypeDefinitionIndex = 80855;

class IHINEEOFMAO : public ::CGJEMKCKIJG
{
public:
	::PMNKLBCPENN* HHGILNNMNAK; // 0x18
	::PDLAGKINJNL* ACDKKCINLON; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHINEEOFMAO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHINEEOFMAO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IHINEEOFMAO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHINEEOFMAO_GDEOPIBNOIN_OFFSET))(this);
	}
};
