#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define MJJJOALKKIB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x151D9410)
#define MJJJOALKKIB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x151D9380)
#define MJJJOALKKIB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x151D9530)
#define MJJJOALKKIB__CTOR_OFFSET UNITYSDK_OFFSET(0x151D9490)

inline static constexpr unsigned int MJJJOALKKIB_TypeDefinitionIndex = 40493;

class MJJJOALKKIB : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* AOGHABEAMOF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJJJOALKKIB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJJJOALKKIB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MJJJOALKKIB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJJJOALKKIB_GDEOPIBNOIN_OFFSET))(this);
	}
};
