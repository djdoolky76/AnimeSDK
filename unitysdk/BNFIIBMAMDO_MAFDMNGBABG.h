#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNFIIBMAMDO;
namespace System { class Action; }

#define BNFIIBMAMDO_MAFDMNGBABG_CCOOGFKPMDP_OFFSET UNITYSDK_OFFSET(0x11520120)
#define BNFIIBMAMDO_MAFDMNGBABG_MFGPNAGONBB_OFFSET UNITYSDK_OFFSET(0x11520000)
#define BNFIIBMAMDO_MAFDMNGBABG__CTOR_OFFSET UNITYSDK_OFFSET(0x1151FFF0)

inline static constexpr unsigned int BNFIIBMAMDO_MAFDMNGBABG_TypeDefinitionIndex = 80863;

class BNFIIBMAMDO_MAFDMNGBABG : public ::System::Object
{
public:
	::System::Action* FMKABHLKHGI; // 0x10
	::BNFIIBMAMDO* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_MAFDMNGBABG__CTOR_OFFSET))(this);
	}

	::System::Void MFGPNAGONBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_MAFDMNGBABG_MFGPNAGONBB_OFFSET))(this);
	}

	::System::Void CCOOGFKPMDP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_MAFDMNGBABG_CCOOGFKPMDP_OFFSET))(this);
	}
};
