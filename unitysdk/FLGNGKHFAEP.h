#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }

#define FLGNGKHFAEP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13228160)
#define FLGNGKHFAEP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13228040)
#define FLGNGKHFAEP__CTOR_OFFSET UNITYSDK_OFFSET(0x13228150)

inline static constexpr unsigned int FLGNGKHFAEP_TypeDefinitionIndex = 67527;

class FLGNGKHFAEP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* HNFDKHOKIIC; // 0x18
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x20
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGNGKHFAEP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FLGNGKHFAEP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FLGNGKHFAEP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
