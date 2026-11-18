#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class PMNKLBCPENN;
template <typename T> class KCMIFNGABDC_1;

#define PEKLKLAKMJA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15535AC0)
#define PEKLKLAKMJA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x155359E0)
#define PEKLKLAKMJA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15535D70)
#define PEKLKLAKMJA__CTOR_OFFSET UNITYSDK_OFFSET(0x15535CD0)

inline static constexpr unsigned int PEKLKLAKMJA_TypeDefinitionIndex = 82235;

class PEKLKLAKMJA : public ::MHMFINLCNFN
{
public:
	::PMNKLBCPENN* HIDBCHPGMCA; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* CKDKDNEGCPF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEKLKLAKMJA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEKLKLAKMJA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PEKLKLAKMJA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEKLKLAKMJA_GDEOPIBNOIN_OFFSET))(this);
	}
};
