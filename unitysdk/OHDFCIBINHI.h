#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OHDFCIBINHI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12932BC0)
#define OHDFCIBINHI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12932A80)
#define OHDFCIBINHI__CTOR_OFFSET UNITYSDK_OFFSET(0x12932BB0)

inline static constexpr unsigned int OHDFCIBINHI_TypeDefinitionIndex = 54883;

class OHDFCIBINHI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* NBKLACOHBLK; // 0x18
	::UnityEngine::RectTransform* BLNPPOENIJM; // 0x20
	::UnityEngine::RectTransform* IOPEPJOGNIA; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x30
	::UnityEngine::Transform* AAMKJLCCIPO; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x40
	::UnityEngine::Transform* PEANPPLFKGB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDFCIBINHI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OHDFCIBINHI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OHDFCIBINHI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
