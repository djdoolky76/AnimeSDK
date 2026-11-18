#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define AINILIOMAPH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17CD38F0)
#define AINILIOMAPH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17CD3820)
#define AINILIOMAPH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17CD36D0)
#define AINILIOMAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x17CD38E0)

inline static constexpr unsigned int AINILIOMAPH_TypeDefinitionIndex = 42157;

class AINILIOMAPH : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIGeneralToggleWidgetController*>* JOJIJLMKBDJ; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* FCCLIEJAKLI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINILIOMAPH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AINILIOMAPH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AINILIOMAPH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINILIOMAPH_KGEBDLGBGNM_OFFSET))(this);
	}
};
