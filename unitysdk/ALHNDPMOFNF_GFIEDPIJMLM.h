#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALHNDPMOFNF_GNDNJKGJAEO;
class NCAHANJMPAC;

#define ALHNDPMOFNF_GFIEDPIJMLM_OILFPEELLJJ_OFFSET UNITYSDK_OFFSET(0x126679A0)
#define ALHNDPMOFNF_GFIEDPIJMLM__CTOR_OFFSET UNITYSDK_OFFSET(0x12667990)

inline static constexpr unsigned int ALHNDPMOFNF_GFIEDPIJMLM_TypeDefinitionIndex = 86723;

class ALHNDPMOFNF_GFIEDPIJMLM : public ::System::Object
{
public:
	::NCAHANJMPAC* DEKJDEPKKLH; // 0x10
	::ALHNDPMOFNF_GNDNJKGJAEO* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_GFIEDPIJMLM__CTOR_OFFSET))(this);
	}

	::System::Void OILFPEELLJJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_GFIEDPIJMLM_OILFPEELLJJ_OFFSET))(this);
	}
};
