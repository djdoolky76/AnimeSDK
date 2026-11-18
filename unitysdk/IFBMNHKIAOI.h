#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define IFBMNHKIAOI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x141C12F0)
#define IFBMNHKIAOI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x141C1240)
#define IFBMNHKIAOI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x141C1060)
#define IFBMNHKIAOI__CTOR_OFFSET UNITYSDK_OFFSET(0x141C12E0)

inline static constexpr unsigned int IFBMNHKIAOI_TypeDefinitionIndex = 88442;

class IFBMNHKIAOI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* OPLCKBFDNHF; // 0x18
	::UnityEngine::RectTransform* GEIILOLNGEP; // 0x20
	::UnityEngine::Transform* IJLCFNIBMLP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* DOAIKOHLHGJ; // 0x30
	::UnityEngine::GameObject* AGFKPKLMJEL; // 0x38
	::UnityEngine::UI::Extension::UITimeWidget* MMNNLOMMNGL; // 0x40
	::MonoUITableScrollV2* ANNGGMHMJIE; // 0x48
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBMNHKIAOI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IFBMNHKIAOI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IFBMNHKIAOI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBMNHKIAOI_KGEBDLGBGNM_OFFSET))(this);
	}
};
