#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define EACCMHAGKPA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15465990)
#define EACCMHAGKPA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x154658A0)
#define EACCMHAGKPA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x154656F0)
#define EACCMHAGKPA__CTOR_OFFSET UNITYSDK_OFFSET(0x15465980)

inline static constexpr unsigned int EACCMHAGKPA_TypeDefinitionIndex = 76649;

class EACCMHAGKPA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* CFFOPIOCDJE; // 0x18
	::FGCOIBFFCHB* MPFDMAPAHOO; // 0x20
	::MonoUITableScrollV2* MNAIJPJCMAO; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* ECMEGBEIOLH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACCMHAGKPA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EACCMHAGKPA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACCMHAGKPA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EACCMHAGKPA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
