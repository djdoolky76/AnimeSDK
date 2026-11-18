#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JLIDEAIEAMB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18742F50)
#define JLIDEAIEAMB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18742EC0)
#define JLIDEAIEAMB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18742D20)
#define JLIDEAIEAMB__CTOR_OFFSET UNITYSDK_OFFSET(0x18742F40)

inline static constexpr unsigned int JLIDEAIEAMB_TypeDefinitionIndex = 44852;

class JLIDEAIEAMB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* GGIKNHIPBIC; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DMKIDFNMHBE; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DCPAEHBKAKE; // 0x28
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x30
	::LGINJIKKBJA* LKIIFLODLAH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLIDEAIEAMB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLIDEAIEAMB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLIDEAIEAMB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLIDEAIEAMB_KGEBDLGBGNM_OFFSET))(this);
	}
};
