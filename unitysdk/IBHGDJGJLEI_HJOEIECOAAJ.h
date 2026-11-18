#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IBHGDJGJLEI_HJOEIECOAAJ_EALNONFDDMA_OFFSET UNITYSDK_OFFSET(0x140D7D70)
#define IBHGDJGJLEI_HJOEIECOAAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x140D7D60)

inline static constexpr unsigned int IBHGDJGJLEI_HJOEIECOAAJ_TypeDefinitionIndex = 55760;

class IBHGDJGJLEI_HJOEIECOAAJ : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_HJOEIECOAAJ__CTOR_OFFSET))(this);
	}

	::System::Void EALNONFDDMA(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_HJOEIECOAAJ_EALNONFDDMA_OFFSET))(this, GLAOEHCGCFO);
	}
};
