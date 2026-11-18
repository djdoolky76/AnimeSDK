#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define GNMCNOHCHML_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13DF2F80)
#define GNMCNOHCHML_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13DF2E70)
#define GNMCNOHCHML__CTOR_OFFSET UNITYSDK_OFFSET(0x13DF2F70)

inline static constexpr unsigned int GNMCNOHCHML_TypeDefinitionIndex = 90872;

class GNMCNOHCHML : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* KDOFOMOEMFH; // 0x18
	::UnityEngine::CanvasGroup* GPHAEDMALMK; // 0x20
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCNOHCHML__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GNMCNOHCHML_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GNMCNOHCHML_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
