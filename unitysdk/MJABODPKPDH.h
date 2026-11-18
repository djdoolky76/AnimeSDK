#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MJABODPKPDH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1216B150)
#define MJABODPKPDH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1216B040)
#define MJABODPKPDH__CTOR_OFFSET UNITYSDK_OFFSET(0x1216B140)

inline static constexpr unsigned int MJABODPKPDH_TypeDefinitionIndex = 54672;

class MJABODPKPDH : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* NBFCNDIFJHF; // 0x18
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x20
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HCOHONOBCEF; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJABODPKPDH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MJABODPKPDH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MJABODPKPDH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
