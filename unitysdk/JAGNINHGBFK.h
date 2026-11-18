#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define JAGNINHGBFK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1ACC7130)
#define JAGNINHGBFK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1ACC7060)
#define JAGNINHGBFK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1ACC6E40)
#define JAGNINHGBFK__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACC7120)

inline static constexpr unsigned int JAGNINHGBFK_TypeDefinitionIndex = 43917;

class JAGNINHGBFK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* KCKPHGDFOBC; // 0x18
	::GCIMMDDIFBJ* DDKPFJLICJB; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* PLHFEEBKFJF; // 0x28
	::FGCOIBFFCHB* NEHGMOEMKKI; // 0x30
	::MoleMole::UIGeneralButtonController* PMBLECALCKB; // 0x38
	::MEKABAIJMNM_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* HGIFDHBLIOM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAGNINHGBFK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JAGNINHGBFK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JAGNINHGBFK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAGNINHGBFK_KGEBDLGBGNM_OFFSET))(this);
	}
};
