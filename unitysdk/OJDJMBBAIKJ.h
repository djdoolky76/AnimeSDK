#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDJEMDDDGPG.h"

class CJIEIHEDMME;
class GIBMJLOJLKD;
class MOJKADGHBIP;
namespace MoleMole { class UIActivityGuideInfoWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }

#define OJDJMBBAIKJ_BAGCCOLGHPA_OFFSET UNITYSDK_OFFSET(0x1B79F230)
#define OJDJMBBAIKJ_FHGMNHFHHCD_OFFSET UNITYSDK_OFFSET(0x1B79F5B0)
#define OJDJMBBAIKJ_GGAGCFAACCC_OFFSET UNITYSDK_OFFSET(0x1B79F770)
#define OJDJMBBAIKJ_HDKONLPBANE_OFFSET UNITYSDK_OFFSET(0x1B79F6D0)
#define OJDJMBBAIKJ_KFBFKKIFJOO_OFFSET UNITYSDK_OFFSET(0x1B79F130)
#define OJDJMBBAIKJ_MEBHLMFEEIP_OFFSET UNITYSDK_OFFSET(0x1B79F640)
#define OJDJMBBAIKJ_MGDKNIEIKOJ_OFFSET UNITYSDK_OFFSET(0x1B79F360)
#define OJDJMBBAIKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B79F630)

inline static constexpr unsigned int OJDJMBBAIKJ_TypeDefinitionIndex = 43819;

class OJDJMBBAIKJ : public ::KDJEMDDDGPG
{
public:
	::CJIEIHEDMME* CGMOLEFHDEH; // 0x30
	::MoleMole::UIBaseController* ENHOJEKHMND; // 0x38
	::MoleMole::UIActivityGuideInfoWidgetController* PGJPEEDEODO; // 0x40
	::MOJKADGHBIP* NLEDFNCPADJ; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDJMBBAIKJ__CTOR_OFFSET))(this);
	}

	::System::Void KFBFKKIFJOO(::MoleMole::UIBaseController* LPECOCOJLOO, ::GIBMJLOJLKD* EGOKJMCKOOK, ::MoleMole::UIControllerContextBase* KMCJLGLCOHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + OJDJMBBAIKJ_KFBFKKIFJOO_OFFSET))(this, LPECOCOJLOO, EGOKJMCKOOK, KMCJLGLCOHD);
	}

	::System::Void BAGCCOLGHPA(::MoleMole::UIControllerContextBase* BCINNCIHNHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + OJDJMBBAIKJ_BAGCCOLGHPA_OFFSET))(this, BCINNCIHNHB);
	}

	::System::Void FHGMNHFHHCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDJMBBAIKJ_FHGMNHFHHCD_OFFSET))(this);
	}

	::System::Void MEBHLMFEEIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDJMBBAIKJ_MEBHLMFEEIP_OFFSET))(this);
	}

	::System::Void HDKONLPBANE(::MoleMole::UIBaseController* MIALFKCCCPI, ::GIBMJLOJLKD* KMGKAIDEIBA, ::MoleMole::UIControllerContextBase* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + OJDJMBBAIKJ_HDKONLPBANE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MGDKNIEIKOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDJMBBAIKJ_MGDKNIEIKOJ_OFFSET))(this);
	}

	::System::Void GGAGCFAACCC(::MoleMole::UIControllerContextBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + OJDJMBBAIKJ_GGAGCFAACCC_OFFSET))(this, MIALFKCCCPI);
	}
};
