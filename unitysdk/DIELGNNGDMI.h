#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DIELGNNGDMI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x7FBD8F0)
#define DIELGNNGDMI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x7FBD860)
#define DIELGNNGDMI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x7FBD680)
#define DIELGNNGDMI__CTOR_OFFSET UNITYSDK_OFFSET(0x7FBD8E0)

inline static constexpr unsigned int DIELGNNGDMI_TypeDefinitionIndex = 66839;

class DIELGNNGDMI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* LDBCOKNFDDC; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* CKJOCDHDELD; // 0x20
	::MoleMole::UIGeneralButtonController* KOJGJNNMDKE; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* MGMDJCCEAIB; // 0x30
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* AAAHIEKNIBD; // 0x40
	::LGINJIKKBJA* NOIOMPDGEEI; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* BJHOOMEPAKA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIELGNNGDMI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DIELGNNGDMI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIELGNNGDMI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DIELGNNGDMI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
