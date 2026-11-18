#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDJEMDDDGPG.h"

class GIBMJLOJLKD;
class MOJKADGHBIP;
namespace MoleMole { class UIActivityCompRowTaskListWidgetController; }
namespace MoleMole { class UIActivityCompTaskList2WidgetController; }
namespace MoleMole { class UIActivityGuideInfoWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }

#define FHBKCMHIALI_BAGCCOLGHPA_OFFSET UNITYSDK_OFFSET(0x13212630)
#define FHBKCMHIALI_GGAGCFAACCC_OFFSET UNITYSDK_OFFSET(0x13212D90)
#define FHBKCMHIALI_HDKONLPBANE_OFFSET UNITYSDK_OFFSET(0x13212CF0)
#define FHBKCMHIALI_KFBFKKIFJOO_OFFSET UNITYSDK_OFFSET(0x13212530)
#define FHBKCMHIALI_KLKIIDHBCFG_OFFSET UNITYSDK_OFFSET(0x13212B20)
#define FHBKCMHIALI_MGDKNIEIKOJ_OFFSET UNITYSDK_OFFSET(0x13212780)
#define FHBKCMHIALI__CTOR_OFFSET UNITYSDK_OFFSET(0x13212B10)

inline static constexpr unsigned int FHBKCMHIALI_TypeDefinitionIndex = 73632;

class FHBKCMHIALI : public ::KDJEMDDDGPG
{
public:
	::MoleMole::UIActivityCompTaskList2WidgetController* ENHOJEKHMND; // 0x30
	::MOJKADGHBIP* NLEDFNCPADJ; // 0x38
	::MoleMole::UIActivityCompRowTaskListWidgetController* EBCBNAODFAC; // 0x40
	::MoleMole::UIActivityCompRowTaskListWidgetController* HEEHGFHPGAI; // 0x48
	::MoleMole::UIActivityGuideInfoWidgetController* PGJPEEDEODO; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBKCMHIALI__CTOR_OFFSET))(this);
	}

	::System::Void KFBFKKIFJOO(::MoleMole::UIBaseController* LPECOCOJLOO, ::GIBMJLOJLKD* EGOKJMCKOOK, ::MoleMole::UIControllerContextBase* KMCJLGLCOHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + FHBKCMHIALI_KFBFKKIFJOO_OFFSET))(this, LPECOCOJLOO, EGOKJMCKOOK, KMCJLGLCOHD);
	}

	::System::Void BAGCCOLGHPA(::MoleMole::UIControllerContextBase* BCINNCIHNHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + FHBKCMHIALI_BAGCCOLGHPA_OFFSET))(this, BCINNCIHNHB);
	}

	::System::Void KLKIIDHBCFG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBKCMHIALI_KLKIIDHBCFG_OFFSET))(this);
	}

	::System::Void HDKONLPBANE(::MoleMole::UIBaseController* MIALFKCCCPI, ::GIBMJLOJLKD* KMGKAIDEIBA, ::MoleMole::UIControllerContextBase* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + FHBKCMHIALI_HDKONLPBANE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MGDKNIEIKOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBKCMHIALI_MGDKNIEIKOJ_OFFSET))(this);
	}

	::System::Void GGAGCFAACCC(::MoleMole::UIControllerContextBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + FHBKCMHIALI_GGAGCFAACCC_OFFSET))(this, MIALFKCCCPI);
	}
};
