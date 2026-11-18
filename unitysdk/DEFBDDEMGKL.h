#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralSortWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define DEFBDDEMGKL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12BAE710)
#define DEFBDDEMGKL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12BAE620)
#define DEFBDDEMGKL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12BAE420)
#define DEFBDDEMGKL__CTOR_OFFSET UNITYSDK_OFFSET(0x12BAE700)

inline static constexpr unsigned int DEFBDDEMGKL_TypeDefinitionIndex = 58921;

class DEFBDDEMGKL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DOHOGGFHFDN; // 0x18
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x20
	::UnityEngine::UI::Text* HKIPALPLCEN; // 0x28
	::MEKABAIJMNM_1<::MoleMole::UIGeneralSortWidgetController*>* ICGNLCGIKNG; // 0x30
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* OAHGOMGBLMO; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* EILABBABBHI; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFBDDEMGKL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DEFBDDEMGKL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DEFBDDEMGKL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFBDDEMGKL_KGEBDLGBGNM_OFFSET))(this);
	}
};
