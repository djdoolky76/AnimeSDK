#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define LLCECMANMHA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x184FE400)
#define LLCECMANMHA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x184FE330)
#define LLCECMANMHA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x184FE050)
#define LLCECMANMHA__CTOR_OFFSET UNITYSDK_OFFSET(0x184FE3F0)

inline static constexpr unsigned int LLCECMANMHA_TypeDefinitionIndex = 63993;

class LLCECMANMHA : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadModule* GAFPEOCAECI; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x20
	::UnityEngine::GameObject* POOEPIKINPB; // 0x28
	::MoleMole::MonoGamepadNestedListDelegate* HMJJMGFPPGO; // 0x30
	::UnityEngine::GameObject* FICJLJEDNOI; // 0x38
	::MoleMole::UIGeneralButtonController* IIAPIPEOJCO; // 0x40
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x48
	::LGINJIKKBJA* GHCOFLDPCPE; // 0x50
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x58
	::MoleMole::UIGeneralButtonController* FBIHFNOOPBG; // 0x60
	::MoleMole::MonoGamepadModule* LLILCOICNBM; // 0x68
	::UnityEngine::GameObject* HLOELDBHFPG; // 0x70
	::GCIMMDDIFBJ* EEDABCBODFD; // 0x78
	::KNLFLMMHALL_1<::System::Object*>* HCELOCNANMI; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCECMANMHA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LLCECMANMHA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCECMANMHA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LLCECMANMHA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
