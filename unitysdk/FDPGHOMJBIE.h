#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FDPGHOMJBIE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11D00060)
#define FDPGHOMJBIE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11CFFFB0)
#define FDPGHOMJBIE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11CFFDD0)
#define FDPGHOMJBIE__CTOR_OFFSET UNITYSDK_OFFSET(0x11D00050)

inline static constexpr unsigned int FDPGHOMJBIE_TypeDefinitionIndex = 44713;

class FDPGHOMJBIE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* DPDOFDHIBCP; // 0x18
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x30
	::FGCOIBFFCHB* LKHNJLMCMOK; // 0x38
	::UnityEngine::RectTransform* BAEKBHECMIP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPGHOMJBIE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FDPGHOMJBIE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FDPGHOMJBIE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPGHOMJBIE_KGEBDLGBGNM_OFFSET))(this);
	}
};
