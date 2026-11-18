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

#define BPBOCHKCKHD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16A04CD0)
#define BPBOCHKCKHD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16A04C40)
#define BPBOCHKCKHD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16A04A30)
#define BPBOCHKCKHD__CTOR_OFFSET UNITYSDK_OFFSET(0x16A04CC0)

inline static constexpr unsigned int BPBOCHKCKHD_TypeDefinitionIndex = 85346;

class BPBOCHKCKHD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* JBFLLKNDFGF; // 0x18
	::UnityEngine::UI::Text* DBBDKLENOKD; // 0x20
	::UnityEngine::GameObject* GHHPANCPAJD; // 0x28
	::UnityEngine::RectTransform* IMEPLMEPGMI; // 0x30
	::MoleMole::MonoGamepadTabButtonGroup* PGIBPKEMIPF; // 0x38
	::LGINJIKKBJA* OKGBOAENDNC; // 0x40
	::UnityEngine::UI::Extension::UITabButtonGroup* CKBCJBHOOLM; // 0x48
	::MonoUITableScrollV2* MNAIJPJCMAO; // 0x50
	::UnityEngine::UI::Text* MGIOELMNLML; // 0x58
	::UnityEngine::RectTransform* HMNIHDPPGPD; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBOCHKCKHD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BPBOCHKCKHD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BPBOCHKCKHD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBOCHKCKHD_KGEBDLGBGNM_OFFSET))(this);
	}
};
