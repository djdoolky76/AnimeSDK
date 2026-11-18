#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JPGLGMLBMFF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x155D31F0)
#define JPGLGMLBMFF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x155D3130)
#define JPGLGMLBMFF__CTOR_OFFSET UNITYSDK_OFFSET(0x155D31E0)

inline static constexpr unsigned int JPGLGMLBMFF_TypeDefinitionIndex = 87354;

class JPGLGMLBMFF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HCOHONOBCEF; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGLGMLBMFF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPGLGMLBMFF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPGLGMLBMFF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
