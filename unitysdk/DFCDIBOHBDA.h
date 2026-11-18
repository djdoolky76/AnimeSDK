#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define DFCDIBOHBDA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1974CCC0)
#define DFCDIBOHBDA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1974CC70)
#define DFCDIBOHBDA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1974CE50)
#define DFCDIBOHBDA__CTOR_OFFSET UNITYSDK_OFFSET(0x1974CE40)

inline static constexpr unsigned int DFCDIBOHBDA_TypeDefinitionIndex = 51349;

class DFCDIBOHBDA : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFCDIBOHBDA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFCDIBOHBDA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DFCDIBOHBDA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFCDIBOHBDA_GDEOPIBNOIN_OFFSET))(this);
	}
};
