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
namespace UnityEngine::UI::Extension { class UISpriteNumPanel; }

#define PKPEEFCLMCH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1FF911F0)
#define PKPEEFCLMCH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1FF91090)
#define PKPEEFCLMCH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1FF90DD0)
#define PKPEEFCLMCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF911E0)

inline static constexpr unsigned int PKPEEFCLMCH_TypeDefinitionIndex = 96518;

class PKPEEFCLMCH : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* AJIBHBJNOCE; // 0x18
	::UnityEngine::GameObject* KKMCLPDAJKJ; // 0x20
	::UnityEngine::RectTransform* IMDLHCPGEDN; // 0x28
	::UnityEngine::GameObject* ADEJDMBCCOM; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x38
	::UnityEngine::UI::Extension::UISpriteNumPanel* FNMDICKEGCJ; // 0x40
	::LGINJIKKBJA* CIHMHAJHOEB; // 0x48
	::UnityEngine::GameObject* MJOKNAMLDNF; // 0x50
	::FGCOIBFFCHB* MNBDBABBHCE; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* FDGCAMAFLHJ; // 0x60
	::UnityEngine::GameObject* AOOFHEONBNH; // 0x68
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x70
	::FGCOIBFFCHB* HELAMPHDBEH; // 0x78
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPEEFCLMCH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PKPEEFCLMCH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PKPEEFCLMCH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPEEFCLMCH_KGEBDLGBGNM_OFFSET))(this);
	}
};
