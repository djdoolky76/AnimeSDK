#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BDLPDPJFGBD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x126806E0)
#define BDLPDPJFGBD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x126805E0)
#define BDLPDPJFGBD__CTOR_OFFSET UNITYSDK_OFFSET(0x126806D0)

inline static constexpr unsigned int BDLPDPJFGBD_TypeDefinitionIndex = 77039;

class BDLPDPJFGBD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x18
	::UnityEngine::Animation* OBNLBMABFPF; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* JFIGKJOGFFO; // 0x28
	::UnityEngine::RectTransform* PMCLJMMPEEH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLPDPJFGBD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDLPDPJFGBD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDLPDPJFGBD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
