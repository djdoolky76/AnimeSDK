#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ICNFOEPHJKL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xEA14D20)
#define ICNFOEPHJKL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xEA14C90)
#define ICNFOEPHJKL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xEA149E0)
#define ICNFOEPHJKL__CTOR_OFFSET UNITYSDK_OFFSET(0xEA14D10)

inline static constexpr unsigned int ICNFOEPHJKL_TypeDefinitionIndex = 50005;

class ICNFOEPHJKL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* EKGCNEJNDJN; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* KLFMEMFDKID; // 0x20
	::UnityEngine::RectTransform* KOHDHGFCDMO; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* ONNECCMPOMK; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* DJILAODCBCI; // 0x38
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x40
	::UnityEngine::GameObject* EKGGCNCAKPL; // 0x48
	::GCIMMDDIFBJ* DBGOGIFLHBB; // 0x50
	::GCIMMDDIFBJ* CGGLIDCFPOF; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* HFGFMKAKMLM; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* JBGEMCIJCGH; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* PJFKDHLIBGB; // 0x70
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* ONAEIMLJCHC; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* LBHCGIHHGHK; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNFOEPHJKL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ICNFOEPHJKL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNFOEPHJKL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ICNFOEPHJKL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
