#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;

#define DJMLHLHGMFI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x148AD930)
#define DJMLHLHGMFI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x148AD850)
#define DJMLHLHGMFI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x148ADB20)
#define DJMLHLHGMFI__CTOR_OFFSET UNITYSDK_OFFSET(0x148AD990)

inline static constexpr unsigned int DJMLHLHGMFI_TypeDefinitionIndex = 85540;

class DJMLHLHGMFI : public ::MHMFINLCNFN
{
public:
	::MKBBPOFGLOF* KNMBHIBCKBN; // 0x28
	::MKBBPOFGLOF* JMBPGMDOIAF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMLHLHGMFI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMLHLHGMFI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DJMLHLHGMFI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMLHLHGMFI_GDEOPIBNOIN_OFFSET))(this);
	}
};
