#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define JBBMIKBHIEP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16ABFEC0)
#define JBBMIKBHIEP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16ABFDF0)
#define JBBMIKBHIEP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16AC00C0)
#define JBBMIKBHIEP__CTOR_OFFSET UNITYSDK_OFFSET(0x16AC0020)

inline static constexpr unsigned int JBBMIKBHIEP_TypeDefinitionIndex = 51518;

class JBBMIKBHIEP : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBMIKBHIEP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBMIKBHIEP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JBBMIKBHIEP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBMIKBHIEP_GDEOPIBNOIN_OFFSET))(this);
	}
};
