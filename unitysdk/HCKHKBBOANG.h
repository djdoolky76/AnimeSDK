#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIImgText; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HCKHKBBOANG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11009BC0)
#define HCKHKBBOANG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11009AF0)
#define HCKHKBBOANG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x110098A0)
#define HCKHKBBOANG__CTOR_OFFSET UNITYSDK_OFFSET(0x11009BB0)

inline static constexpr unsigned int HCKHKBBOANG_TypeDefinitionIndex = 57360;

class HCKHKBBOANG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* GEOJMPCKKJN; // 0x18
	::UnityEngine::UI::Extension::UIImgText* AAKGCHFEOHI; // 0x20
	::UnityEngine::RectTransform* JDEDPOINFGK; // 0x28
	::FGCOIBFFCHB* APPIEHBBKMA; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* BIKIBICDFJJ; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* IEOJFFPCGGN; // 0x48
	::LGINJIKKBJA* KCOCGEGCHGF; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* IAPOLFCBEJB; // 0x58
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKHKBBOANG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HCKHKBBOANG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HCKHKBBOANG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKHKBBOANG_KGEBDLGBGNM_OFFSET))(this);
	}
};
