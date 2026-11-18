#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define KLDJLAHDELL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1521F210)
#define KLDJLAHDELL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1521F100)
#define KLDJLAHDELL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1521EE00)
#define KLDJLAHDELL__CTOR_OFFSET UNITYSDK_OFFSET(0x1521F200)

inline static constexpr unsigned int KLDJLAHDELL_TypeDefinitionIndex = 82304;

class KLDJLAHDELL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* CCOOCJBOCCL; // 0x18
	::UnityEngine::Transform* MKCFDDOPNIN; // 0x20
	::UnityEngine::GameObject* ODICPFDJMKN; // 0x28
	::UnityEngine::GameObject* AGLMGLBEDPN; // 0x30
	::UnityEngine::Transform* CMIOIKFAOPF; // 0x38
	::UnityEngine::Transform* DEIGHDOPPJI; // 0x40
	::UnityEngine::Transform* NPGAAEEFOCP; // 0x48
	::UnityEngine::UI::Text* HOKJIOCDLIF; // 0x50
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x58
	::LGINJIKKBJA* MNIMKDMNKEK; // 0x60
	::FGCOIBFFCHB* ADPCBMHNDHG; // 0x68
	::UnityEngine::UI::Button* HDBFNGCKLGA; // 0x70
	::UnityEngine::GameObject* PJEAENMELAP; // 0x78
	::UnityEngine::UI::Text* GIEBFLOGIFI; // 0x80
	::UnityEngine::Transform* DEKLIFKNJFI; // 0x88
	::UnityEngine::UI::Text* MECFIIHNGDO; // 0x90
	::UnityEngine::Transform* GKAPPNAHMJF; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDJLAHDELL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KLDJLAHDELL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KLDJLAHDELL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDJLAHDELL_KGEBDLGBGNM_OFFSET))(this);
	}
};
