#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PIDKLNDIADN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x194A3270)
#define PIDKLNDIADN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x194A3140)
#define PIDKLNDIADN__CTOR_OFFSET UNITYSDK_OFFSET(0x194A3260)

inline static constexpr unsigned int PIDKLNDIADN_TypeDefinitionIndex = 40368;

class PIDKLNDIADN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* CPENONMEEMO; // 0x18
	::UnityEngine::RectTransform* IDFFPOKOCOM; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* KMKBNPMPECM; // 0x28
	::GCIMMDDIFBJ* OOMGDIIHIGG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDKLNDIADN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PIDKLNDIADN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PIDKLNDIADN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
