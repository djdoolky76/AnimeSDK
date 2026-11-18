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

#define ENAKJJPOCOH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14278600)
#define ENAKJJPOCOH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x142784F0)
#define ENAKJJPOCOH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14278220)
#define ENAKJJPOCOH__CTOR_OFFSET UNITYSDK_OFFSET(0x142785F0)

inline static constexpr unsigned int ENAKJJPOCOH_TypeDefinitionIndex = 86117;

class ENAKJJPOCOH : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x18
	::UnityEngine::GameObject* ANPHKCMFDOH; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* PCLNFDNGEBL; // 0x28
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* ODJABEHJCHL; // 0x38
	::UnityEngine::RectTransform* FNMDICKEGCJ; // 0x40
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x48
	::MoleMole::MonoGamepadSelectable* HEKACEMIHKE; // 0x50
	::FGCOIBFFCHB* PKHHPBJNHJG; // 0x58
	::UnityEngine::GameObject* LMBHFLPBCDP; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* LKIHDIDNCJL; // 0x68
	::UnityEngine::RectTransform* MCGPPADHCLJ; // 0x70
	::UnityEngine::RectTransform* KHFECPOGDBF; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* DMJBMPJFJLN; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAKJJPOCOH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENAKJJPOCOH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENAKJJPOCOH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAKJJPOCOH_KGEBDLGBGNM_OFFSET))(this);
	}
};
