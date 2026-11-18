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

#define LDAHCOCAKDB_BAGCCOLGHPA_OFFSET UNITYSDK_OFFSET(0x17683170)
#define LDAHCOCAKDB_GGAGCFAACCC_OFFSET UNITYSDK_OFFSET(0x176839B0)
#define LDAHCOCAKDB_HDKONLPBANE_OFFSET UNITYSDK_OFFSET(0x17683A40)
#define LDAHCOCAKDB_KFBFKKIFJOO_OFFSET UNITYSDK_OFFSET(0x17683070)
#define LDAHCOCAKDB_KLKIIDHBCFG_OFFSET UNITYSDK_OFFSET(0x176836D0)
#define LDAHCOCAKDB_MGDKNIEIKOJ_OFFSET UNITYSDK_OFFSET(0x176832C0)
#define LDAHCOCAKDB__CTOR_OFFSET UNITYSDK_OFFSET(0x176836C0)

inline static constexpr unsigned int LDAHCOCAKDB_TypeDefinitionIndex = 71758;

class LDAHCOCAKDB : public ::KDJEMDDDGPG
{
public:
	::MoleMole::UIActivityGuideInfoWidgetController* PGJPEEDEODO; // 0x30
	::MoleMole::UIActivityCompTaskList2WidgetController* ENHOJEKHMND; // 0x38
	::MoleMole::UIActivityCompRowTaskListWidgetController* EBCBNAODFAC; // 0x40
	::MOJKADGHBIP* NLEDFNCPADJ; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDAHCOCAKDB__CTOR_OFFSET))(this);
	}

	::System::Void KFBFKKIFJOO(::MoleMole::UIBaseController* LPECOCOJLOO, ::GIBMJLOJLKD* EGOKJMCKOOK, ::MoleMole::UIControllerContextBase* KMCJLGLCOHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + LDAHCOCAKDB_KFBFKKIFJOO_OFFSET))(this, LPECOCOJLOO, EGOKJMCKOOK, KMCJLGLCOHD);
	}

	::System::Void BAGCCOLGHPA(::MoleMole::UIControllerContextBase* BCINNCIHNHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + LDAHCOCAKDB_BAGCCOLGHPA_OFFSET))(this, BCINNCIHNHB);
	}

	::System::Void KLKIIDHBCFG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDAHCOCAKDB_KLKIIDHBCFG_OFFSET))(this);
	}

	::System::Void GGAGCFAACCC(::MoleMole::UIControllerContextBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + LDAHCOCAKDB_GGAGCFAACCC_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HDKONLPBANE(::MoleMole::UIBaseController* MIALFKCCCPI, ::GIBMJLOJLKD* KMGKAIDEIBA, ::MoleMole::UIControllerContextBase* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + LDAHCOCAKDB_HDKONLPBANE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MGDKNIEIKOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDAHCOCAKDB_MGDKNIEIKOJ_OFFSET))(this);
	}
};
