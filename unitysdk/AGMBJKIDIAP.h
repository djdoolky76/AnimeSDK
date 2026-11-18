#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AGMBJKIDIAP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x144DA3A0)
#define AGMBJKIDIAP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x144DA280)
#define AGMBJKIDIAP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x144D9FB0)
#define AGMBJKIDIAP__CTOR_OFFSET UNITYSDK_OFFSET(0x144DA390)

inline static constexpr unsigned int AGMBJKIDIAP_TypeDefinitionIndex = 39516;

class AGMBJKIDIAP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* EMHEJIMIEIO; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* ODJABEHJCHL; // 0x20
	::UnityEngine::GameObject* LMBHFLPBCDP; // 0x28
	::FGCOIBFFCHB* GFLEPFOCFKF; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* GLGDGGACHLE; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* LKIHDIDNCJL; // 0x40
	::UnityEngine::RectTransform* FNMDICKEGCJ; // 0x48
	::UnityEngine::RectTransform* MCGPPADHCLJ; // 0x50
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* BJFNNGIBOLJ; // 0x60
	::UnityEngine::GameObject* HMKJFAPBOBP; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* DMJBMPJFJLN; // 0x70
	::MoleMole::MonoGamepadSelectable* HEKACEMIHKE; // 0x78
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x80
	::FGCOIBFFCHB* PKHHPBJNHJG; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMBJKIDIAP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AGMBJKIDIAP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AGMBJKIDIAP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMBJKIDIAP_KGEBDLGBGNM_OFFSET))(this);
	}
};
