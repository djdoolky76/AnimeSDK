#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OPIGNAGDKJL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16F96160)
#define OPIGNAGDKJL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16F96000)
#define OPIGNAGDKJL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F95DB0)
#define OPIGNAGDKJL__CTOR_OFFSET UNITYSDK_OFFSET(0x16F96150)

inline static constexpr unsigned int OPIGNAGDKJL_TypeDefinitionIndex = 74753;

class OPIGNAGDKJL : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x18
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x20
	::LGINJIKKBJA* DDLILIHKOMG; // 0x28
	::UnityEngine::RectTransform* CEGMNHJCECC; // 0x30
	::FGCOIBFFCHB* DCMADJIMGIG; // 0x38
	::UnityEngine::RectTransform* FJGPOOLCOEP; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* KNHLCNHDOKC; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x50
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIGNAGDKJL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OPIGNAGDKJL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIGNAGDKJL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OPIGNAGDKJL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
