#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class FKNKBAOGJOA;
class PMNKLBCPENN;

#define HPOAIDACMBL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x141ABAF0)
#define HPOAIDACMBL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x141ABA20)
#define HPOAIDACMBL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x141ABDD0)
#define HPOAIDACMBL__CTOR_OFFSET UNITYSDK_OFFSET(0x141ABD80)

inline static constexpr unsigned int HPOAIDACMBL_TypeDefinitionIndex = 72479;

class HPOAIDACMBL : public ::CGJEMKCKIJG
{
public:
	::PMNKLBCPENN* DLCLJPNEJIK; // 0x18
	::FKNKBAOGJOA* HHGILNNMNAK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPOAIDACMBL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPOAIDACMBL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HPOAIDACMBL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPOAIDACMBL_GDEOPIBNOIN_OFFSET))(this);
	}
};
