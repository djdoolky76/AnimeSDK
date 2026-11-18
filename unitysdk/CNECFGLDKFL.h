#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CNECFGLDKFL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19A195F0)
#define CNECFGLDKFL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19A194E0)
#define CNECFGLDKFL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19A19330)
#define CNECFGLDKFL__CTOR_OFFSET UNITYSDK_OFFSET(0x19A195E0)

inline static constexpr unsigned int CNECFGLDKFL_TypeDefinitionIndex = 71398;

class CNECFGLDKFL : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* HPACBLKCJLG; // 0x18
	::FGCOIBFFCHB* GOJJJHNOFON; // 0x20
	::UnityEngine::Transform* IPJFNLGKFKK; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* NCMBJPNBOBD; // 0x30
	::FGCOIBFFCHB* PMKFHIFIBPM; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNECFGLDKFL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNECFGLDKFL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNECFGLDKFL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNECFGLDKFL_KGEBDLGBGNM_OFFSET))(this);
	}
};
