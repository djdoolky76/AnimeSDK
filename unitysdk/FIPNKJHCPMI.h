#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FIPNKJHCPMI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x165AF4A0)
#define FIPNKJHCPMI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x165AF3F0)
#define FIPNKJHCPMI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x165AF190)
#define FIPNKJHCPMI__CTOR_OFFSET UNITYSDK_OFFSET(0x165AF490)

inline static constexpr unsigned int FIPNKJHCPMI_TypeDefinitionIndex = 89549;

class FIPNKJHCPMI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* MBKACMJJMBH; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* LOACBFHPNJC; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* NHFGFAHICNL; // 0x30
	::UnityEngine::UI::Text* LHKDENMCKCA; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* NEFHPOMGMAD; // 0x40
	::FGCOIBFFCHB* JFADEKINBNF; // 0x48
	::UnityEngine::RectTransform* HDIMKPLPCDJ; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* GCBDOMJFNLM; // 0x58
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* KJLHOJINJLA; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIPNKJHCPMI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FIPNKJHCPMI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIPNKJHCPMI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FIPNKJHCPMI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
