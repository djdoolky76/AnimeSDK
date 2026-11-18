#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDJEMDDDGPG.h"

class GIBMJLOJLKD;
class MOJKADGHBIP;
namespace MoleMole { class UIActivityCompTaskHIAWidgetController; }
namespace MoleMole { class UIActivityGuideInfoWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }

#define ALODAJDBHPE_BAGCCOLGHPA_OFFSET UNITYSDK_OFFSET(0x143B6050)
#define ALODAJDBHPE_FHGMNHFHHCD_OFFSET UNITYSDK_OFFSET(0x143B63D0)
#define ALODAJDBHPE_GGAGCFAACCC_OFFSET UNITYSDK_OFFSET(0x143B64F0)
#define ALODAJDBHPE_HDKONLPBANE_OFFSET UNITYSDK_OFFSET(0x143B6580)
#define ALODAJDBHPE_KFBFKKIFJOO_OFFSET UNITYSDK_OFFSET(0x143B5F50)
#define ALODAJDBHPE_MEBHLMFEEIP_OFFSET UNITYSDK_OFFSET(0x143B6460)
#define ALODAJDBHPE_MGDKNIEIKOJ_OFFSET UNITYSDK_OFFSET(0x143B6180)
#define ALODAJDBHPE__CTOR_OFFSET UNITYSDK_OFFSET(0x143B6450)

inline static constexpr unsigned int ALODAJDBHPE_TypeDefinitionIndex = 65012;

class ALODAJDBHPE : public ::KDJEMDDDGPG
{
public:
	::MoleMole::UIActivityGuideInfoWidgetController* PGJPEEDEODO; // 0x30
	::MoleMole::UIActivityCompTaskHIAWidgetController* ENHOJEKHMND; // 0x38
	::MOJKADGHBIP* NLEDFNCPADJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALODAJDBHPE__CTOR_OFFSET))(this);
	}

	::System::Void KFBFKKIFJOO(::MoleMole::UIBaseController* LPECOCOJLOO, ::GIBMJLOJLKD* EGOKJMCKOOK, ::MoleMole::UIControllerContextBase* KMCJLGLCOHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + ALODAJDBHPE_KFBFKKIFJOO_OFFSET))(this, LPECOCOJLOO, EGOKJMCKOOK, KMCJLGLCOHD);
	}

	::System::Void BAGCCOLGHPA(::MoleMole::UIControllerContextBase* BCINNCIHNHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + ALODAJDBHPE_BAGCCOLGHPA_OFFSET))(this, BCINNCIHNHB);
	}

	::System::Void FHGMNHFHHCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALODAJDBHPE_FHGMNHFHHCD_OFFSET))(this);
	}

	::System::Void MEBHLMFEEIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALODAJDBHPE_MEBHLMFEEIP_OFFSET))(this);
	}

	::System::Void GGAGCFAACCC(::MoleMole::UIControllerContextBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + ALODAJDBHPE_GGAGCFAACCC_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HDKONLPBANE(::MoleMole::UIBaseController* MIALFKCCCPI, ::GIBMJLOJLKD* KMGKAIDEIBA, ::MoleMole::UIControllerContextBase* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + ALODAJDBHPE_HDKONLPBANE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MGDKNIEIKOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALODAJDBHPE_MGDKNIEIKOJ_OFFSET))(this);
	}
};
