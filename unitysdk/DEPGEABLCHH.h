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

#define DEPGEABLCHH_BAGCCOLGHPA_OFFSET UNITYSDK_OFFSET(0x19D5AF00)
#define DEPGEABLCHH_GGAGCFAACCC_OFFSET UNITYSDK_OFFSET(0x19D5B960)
#define DEPGEABLCHH_HDKONLPBANE_OFFSET UNITYSDK_OFFSET(0x19D5B8C0)
#define DEPGEABLCHH_KFBFKKIFJOO_OFFSET UNITYSDK_OFFSET(0x19D5AE00)
#define DEPGEABLCHH_KLKIIDHBCFG_OFFSET UNITYSDK_OFFSET(0x19D5B3F0)
#define DEPGEABLCHH_MGDKNIEIKOJ_OFFSET UNITYSDK_OFFSET(0x19D5B050)
#define DEPGEABLCHH__CTOR_OFFSET UNITYSDK_OFFSET(0x19D5B3E0)

inline static constexpr unsigned int DEPGEABLCHH_TypeDefinitionIndex = 66285;

class DEPGEABLCHH : public ::KDJEMDDDGPG
{
public:
	::MOJKADGHBIP* NLEDFNCPADJ; // 0x30
	::MoleMole::UIActivityCompTaskList2WidgetController* ENHOJEKHMND; // 0x38
	::MoleMole::UIActivityCompRowTaskListWidgetController* DECAAIBBAFB; // 0x40
	::MoleMole::UIActivityCompRowTaskListWidgetController* POFEKGFEMLN; // 0x48
	::MoleMole::UIActivityGuideInfoWidgetController* PGJPEEDEODO; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEPGEABLCHH__CTOR_OFFSET))(this);
	}

	::System::Void KFBFKKIFJOO(::MoleMole::UIBaseController* LPECOCOJLOO, ::GIBMJLOJLKD* EGOKJMCKOOK, ::MoleMole::UIControllerContextBase* KMCJLGLCOHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + DEPGEABLCHH_KFBFKKIFJOO_OFFSET))(this, LPECOCOJLOO, EGOKJMCKOOK, KMCJLGLCOHD);
	}

	::System::Void BAGCCOLGHPA(::MoleMole::UIControllerContextBase* BCINNCIHNHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + DEPGEABLCHH_BAGCCOLGHPA_OFFSET))(this, BCINNCIHNHB);
	}

	::System::Void MGDKNIEIKOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEPGEABLCHH_MGDKNIEIKOJ_OFFSET))(this);
	}

	::System::Void HDKONLPBANE(::MoleMole::UIBaseController* MIALFKCCCPI, ::GIBMJLOJLKD* KMGKAIDEIBA, ::MoleMole::UIControllerContextBase* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + DEPGEABLCHH_HDKONLPBANE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void KLKIIDHBCFG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEPGEABLCHH_KLKIIDHBCFG_OFFSET))(this);
	}

	::System::Void GGAGCFAACCC(::MoleMole::UIControllerContextBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + DEPGEABLCHH_GGAGCFAACCC_OFFSET))(this, MIALFKCCCPI);
	}
};
