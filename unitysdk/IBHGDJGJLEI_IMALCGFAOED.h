#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IBHGDJGJLEI_IMALCGFAOED_EALNONFDDMA_OFFSET UNITYSDK_OFFSET(0x141B10F0)
#define IBHGDJGJLEI_IMALCGFAOED__CTOR_OFFSET UNITYSDK_OFFSET(0x141B10E0)

inline static constexpr unsigned int IBHGDJGJLEI_IMALCGFAOED_TypeDefinitionIndex = 55784;

class IBHGDJGJLEI_IMALCGFAOED : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_IMALCGFAOED__CTOR_OFFSET))(this);
	}

	::System::Void EALNONFDDMA(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_IMALCGFAOED_EALNONFDDMA_OFFSET))(this, GLAOEHCGCFO);
	}
};
