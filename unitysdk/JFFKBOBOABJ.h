#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JFFKBOBOABJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17B23DF0)
#define JFFKBOBOABJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17B23D20)
#define JFFKBOBOABJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17B23B70)
#define JFFKBOBOABJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17B23DE0)

inline static constexpr unsigned int JFFKBOBOABJ_TypeDefinitionIndex = 88314;

class JFFKBOBOABJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* ODALDIOFMPH; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* JDJKPGMLGDN; // 0x28
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x30
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* EPMEILNJMFF; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFKBOBOABJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JFFKBOBOABJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JFFKBOBOABJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFKBOBOABJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
