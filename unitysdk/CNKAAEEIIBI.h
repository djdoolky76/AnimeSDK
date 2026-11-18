#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CNKAAEEIIBI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1326FA40)
#define CNKAAEEIIBI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1326F940)
#define CNKAAEEIIBI__CTOR_OFFSET UNITYSDK_OFFSET(0x1326FA30)

inline static constexpr unsigned int CNKAAEEIIBI_TypeDefinitionIndex = 76765;

class CNKAAEEIIBI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* CIPIDBOOIIL; // 0x18
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* JHGGHHOJDPF; // 0x20
	::UnityEngine::RectTransform* PHGPKDJBHJF; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* PPPNOAPFDMN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNKAAEEIIBI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNKAAEEIIBI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNKAAEEIIBI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
