#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define LBMCPEAIAFE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18653540)
#define LBMCPEAIAFE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18653490)
#define LBMCPEAIAFE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x186532B0)
#define LBMCPEAIAFE__CTOR_OFFSET UNITYSDK_OFFSET(0x18653530)

inline static constexpr unsigned int LBMCPEAIAFE_TypeDefinitionIndex = 45133;

class LBMCPEAIAFE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* EBCLKOOHIPC; // 0x18
	::FGCOIBFFCHB* LKFMOCHMOBL; // 0x20
	::UnityEngine::RectTransform* KELEPDCFHNI; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UIGeneralHeadRowWidgetController*>* MFJKLJLLMIC; // 0x38
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMCPEAIAFE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LBMCPEAIAFE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMCPEAIAFE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LBMCPEAIAFE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
