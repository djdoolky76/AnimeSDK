#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EKMCFKEGNKE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x154B8080)
#define EKMCFKEGNKE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x154B7FA0)
#define EKMCFKEGNKE__CTOR_OFFSET UNITYSDK_OFFSET(0x154B8070)

inline static constexpr unsigned int EKMCFKEGNKE_TypeDefinitionIndex = 71052;

class EKMCFKEGNKE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* CFPICONAKJC; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x20
	::UnityEngine::RectTransform* OMKKKALAKHL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMCFKEGNKE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EKMCFKEGNKE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EKMCFKEGNKE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
