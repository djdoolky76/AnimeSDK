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

#define CLBILCAMFDI_BAGCCOLGHPA_OFFSET UNITYSDK_OFFSET(0x19A172C0)
#define CLBILCAMFDI_GGAGCFAACCC_OFFSET UNITYSDK_OFFSET(0x19A17980)
#define CLBILCAMFDI_HDKONLPBANE_OFFSET UNITYSDK_OFFSET(0x19A177A0)
#define CLBILCAMFDI_KFBFKKIFJOO_OFFSET UNITYSDK_OFFSET(0x19A171C0)
#define CLBILCAMFDI_KLKIIDHBCFG_OFFSET UNITYSDK_OFFSET(0x19A17840)
#define CLBILCAMFDI_MGDKNIEIKOJ_OFFSET UNITYSDK_OFFSET(0x19A17410)
#define CLBILCAMFDI__CTOR_OFFSET UNITYSDK_OFFSET(0x19A17790)

inline static constexpr unsigned int CLBILCAMFDI_TypeDefinitionIndex = 93152;

class CLBILCAMFDI : public ::KDJEMDDDGPG
{
public:
	::MOJKADGHBIP* NLEDFNCPADJ; // 0x30
	::MoleMole::UIActivityCompRowTaskListWidgetController* EBCBNAODFAC; // 0x38
	::MoleMole::UIActivityCompTaskList2WidgetController* ENHOJEKHMND; // 0x40
	::MoleMole::UIActivityGuideInfoWidgetController* PGJPEEDEODO; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBILCAMFDI__CTOR_OFFSET))(this);
	}

	::System::Void KFBFKKIFJOO(::MoleMole::UIBaseController* LPECOCOJLOO, ::GIBMJLOJLKD* EGOKJMCKOOK, ::MoleMole::UIControllerContextBase* KMCJLGLCOHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLBILCAMFDI_KFBFKKIFJOO_OFFSET))(this, LPECOCOJLOO, EGOKJMCKOOK, KMCJLGLCOHD);
	}

	::System::Void BAGCCOLGHPA(::MoleMole::UIControllerContextBase* BCINNCIHNHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLBILCAMFDI_BAGCCOLGHPA_OFFSET))(this, BCINNCIHNHB);
	}

	::System::Void HDKONLPBANE(::MoleMole::UIBaseController* MIALFKCCCPI, ::GIBMJLOJLKD* KMGKAIDEIBA, ::MoleMole::UIControllerContextBase* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLBILCAMFDI_HDKONLPBANE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MGDKNIEIKOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBILCAMFDI_MGDKNIEIKOJ_OFFSET))(this);
	}

	::System::Void GGAGCFAACCC(::MoleMole::UIControllerContextBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLBILCAMFDI_GGAGCFAACCC_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void KLKIIDHBCFG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBILCAMFDI_KLKIIDHBCFG_OFFSET))(this);
	}
};
