#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDJEMDDDGPG.h"

class GIBMJLOJLKD;
class GMFFKOMJAAN;
class MOJKADGHBIP;
namespace MoleMole { class UIActivityCompRowTaskListWidgetController; }
namespace MoleMole { class UIActivityCompTaskCommonWidgetController; }
namespace MoleMole { class UIActivityGuideInfoWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }

#define KNDLKANICOC_BAGCCOLGHPA_OFFSET UNITYSDK_OFFSET(0x129A9A30)
#define KNDLKANICOC_DAEPCFBABAD_OFFSET UNITYSDK_OFFSET(0x129A9F60)
#define KNDLKANICOC_GGAGCFAACCC_OFFSET UNITYSDK_OFFSET(0x129AA850)
#define KNDLKANICOC_HDKONLPBANE_OFFSET UNITYSDK_OFFSET(0x129AA7B0)
#define KNDLKANICOC_KFBFKKIFJOO_OFFSET UNITYSDK_OFFSET(0x129A9870)
#define KNDLKANICOC_MGDKNIEIKOJ_OFFSET UNITYSDK_OFFSET(0x129A9AB0)
#define KNDLKANICOC__CTOR_OFFSET UNITYSDK_OFFSET(0x129A9F50)

inline static constexpr unsigned int KNDLKANICOC_TypeDefinitionIndex = 69938;

class KNDLKANICOC : public ::KDJEMDDDGPG
{
public:
	::GMFFKOMJAAN* HIFNMMOEBJL; // 0x30
	::MOJKADGHBIP* NLEDFNCPADJ; // 0x38
	::MoleMole::UIActivityCompRowTaskListWidgetController* PFPGKIEPCMF; // 0x40
	::MoleMole::UIActivityGuideInfoWidgetController* PGJPEEDEODO; // 0x48
	::MoleMole::UIActivityCompTaskCommonWidgetController* ENHOJEKHMND; // 0x50
	::MoleMole::UIActivityCompRowTaskListWidgetController* LAPHNKIFLIE; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDLKANICOC__CTOR_OFFSET))(this);
	}

	::System::Void KFBFKKIFJOO(::MoleMole::UIBaseController* LPECOCOJLOO, ::GIBMJLOJLKD* EGOKJMCKOOK, ::MoleMole::UIControllerContextBase* KMCJLGLCOHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + KNDLKANICOC_KFBFKKIFJOO_OFFSET))(this, LPECOCOJLOO, EGOKJMCKOOK, KMCJLGLCOHD);
	}

	::System::Void BAGCCOLGHPA(::MoleMole::UIControllerContextBase* BCINNCIHNHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + KNDLKANICOC_BAGCCOLGHPA_OFFSET))(this, BCINNCIHNHB);
	}

	::System::Void MGDKNIEIKOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDLKANICOC_MGDKNIEIKOJ_OFFSET))(this);
	}

	::System::Void HDKONLPBANE(::MoleMole::UIBaseController* MIALFKCCCPI, ::GIBMJLOJLKD* KMGKAIDEIBA, ::MoleMole::UIControllerContextBase* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + KNDLKANICOC_HDKONLPBANE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void DAEPCFBABAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDLKANICOC_DAEPCFBABAD_OFFSET))(this);
	}

	::System::Void GGAGCFAACCC(::MoleMole::UIControllerContextBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + KNDLKANICOC_GGAGCFAACCC_OFFSET))(this, MIALFKCCCPI);
	}
};
