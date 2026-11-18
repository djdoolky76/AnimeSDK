#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PEBMGPOBPHH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11B60E90)
#define PEBMGPOBPHH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11B60D30)
#define PEBMGPOBPHH__CTOR_OFFSET UNITYSDK_OFFSET(0x11B60E80)

inline static constexpr unsigned int PEBMGPOBPHH_TypeDefinitionIndex = 39339;

class PEBMGPOBPHH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* AANABGFINOA; // 0x18
	::MoleMole::MonoGamepadSelectable* GCIAOEDFJOC; // 0x20
	::MoleMole::MonoGamepadSelectable* CODIGHLANHD; // 0x28
	::UnityEngine::Transform* BNNLKLPAHJK; // 0x30
	::MoleMole::MonoGamepadSelectable* CPGKBHJAMAK; // 0x38
	::UnityEngine::Transform* MMAAOMNBIPE; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x48
	::UnityEngine::Transform* ECFCDMJEDPI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBMGPOBPHH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PEBMGPOBPHH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PEBMGPOBPHH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
