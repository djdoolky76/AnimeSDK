#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EPOGNIENLML_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xBB2EEC0)
#define EPOGNIENLML_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xBB2EDF0)
#define EPOGNIENLML_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xBB2EAF0)
#define EPOGNIENLML__CTOR_OFFSET UNITYSDK_OFFSET(0xBB2EEB0)

inline static constexpr unsigned int EPOGNIENLML_TypeDefinitionIndex = 59401;

class EPOGNIENLML : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* KONPMOGCPID; // 0x18
	::GCIMMDDIFBJ* NDIEOPDFNDM; // 0x20
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x28
	::UnityEngine::RectTransform* NBDLLBJLDMG; // 0x30
	::UnityEngine::RectTransform* LMGMOMNNMIP; // 0x38
	::FGCOIBFFCHB* BGABOFECPBN; // 0x40
	::UnityEngine::RectTransform* OKLLFEIJKHN; // 0x48
	::UnityEngine::RectTransform* JEMCOFFLAFN; // 0x50
	::MoleMole::MonoGamepadModule* ABMFOPELEJI; // 0x58
	::GCIMMDDIFBJ* AEJOOHCKCFD; // 0x60
	::UnityEngine::RectTransform* IPCOIFBOEPA; // 0x68
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* APIFCJGEJIP; // 0x78
	::MoleMole::MonoGamepadModule* DJEACGPANED; // 0x80
	::MoleMole::MonoInputKey* KFOKPEHEAPI; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPOGNIENLML__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPOGNIENLML_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPOGNIENLML_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPOGNIENLML_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
