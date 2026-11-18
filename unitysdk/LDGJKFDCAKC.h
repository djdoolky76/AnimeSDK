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

#define LDGJKFDCAKC_BAGCCOLGHPA_OFFSET UNITYSDK_OFFSET(0x15244E60)
#define LDGJKFDCAKC_BPFDHEPEIHO_OFFSET UNITYSDK_OFFSET(0x152463B0)
#define LDGJKFDCAKC_GGAGCFAACCC_OFFSET UNITYSDK_OFFSET(0x15246280)
#define LDGJKFDCAKC_HDKONLPBANE_OFFSET UNITYSDK_OFFSET(0x15246310)
#define LDGJKFDCAKC_KFBFKKIFJOO_OFFSET UNITYSDK_OFFSET(0x15244D60)
#define LDGJKFDCAKC_MGDKNIEIKOJ_OFFSET UNITYSDK_OFFSET(0x15244FB0)
#define LDGJKFDCAKC_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x15245610)
#define LDGJKFDCAKC__CTOR_OFFSET UNITYSDK_OFFSET(0x15245600)

inline static constexpr unsigned int LDGJKFDCAKC_TypeDefinitionIndex = 82308;

class LDGJKFDCAKC : public ::KDJEMDDDGPG
{
public:
	::MoleMole::UIActivityCompTaskList2WidgetController* ENHOJEKHMND; // 0x30
	::MoleMole::UIActivityCompRowTaskListWidgetController* IEMNIDCKELL; // 0x38
	::MOJKADGHBIP* NLEDFNCPADJ; // 0x40
	::MoleMole::UIActivityCompRowTaskListWidgetController* IEDALIMAPOI; // 0x48
	::MoleMole::UIActivityCompRowTaskListWidgetController* KGOJHFLJLEK; // 0x50
	::MoleMole::UIActivityGuideInfoWidgetController* PGJPEEDEODO; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGJKFDCAKC__CTOR_OFFSET))(this);
	}

	::System::Void KFBFKKIFJOO(::MoleMole::UIBaseController* LPECOCOJLOO, ::GIBMJLOJLKD* EGOKJMCKOOK, ::MoleMole::UIControllerContextBase* KMCJLGLCOHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + LDGJKFDCAKC_KFBFKKIFJOO_OFFSET))(this, LPECOCOJLOO, EGOKJMCKOOK, KMCJLGLCOHD);
	}

	::System::Void BAGCCOLGHPA(::MoleMole::UIControllerContextBase* BCINNCIHNHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + LDGJKFDCAKC_BAGCCOLGHPA_OFFSET))(this, BCINNCIHNHB);
	}

	::System::Void MGDKNIEIKOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGJKFDCAKC_MGDKNIEIKOJ_OFFSET))(this);
	}

	::System::Void GGAGCFAACCC(::MoleMole::UIControllerContextBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + LDGJKFDCAKC_GGAGCFAACCC_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HDKONLPBANE(::MoleMole::UIBaseController* MIALFKCCCPI, ::GIBMJLOJLKD* KMGKAIDEIBA, ::MoleMole::UIControllerContextBase* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + LDGJKFDCAKC_HDKONLPBANE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void BPFDHEPEIHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGJKFDCAKC_BPFDHEPEIHO_OFFSET))(this);
	}

	::System::Void PDKCHDBODJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGJKFDCAKC_PDKCHDBODJB_OFFSET))(this);
	}
};
