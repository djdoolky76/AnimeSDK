#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ANEEGPCEEAF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1853E340)
#define ANEEGPCEEAF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1853E290)
#define ANEEGPCEEAF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1853E0C0)
#define ANEEGPCEEAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1853E330)

inline static constexpr unsigned int ANEEGPCEEAF_TypeDefinitionIndex = 82100;

class ANEEGPCEEAF : public ::GIBMJLOJLKD
{
public:
	::FILNFMCNCFE* MNHOFEMCLNH; // 0x18
	::MoleMole::UIGeneralButtonController* DNGFGABBHEG; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* EPDJDKJFBHP; // 0x30
	::UnityEngine::RectTransform* CMOFCPELHNG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEEGPCEEAF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANEEGPCEEAF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEEGPCEEAF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANEEGPCEEAF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
