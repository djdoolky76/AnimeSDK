#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DBNABNJLOAB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14992220)
#define DBNABNJLOAB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14992100)
#define DBNABNJLOAB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14991EB0)
#define DBNABNJLOAB__CTOR_OFFSET UNITYSDK_OFFSET(0x14992210)

inline static constexpr unsigned int DBNABNJLOAB_TypeDefinitionIndex = 80928;

class DBNABNJLOAB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* GNHOHLEIPAB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AJBCIEMODFO; // 0x20
	::FGCOIBFFCHB* GBJLOMMHPGO; // 0x28
	::FGCOIBFFCHB* MGOBDMOALHI; // 0x30
	::UnityEngine::RectTransform* MDJAHDEJNCK; // 0x38
	::FGCOIBFFCHB* LJIAHNDGGGO; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* MBCDBCGADMB; // 0x48
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x50
	::FGCOIBFFCHB* CHFDIEDMDLI; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNABNJLOAB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DBNABNJLOAB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DBNABNJLOAB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNABNJLOAB_KGEBDLGBGNM_OFFSET))(this);
	}
};
