#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJGJMPPMJKN.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define IFHEHPMAKEB_GIPDJKFKLFE_OFFSET UNITYSDK_OFFSET(0x1A39D4C0)
#define IFHEHPMAKEB_KEABBDPLEAG_OFFSET UNITYSDK_OFFSET(0x1A39D4D0)
#define IFHEHPMAKEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A39D420)

inline static constexpr unsigned int IFHEHPMAKEB_TypeDefinitionIndex = 60624;

class IFHEHPMAKEB : public ::System::Exception
{
public:
	::DJGJMPPMJKN _JNJDDIGJLOD_k__BackingField; // 0x88

	::System::Void _ctor(::DJGJMPPMJKN FKMHMOELCIO, ::System::String* NAPFALLANDL, ::System::Exception* MIHHIJJKKAD)
	{
		return ((::System::Void(*)(::PVOID, ::DJGJMPPMJKN, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + IFHEHPMAKEB__CTOR_OFFSET))(this, FKMHMOELCIO, NAPFALLANDL, MIHHIJJKKAD);
	}

	::System::Void GIPDJKFKLFE(::DJGJMPPMJKN EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DJGJMPPMJKN))((::PBYTE)hIl2Cpp + IFHEHPMAKEB_GIPDJKFKLFE_OFFSET))(this, EGEGIMGMJHN);
	}

	::DJGJMPPMJKN KEABBDPLEAG()
	{
		return ((::DJGJMPPMJKN(*)(::PVOID))((::PBYTE)hIl2Cpp + IFHEHPMAKEB_KEABBDPLEAG_OFFSET))(this);
	}
};
