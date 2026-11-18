#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HMNFDBKIGIA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16CFE430)
#define HMNFDBKIGIA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16CFE2B0)
#define HMNFDBKIGIA__CTOR_OFFSET UNITYSDK_OFFSET(0x16CFE420)

inline static constexpr unsigned int HMNFDBKIGIA_TypeDefinitionIndex = 63614;

class HMNFDBKIGIA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* NLAONMDANKL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* NKADAPNGKAI; // 0x28
	::UnityEngine::RectTransform* LLDKINCKIOG; // 0x30
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* HAFNPNLNNPG; // 0x40
	::UnityEngine::RectTransform* CAIJPKCCJJO; // 0x48
	::UnityEngine::GameObject* FLOANEOLEFN; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNFDBKIGIA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMNFDBKIGIA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMNFDBKIGIA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
