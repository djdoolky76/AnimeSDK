#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EEFPMFEIODP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16135E10)
#define EEFPMFEIODP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16135CB0)
#define EEFPMFEIODP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16135A80)
#define EEFPMFEIODP__CTOR_OFFSET UNITYSDK_OFFSET(0x16135E00)

inline static constexpr unsigned int EEFPMFEIODP_TypeDefinitionIndex = 47492;

class EEFPMFEIODP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* AOGBLJAIJJP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BJOPLHDPHCE; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* KFMCLODMMKD; // 0x28
	::FGCOIBFFCHB* BBEJLIBEOCM; // 0x30
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* FPJJFGEKOBI; // 0x40
	::LGINJIKKBJA* CEFBKCCMABN; // 0x48
	::LGINJIKKBJA* FKCDCPIJHDH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFPMFEIODP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EEFPMFEIODP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EEFPMFEIODP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFPMFEIODP_KGEBDLGBGNM_OFFSET))(this);
	}
};
