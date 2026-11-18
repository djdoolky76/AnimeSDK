#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OKPICMMIMEC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1EB4A480)
#define OKPICMMIMEC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1EB4A370)
#define OKPICMMIMEC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1EB4A170)
#define OKPICMMIMEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB4A470)

inline static constexpr unsigned int OKPICMMIMEC_TypeDefinitionIndex = 96422;

class OKPICMMIMEC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* PHOONPGDHAC; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::UnityEngine::GameObject* GFMAKNKJADB; // 0x38
	::FGCOIBFFCHB* JJEEOEKCKND; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x48
	::FGCOIBFFCHB* GMAFKMPOJKF; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPICMMIMEC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OKPICMMIMEC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPICMMIMEC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OKPICMMIMEC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
