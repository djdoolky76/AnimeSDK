#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define BOCIAFELDMH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18DAF940)
#define BOCIAFELDMH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18DAF870)
#define BOCIAFELDMH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18DAFB30)
#define BOCIAFELDMH__CTOR_OFFSET UNITYSDK_OFFSET(0x18DAFA90)

inline static constexpr unsigned int BOCIAFELDMH_TypeDefinitionIndex = 39740;

class BOCIAFELDMH : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCIAFELDMH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCIAFELDMH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BOCIAFELDMH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCIAFELDMH_GDEOPIBNOIN_OFFSET))(this);
	}
};
