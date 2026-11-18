#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadTabButtonGroup; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define DGOCHEFNIOD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1833D490)
#define DGOCHEFNIOD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1833D400)
#define DGOCHEFNIOD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1833D1F0)
#define DGOCHEFNIOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1833D480)

inline static constexpr unsigned int DGOCHEFNIOD_TypeDefinitionIndex = 92098;

class DGOCHEFNIOD : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* GOAIJFJKGCI; // 0x18
	::UnityEngine::UI::Text* DBBDKLENOKD; // 0x20
	::UnityEngine::RectTransform* HMNIHDPPGPD; // 0x28
	::UnityEngine::GameObject* GHHPANCPAJD; // 0x30
	::UnityEngine::UI::Extension::UITabButtonGroup* CKBCJBHOOLM; // 0x38
	::MoleMole::MonoGamepadTabButtonGroup* PGIBPKEMIPF; // 0x40
	::UnityEngine::RectTransform* IMEPLMEPGMI; // 0x48
	::LGINJIKKBJA* OKGBOAENDNC; // 0x50
	::UnityEngine::GameObject* JBFLLKNDFGF; // 0x58
	::UnityEngine::UI::Text* MGIOELMNLML; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGOCHEFNIOD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DGOCHEFNIOD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DGOCHEFNIOD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGOCHEFNIOD_KGEBDLGBGNM_OFFSET))(this);
	}
};
