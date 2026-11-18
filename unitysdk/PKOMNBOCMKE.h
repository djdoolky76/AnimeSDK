#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIAbyssS2InlevelMapAreaWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }
template <typename T> class MEKABAIJMNM_1;

#define PKOMNBOCMKE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14BAD260)
#define PKOMNBOCMKE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14BAD140)
#define PKOMNBOCMKE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14BACF00)
#define PKOMNBOCMKE__CTOR_OFFSET UNITYSDK_OFFSET(0x14BAD250)

inline static constexpr unsigned int PKOMNBOCMKE_TypeDefinitionIndex = 80650;

class PKOMNBOCMKE : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* EOMFDCFLCDK; // 0x18
	::MoleMole::MonoGamepadModule* LMDABOICMHA; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIAbyssS2InlevelMapAreaWidgetController*>* ELKFMBEFLCC; // 0x28
	::LGINJIKKBJA* GHCOFLDPCPE; // 0x30
	::LGINJIKKBJA* BKDDKDMILCA; // 0x38
	::LGINJIKKBJA* CHAMBKDGKFB; // 0x40
	::MEKABAIJMNM_1<::MoleMole::UIGeneralBtn03WidgetController*>* AEPPANPBCLI; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOMNBOCMKE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PKOMNBOCMKE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOMNBOCMKE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PKOMNBOCMKE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
