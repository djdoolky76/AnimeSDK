#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole::Config { class UIAchievementAnimConfig; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EBGIJLHLNJB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17221E70)
#define EBGIJLHLNJB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17221D20)
#define EBGIJLHLNJB__CTOR_OFFSET UNITYSDK_OFFSET(0x17221E60)

inline static constexpr unsigned int EBGIJLHLNJB_TypeDefinitionIndex = 50801;

class EBGIJLHLNJB : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x18
	::MoleMole::Config::UIAchievementAnimConfig* EPDDOBLIFEC; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* FIDHNODLLCB; // 0x28
	::UnityEngine::RectTransform* ANDFIBAKEAE; // 0x30
	::UnityEngine::RectTransform* KEHPAOOHNOI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGIJLHLNJB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EBGIJLHLNJB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EBGIJLHLNJB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
