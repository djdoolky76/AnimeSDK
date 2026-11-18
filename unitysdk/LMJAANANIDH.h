#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;
class MKBBPOFGLOF;

#define LMJAANANIDH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14D3C2B0)
#define LMJAANANIDH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14D3C1E0)
#define LMJAANANIDH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14D3C4D0)
#define LMJAANANIDH__CTOR_OFFSET UNITYSDK_OFFSET(0x14D3C430)

inline static constexpr unsigned int LMJAANANIDH_TypeDefinitionIndex = 56066;

class LMJAANANIDH : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::MKBBPOFGLOF* LMDIMIIBPLD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJAANANIDH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJAANANIDH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LMJAANANIDH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJAANANIDH_GDEOPIBNOIN_OFFSET))(this);
	}
};
