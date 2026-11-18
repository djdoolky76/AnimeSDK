#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define OJDFJKJKGNH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE158550)
#define OJDFJKJKGNH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE158480)
#define OJDFJKJKGNH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE158220)
#define OJDFJKJKGNH__CTOR_OFFSET UNITYSDK_OFFSET(0xE158540)

inline static constexpr unsigned int OJDFJKJKGNH_TypeDefinitionIndex = 39240;

class OJDFJKJKGNH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* OCJOCLEDABL; // 0x18
	::UnityEngine::RectTransform* PALOGGGMFBA; // 0x20
	::UnityEngine::GameObject* DCDENHPHFKD; // 0x28
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x30
	::UnityEngine::RectTransform* DGJNCIFBOJN; // 0x38
	::UnityEngine::RectTransform* KKOJIGEFPBM; // 0x40
	::UnityEngine::RectTransform* EGFHAPINMNM; // 0x48
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x50
	::UnityEngine::GameObject* OJOOGIOPIFH; // 0x58
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x60
	::UnityEngine::Transform* AEGAPMOGAIO; // 0x68
	::UnityEngine::GameObject* OLLEHOJAOGN; // 0x70
	::UnityEngine::RectTransform* PLNAAMPMLLL; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDFJKJKGNH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OJDFJKJKGNH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDFJKJKGNH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OJDFJKJKGNH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
