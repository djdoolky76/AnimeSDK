#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDJEMDDDGPG.h"

class CBDMGJDAKJL;
class GIBMJLOJLKD;
class MOJKADGHBIP;
namespace MoleMole { class UIActivityGuideInfoWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralConsoleExistGoBtnWidgetController; }

#define DOMCEMKANPK_BAGCCOLGHPA_OFFSET UNITYSDK_OFFSET(0x10F17A30)
#define DOMCEMKANPK_GGAGCFAACCC_OFFSET UNITYSDK_OFFSET(0x10F18180)
#define DOMCEMKANPK_HDKONLPBANE_OFFSET UNITYSDK_OFFSET(0x10F180E0)
#define DOMCEMKANPK_KFBFKKIFJOO_OFFSET UNITYSDK_OFFSET(0x10F17920)
#define DOMCEMKANPK__CTOR_OFFSET UNITYSDK_OFFSET(0x10F180D0)

inline static constexpr unsigned int DOMCEMKANPK_TypeDefinitionIndex = 79450;

class DOMCEMKANPK : public ::KDJEMDDDGPG
{
public:
	::MOJKADGHBIP* NLEDFNCPADJ; // 0x30
	::CBDMGJDAKJL* KMLPFPJAKOP; // 0x38
	::MoleMole::UIGeneralConsoleExistGoBtnWidgetController* MKIJFELCFOC; // 0x40
	::MoleMole::UIActivityGuideInfoWidgetController* PGJPEEDEODO; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMCEMKANPK__CTOR_OFFSET))(this);
	}

	::System::Void KFBFKKIFJOO(::MoleMole::UIBaseController* LPECOCOJLOO, ::GIBMJLOJLKD* EGOKJMCKOOK, ::MoleMole::UIControllerContextBase* KMCJLGLCOHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + DOMCEMKANPK_KFBFKKIFJOO_OFFSET))(this, LPECOCOJLOO, EGOKJMCKOOK, KMCJLGLCOHD);
	}

	::System::Void BAGCCOLGHPA(::MoleMole::UIControllerContextBase* BCINNCIHNHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + DOMCEMKANPK_BAGCCOLGHPA_OFFSET))(this, BCINNCIHNHB);
	}

	::System::Void HDKONLPBANE(::MoleMole::UIBaseController* MIALFKCCCPI, ::GIBMJLOJLKD* KMGKAIDEIBA, ::MoleMole::UIControllerContextBase* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + DOMCEMKANPK_HDKONLPBANE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void GGAGCFAACCC(::MoleMole::UIControllerContextBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + DOMCEMKANPK_GGAGCFAACCC_OFFSET))(this, MIALFKCCCPI);
	}
};
