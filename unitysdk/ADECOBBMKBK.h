#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define ADECOBBMKBK_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x181E8330)
#define ADECOBBMKBK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x181E82C0)
#define ADECOBBMKBK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x181E8270)
#define ADECOBBMKBK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x181E83E0)
#define ADECOBBMKBK__CTOR_OFFSET UNITYSDK_OFFSET(0x181E83D0)

inline static constexpr unsigned int ADECOBBMKBK_TypeDefinitionIndex = 58580;

class ADECOBBMKBK : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADECOBBMKBK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADECOBBMKBK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ADECOBBMKBK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADECOBBMKBK_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ADECOBBMKBK_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
