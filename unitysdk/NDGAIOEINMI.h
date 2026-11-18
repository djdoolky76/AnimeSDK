#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define NDGAIOEINMI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13136770)
#define NDGAIOEINMI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x131366A0)
#define NDGAIOEINMI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13136470)
#define NDGAIOEINMI__CTOR_OFFSET UNITYSDK_OFFSET(0x13136760)

inline static constexpr unsigned int NDGAIOEINMI_TypeDefinitionIndex = 74610;

class NDGAIOEINMI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* KNCGGFBDMII; // 0x18
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x20
	::UnityEngine::UI::Extension::UISlider* DCDFDHINHFJ; // 0x28
	::LGINJIKKBJA* IIAPIPEOJCO; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x38
	::UnityEngine::RectTransform* LBCOFDBAFJH; // 0x40
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* DONFABKHJKK; // 0x58
	::UnityEngine::RectTransform* OKOCCAJMCAA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDGAIOEINMI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NDGAIOEINMI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDGAIOEINMI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NDGAIOEINMI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
