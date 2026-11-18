#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define NPBPGPHJJDD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10DB0A90)
#define NPBPGPHJJDD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10DB09C0)
#define NPBPGPHJJDD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10DB07F0)
#define NPBPGPHJJDD__CTOR_OFFSET UNITYSDK_OFFSET(0x10DB0A80)

inline static constexpr unsigned int NPBPGPHJJDD_TypeDefinitionIndex = 69926;

class NPBPGPHJJDD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HMBAEGDOIKA; // 0x18
	::UnityEngine::RectTransform* OGDHHANGGIG; // 0x20
	::FGCOIBFFCHB* MJMGANKGIFM; // 0x28
	::FGCOIBFFCHB* KKOJIGEFPBM; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x38
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x40
	::UnityEngine::RectTransform* PALOGGGMFBA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBPGPHJJDD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NPBPGPHJJDD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBPGPHJJDD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NPBPGPHJJDD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
