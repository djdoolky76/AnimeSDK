#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;
class MKBBPOFGLOF;

#define DEJKGDGKHMK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x147C79C0)
#define DEJKGDGKHMK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x147C7880)
#define DEJKGDGKHMK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x147C7D40)
#define DEJKGDGKHMK__CTOR_OFFSET UNITYSDK_OFFSET(0x147C7C30)

inline static constexpr unsigned int DEJKGDGKHMK_TypeDefinitionIndex = 50222;

class DEJKGDGKHMK : public ::CGJEMKCKIJG
{
public:
	::MKBBPOFGLOF* FNBANELCNCF; // 0x18
	::MKBBPOFGLOF* LMDIMIIBPLD; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJKGDGKHMK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJKGDGKHMK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DEJKGDGKHMK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJKGDGKHMK_GDEOPIBNOIN_OFFSET))(this);
	}
};
