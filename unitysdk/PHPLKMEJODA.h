#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PHPLKMEJODA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14B9DDC0)
#define PHPLKMEJODA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14B9DCC0)
#define PHPLKMEJODA__CTOR_OFFSET UNITYSDK_OFFSET(0x14B9DDB0)

inline static constexpr unsigned int PHPLKMEJODA_TypeDefinitionIndex = 55213;

class PHPLKMEJODA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* FDJHEBHLJLD; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BJHIPHJIFNI; // 0x28
	::UnityEngine::Transform* AMEEMEPHGEL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPLKMEJODA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHPLKMEJODA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHPLKMEJODA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
