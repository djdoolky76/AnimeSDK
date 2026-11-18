#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class MEKABAIJMNM_1;

#define PFNCCCIHLKB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14B99740)
#define PFNCCCIHLKB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14B99600)
#define PFNCCCIHLKB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14B99350)
#define PFNCCCIHLKB__CTOR_OFFSET UNITYSDK_OFFSET(0x14B99730)

inline static constexpr unsigned int PFNCCCIHLKB_TypeDefinitionIndex = 62653;

class PFNCCCIHLKB : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* BKDDKDMILCA; // 0x18
	::MoleMole::UIGeneralButtonController* BMFNLFEILME; // 0x20
	::LGINJIKKBJA* FGPPFHMMPAO; // 0x28
	::UnityEngine::UI::Extension::UITabButtonGroup* AGANABEICOL; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UIActivityCompRewardBtnGroupWidgetController*>* PPOLOFNCGJA; // 0x38
	::FGCOIBFFCHB* GCPPJCLCJJK; // 0x40
	::MoleMole::UIGeneralButtonController* EFAECONLDBM; // 0x48
	::UnityEngine::RectTransform* JKMMABOFLNP; // 0x50
	::LGINJIKKBJA* MFLEBPBJGLH; // 0x58
	::UnityEngine::RectTransform* HIIBGFHOMDF; // 0x60
	::FGCOIBFFCHB* GPDGJIBFAHM; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNCCCIHLKB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PFNCCCIHLKB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PFNCCCIHLKB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNCCCIHLKB_KGEBDLGBGNM_OFFSET))(this);
	}
};
