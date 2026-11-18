#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AMKDFIBEADP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17DDE6D0)
#define AMKDFIBEADP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17DDE600)
#define AMKDFIBEADP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17DDE410)
#define AMKDFIBEADP__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDE6C0)

inline static constexpr unsigned int AMKDFIBEADP_TypeDefinitionIndex = 71725;

class AMKDFIBEADP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* FDJHEBHLJLD; // 0x18
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HGJGFBJDLAC; // 0x28
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x30
	::FGCOIBFFCHB* ANDFIBAKEAE; // 0x38
	::UnityEngine::GameObject* CJFCGNFOCFO; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKDFIBEADP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AMKDFIBEADP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKDFIBEADP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AMKDFIBEADP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
