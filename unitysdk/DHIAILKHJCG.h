#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDJEMDDDGPG.h"

class GIBMJLOJLKD;
class MOJKADGHBIP;
class PJPCLCIGNGG;
namespace MoleMole { class UIActivityCompRowTaskListWidgetController; }
namespace MoleMole { class UIActivityCompTaskList2WidgetController; }
namespace MoleMole { class UIActivityGuideInfoWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralConsoleExistNormalBtnWidgetController; }

#define DHIAILKHJCG_BAGCCOLGHPA_OFFSET UNITYSDK_OFFSET(0x16BA0040)
#define DHIAILKHJCG_GGAGCFAACCC_OFFSET UNITYSDK_OFFSET(0x16BA0660)
#define DHIAILKHJCG_HDKONLPBANE_OFFSET UNITYSDK_OFFSET(0x16BA06F0)
#define DHIAILKHJCG_KFBFKKIFJOO_OFFSET UNITYSDK_OFFSET(0x16B9FF40)
#define DHIAILKHJCG_KLKIIDHBCFG_OFFSET UNITYSDK_OFFSET(0x16BA05A0)
#define DHIAILKHJCG_MGDKNIEIKOJ_OFFSET UNITYSDK_OFFSET(0x16BA0190)
#define DHIAILKHJCG__CTOR_OFFSET UNITYSDK_OFFSET(0x16BA0590)

inline static constexpr unsigned int DHIAILKHJCG_TypeDefinitionIndex = 61552;

class DHIAILKHJCG : public ::KDJEMDDDGPG
{
public:
	::MoleMole::UIGeneralConsoleExistNormalBtnWidgetController* HIBCIGOOMLI; // 0x30
	::MoleMole::UIActivityCompRowTaskListWidgetController* EBCBNAODFAC; // 0x38
	::MOJKADGHBIP* NLEDFNCPADJ; // 0x40
	::MoleMole::UIActivityCompRowTaskListWidgetController* NFIJDOIPKND; // 0x48
	::MoleMole::UIActivityGuideInfoWidgetController* PGJPEEDEODO; // 0x50
	::PJPCLCIGNGG* HIFNMMOEBJL; // 0x58
	::MoleMole::UIActivityCompTaskList2WidgetController* ENHOJEKHMND; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIAILKHJCG__CTOR_OFFSET))(this);
	}

	::System::Void KFBFKKIFJOO(::MoleMole::UIBaseController* LPECOCOJLOO, ::GIBMJLOJLKD* EGOKJMCKOOK, ::MoleMole::UIControllerContextBase* KMCJLGLCOHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + DHIAILKHJCG_KFBFKKIFJOO_OFFSET))(this, LPECOCOJLOO, EGOKJMCKOOK, KMCJLGLCOHD);
	}

	::System::Void BAGCCOLGHPA(::MoleMole::UIControllerContextBase* BCINNCIHNHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + DHIAILKHJCG_BAGCCOLGHPA_OFFSET))(this, BCINNCIHNHB);
	}

	::System::Void MGDKNIEIKOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIAILKHJCG_MGDKNIEIKOJ_OFFSET))(this);
	}

	::System::Void KLKIIDHBCFG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIAILKHJCG_KLKIIDHBCFG_OFFSET))(this);
	}

	::System::Void GGAGCFAACCC(::MoleMole::UIControllerContextBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + DHIAILKHJCG_GGAGCFAACCC_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HDKONLPBANE(::MoleMole::UIBaseController* MIALFKCCCPI, ::GIBMJLOJLKD* KMGKAIDEIBA, ::MoleMole::UIControllerContextBase* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + DHIAILKHJCG_HDKONLPBANE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
