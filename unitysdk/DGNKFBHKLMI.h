#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIAbyssS2InfoBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define DGNKFBHKLMI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15372C80)
#define DGNKFBHKLMI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15372BB0)
#define DGNKFBHKLMI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15372900)
#define DGNKFBHKLMI__CTOR_OFFSET UNITYSDK_OFFSET(0x15372C70)

inline static constexpr unsigned int DGNKFBHKLMI_TypeDefinitionIndex = 74640;

class DGNKFBHKLMI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* NKFKNMCDKDA; // 0x18
	::GCIMMDDIFBJ* MOMCKFNDOBB; // 0x20
	::LGINJIKKBJA* CHAMBKDGKFB; // 0x28
	::MEKABAIJMNM_1<::MoleMole::UIAbyssS2InfoBtnWidgetController*>* GJLMMAADNJH; // 0x30
	::LGINJIKKBJA* HEOACLIFDNO; // 0x38
	::UnityEngine::RectTransform* OIHBILBNIMO; // 0x40
	::UnityEngine::GameObject* ANDFIBAKEAE; // 0x48
	::UnityEngine::RectTransform* JMNNDEPCMAF; // 0x50
	::UnityEngine::Transform* PNKBOLJOOLM; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* AAFCPEBMJCC; // 0x60
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x68
	::GCIMMDDIFBJ* JEPEAAHPDCC; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNKFBHKLMI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DGNKFBHKLMI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DGNKFBHKLMI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNKFBHKLMI_KGEBDLGBGNM_OFFSET))(this);
	}
};
