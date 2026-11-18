#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ELDFDHMFCDP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF9DE4D0)
#define ELDFDHMFCDP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF9DE3F0)
#define ELDFDHMFCDP__CTOR_OFFSET UNITYSDK_OFFSET(0xF9DE4C0)

inline static constexpr unsigned int ELDFDHMFCDP_TypeDefinitionIndex = 69362;

class ELDFDHMFCDP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* GLCMNNKGBHJ; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20
	::UnityEngine::RectTransform* AJIIOIGEEBJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDFDHMFCDP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ELDFDHMFCDP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ELDFDHMFCDP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
