#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KJHPJOJFOKF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18630FB0)
#define KJHPJOJFOKF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18630F00)
#define KJHPJOJFOKF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18630D00)
#define KJHPJOJFOKF__CTOR_OFFSET UNITYSDK_OFFSET(0x18630FA0)

inline static constexpr unsigned int KJHPJOJFOKF_TypeDefinitionIndex = 41138;

class KJHPJOJFOKF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* JFDOOELFAOA; // 0x18
	::LGINJIKKBJA* DDPMCFOFMFA; // 0x20
	::MoleMole::UIGeneralButtonController* KHOJKFHFKIJ; // 0x28
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x30
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* JGAMKHLLKMP; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHPJOJFOKF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJHPJOJFOKF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJHPJOJFOKF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHPJOJFOKF_KGEBDLGBGNM_OFFSET))(this);
	}
};
