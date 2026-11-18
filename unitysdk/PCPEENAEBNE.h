#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define PCPEENAEBNE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16002C90)
#define PCPEENAEBNE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16002BC0)
#define PCPEENAEBNE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16002980)
#define PCPEENAEBNE__CTOR_OFFSET UNITYSDK_OFFSET(0x16002C80)

inline static constexpr unsigned int PCPEENAEBNE_TypeDefinitionIndex = 87510;

class PCPEENAEBNE : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x18
	::UnityEngine::Transform* IJLCFNIBMLP; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* MMNNLOMMNGL; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* OPLCKBFDNHF; // 0x30
	::UnityEngine::GameObject* AGFKPKLMJEL; // 0x38
	::MonoUITableScrollV2* ANNGGMHMJIE; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* LFJLBDDCHPN; // 0x48
	::UnityEngine::RectTransform* PECHBKFKNCA; // 0x50
	::MoleMole::MonoGamepadNestedListDelegate* CKLAHDNPMGL; // 0x58
	::UnityEngine::UI::Extension::UITimeWidget* EAHEAPMKNGG; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* DOAIKOHLHGJ; // 0x68
	::UnityEngine::RectTransform* CMPGMPBAMFE; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPEENAEBNE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCPEENAEBNE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPEENAEBNE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCPEENAEBNE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
