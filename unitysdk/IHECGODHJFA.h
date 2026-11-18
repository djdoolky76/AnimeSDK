#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }

#define IHECGODHJFA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xEBD7880)
#define IHECGODHJFA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xEBD7790)
#define IHECGODHJFA__CTOR_OFFSET UNITYSDK_OFFSET(0xEBD7870)

inline static constexpr unsigned int IHECGODHJFA_TypeDefinitionIndex = 76216;

class IHECGODHJFA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* HNFDKHOKIIC; // 0x18
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHECGODHJFA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IHECGODHJFA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IHECGODHJFA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
