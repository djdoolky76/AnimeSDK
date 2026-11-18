#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
class UIControllerExtensionData;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIWorkbenchMainPageBigBtnWidgetController; }
namespace UnityEngine { class RectTransform; }
template <typename T> class MEKABAIJMNM_1;

#define LHNEMDONPBN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15DFDBA0)
#define LHNEMDONPBN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15DFDA90)
#define LHNEMDONPBN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15DFD860)
#define LHNEMDONPBN__CTOR_OFFSET UNITYSDK_OFFSET(0x15DFDB90)

inline static constexpr unsigned int LHNEMDONPBN_TypeDefinitionIndex = 39400;

class LHNEMDONPBN : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIWorkbenchMainPageBigBtnWidgetController*>* OEDINACKFIH; // 0x18
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x20
	::MoleMole::MonoGamepadModule* KEGALFDEOKG; // 0x28
	::MonoUITableScrollV2* DBPIDBDJLKB; // 0x30
	::LGINJIKKBJA* BKDDKDMILCA; // 0x38
	::LGINJIKKBJA* MFLEBPBJGLH; // 0x40
	::MoleMole::MonoGamepadModule* NOAANFOFJMB; // 0x48
	::MonoUITableScrollV2* JKPPAMICJLN; // 0x50
	::UnityEngine::RectTransform* OKMGPFHIPKB; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNEMDONPBN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHNEMDONPBN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHNEMDONPBN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNEMDONPBN_KGEBDLGBGNM_OFFSET))(this);
	}
};
