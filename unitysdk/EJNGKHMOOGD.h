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

#define EJNGKHMOOGD_BAGCCOLGHPA_OFFSET UNITYSDK_OFFSET(0x10641F90)
#define EJNGKHMOOGD_GGAGCFAACCC_OFFSET UNITYSDK_OFFSET(0x10642500)
#define EJNGKHMOOGD_HDKONLPBANE_OFFSET UNITYSDK_OFFSET(0x10642590)
#define EJNGKHMOOGD_KFBFKKIFJOO_OFFSET UNITYSDK_OFFSET(0x10641E90)
#define EJNGKHMOOGD_MGDKNIEIKOJ_OFFSET UNITYSDK_OFFSET(0x106420E0)
#define EJNGKHMOOGD_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x10642630)
#define EJNGKHMOOGD__CTOR_OFFSET UNITYSDK_OFFSET(0x106424F0)

inline static constexpr unsigned int EJNGKHMOOGD_TypeDefinitionIndex = 88087;

class EJNGKHMOOGD : public ::KDJEMDDDGPG
{
public:
	::MoleMole::UIActivityGuideInfoWidgetController* PGJPEEDEODO; // 0x30
	::MoleMole::UIActivityCompTaskList2WidgetController* ENHOJEKHMND; // 0x38
	::MOJKADGHBIP* NLEDFNCPADJ; // 0x40
	::MoleMole::UIActivityCompRowTaskListWidgetController* KGOJHFLJLEK; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNGKHMOOGD__CTOR_OFFSET))(this);
	}

	::System::Void KFBFKKIFJOO(::MoleMole::UIBaseController* LPECOCOJLOO, ::GIBMJLOJLKD* EGOKJMCKOOK, ::MoleMole::UIControllerContextBase* KMCJLGLCOHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + EJNGKHMOOGD_KFBFKKIFJOO_OFFSET))(this, LPECOCOJLOO, EGOKJMCKOOK, KMCJLGLCOHD);
	}

	::System::Void BAGCCOLGHPA(::MoleMole::UIControllerContextBase* BCINNCIHNHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + EJNGKHMOOGD_BAGCCOLGHPA_OFFSET))(this, BCINNCIHNHB);
	}

	::System::Void GGAGCFAACCC(::MoleMole::UIControllerContextBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + EJNGKHMOOGD_GGAGCFAACCC_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HDKONLPBANE(::MoleMole::UIBaseController* MIALFKCCCPI, ::GIBMJLOJLKD* KMGKAIDEIBA, ::MoleMole::UIControllerContextBase* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + EJNGKHMOOGD_HDKONLPBANE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MGDKNIEIKOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNGKHMOOGD_MGDKNIEIKOJ_OFFSET))(this);
	}

	::System::Void PDKCHDBODJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNGKHMOOGD_PDKCHDBODJB_OFFSET))(this);
	}
};
