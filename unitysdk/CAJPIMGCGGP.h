#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CAJPIMGCGGP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x159A7C20)
#define CAJPIMGCGGP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x159A7B10)
#define CAJPIMGCGGP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x159A7920)
#define CAJPIMGCGGP__CTOR_OFFSET UNITYSDK_OFFSET(0x159A7C10)

inline static constexpr unsigned int CAJPIMGCGGP_TypeDefinitionIndex = 72247;

class CAJPIMGCGGP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* HKCAHGGGOOD; // 0x18
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* JOOKGFCFGLL; // 0x28
	::FGCOIBFFCHB* LBMPDPJKNJH; // 0x30
	::FGCOIBFFCHB* BJAOIDNKEOF; // 0x38
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJPIMGCGGP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CAJPIMGCGGP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJPIMGCGGP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CAJPIMGCGGP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
